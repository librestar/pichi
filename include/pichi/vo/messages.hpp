#ifndef PICHI_VO_MESSAGES_HPP
#define PICHI_VO_MESSAGES_HPP

#include <string_view>

namespace pichi::vo::msg {

static std::string_view const OBJ_TYPE_ERROR = "JSON object required";
static std::string_view const ARY_TYPE_ERROR = "JSON array required";
static std::string_view const INT_TYPE_ERROR = "Integer required";
static std::string_view const STR_TYPE_ERROR = "String required";
static std::string_view const BOOL_TYPE_ERROR = "Boolean required";
static std::string_view const PAIR_TYPE_ERROR = "Pair type required";
static std::string_view const ARY_SIZE_ERROR = "Array size error";
static std::string_view const AT_INVALID = "Invalid adapter type string";
static std::string_view const CM_INVALID = "Invalid crypto method string";
static std::string_view const PT_INVALID = "Port number must be in range (0, 65536)";
static std::string_view const DM_INVALID = "Invalid delay mode type string";
static std::string_view const DL_INVALID = "Delay time must be in range [0, 300]";
static std::string_view const BA_INVALID = "Invalid balance string";
static std::string_view const STR_EMPTY = "Empty string";
static std::string_view const CRE_EMPTY = "Empty credentials";
static std::string_view const MISSING_TYPE_FIELD = "Missing type field";
static std::string_view const MISSING_HOST_FIELD = "Missing host field";
static std::string_view const MISSING_BIND_FIELD = "Missing bind field";
static std::string_view const MISSING_PORT_FIELD = "Missing port field";
static std::string_view const MISSING_METHOD_FIELD = "Missing method field";
static std::string_view const MISSING_PW_FIELD = "Missing password field";
static std::string_view const MISSING_DELAY_FIELD = "Missing delay field";
static std::string_view const MISSING_CERT_FILE_FIELD = "Missing cert_file field";
static std::string_view const MISSING_KEY_FILE_FIELD = "Missing key_file field";
static std::string_view const TOO_LONG_NAME_PASSWORD = "Name or password is too long";
static std::string_view const MISSING_DESTINATIONS_FIELD = "Missiong destinations field";
static std::string_view const MISSING_BALANCE_FIELD = "Missiong balance field";
static std::string_view const MISSING_REMOTE_HOST_FIELD = "Missing remote_host field";
static std::string_view const MISSING_REMOTE_PORT_FIELD = "Missing remote_port field";
static std::string_view const MISSING_PASSWORDS_FIELD = "MIssing passwords field";

}  // namespace pichi::vo::msg

#endif  // PICHI_VO_MESSAGES_HPP
