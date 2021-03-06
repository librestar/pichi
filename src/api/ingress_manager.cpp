#include <pichi/common/config.hpp>
// Include config.hpp first
#include <pichi/api/ingress_manager.hpp>
#include <pichi/common/asserts.hpp>
#include <pichi/vo/ingress.hpp>

using namespace std;
namespace asio = boost::asio;
namespace ip = asio::ip;
namespace sys = boost::system;
using ip::tcp;

namespace pichi::api {

IngressManager::IngressManager(boost::asio::io_context& io, Handler onChange)
  : io_{io}, onChange_{onChange}, c_{}
{
}

IngressManager::ValueType IngressManager::generatePair(DelegateIterator it)
{
  return make_pair(cref(it->first), cref(it->second.vo_));
}

IngressManager::ConstIterator IngressManager::begin() const noexcept
{
  return {cbegin(c_), cend(c_), &IngressManager::generatePair};
}

IngressManager::ConstIterator IngressManager::end() const noexcept
{
  return {cend(c_), cend(c_), &IngressManager::generatePair};
}

void IngressManager::update(string const& name, VO ivo)
{
  assertFalse(ivo.type_ == AdapterType::DIRECT, PichiError::MISC);
  assertFalse(ivo.type_ == AdapterType::REJECT, PichiError::MISC);

  auto it = c_.find(name);
  if (it == std::end(c_)) {
    auto [nit, inserted] = c_.try_emplace(name, io_, move(ivo));
    assertTrue(inserted, PichiError::MISC);
    it = nit;
  }
  else {
    it->second.reset(io_, move(ivo));
  }
  auto&& [iname, holder] = *it;
  invoke(onChange_, iname, holder);
}

void IngressManager::erase(string_view name)
{
  auto it = c_.find(name);
  if (it != std::end(c_)) c_.erase(it);
}

}  // namespace pichi::api
