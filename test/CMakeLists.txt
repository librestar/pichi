set(KEYS_TESTS keys)
set(HASH_TESTS hash)
set(HMAC_TESTS hmac)
set(HKDF_TESTS hkdf)
set(BASE64_TESTS base64)
set(METHOD_TESTS method)
set(CRYPTOGEAM_TESTS cryptogram)
set(ROUTER_TESTS router)
set(URI_TESTS uri)
set(ENDPOINT_TESTS endpoint)
set(SOCKS5_TESTS socks5)
set(HTTP_TESTS http)
set(SS_TESTS ss)
set(BALANCER_TESTS balancer)
set(VOS_TESTS vos)
set(VO_CREDENTIAL vo_credential)
set(VO_INGRESS_TESTS vo_ingress)
set(VO_EGRESS_TESTS vo_egress)
set(VO_RULE_TESTS vo_rule)
set(VO_ROUTE_TESTS vo_route)
set(VO_OPTIONS_TESTS vo_options)
set(TROJAN_TESTS trojan)

link_libraries(${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_CONTEXT_LIBRARY})

configure_file(geo.mmdb ${CMAKE_CURRENT_BINARY_DIR}/geo.mmdb COPYONLY)

set(UTILS_SRC utils.cpp)
set(VO_SRC vo.cpp)

add_executable(${KEYS_TESTS} keys.cpp ${UTILS_SRC})
add_executable(${HASH_TESTS} hash.cpp ${UTILS_SRC})
add_executable(${HMAC_TESTS} hmac.cpp ${UTILS_SRC})
add_executable(${HKDF_TESTS} hkdf.cpp ${UTILS_SRC})
add_executable(${BASE64_TESTS} base64.cpp ${UTILS_SRC})
add_executable(${METHOD_TESTS} method.cpp ${UTILS_SRC})
add_executable(${CRYPTOGEAM_TESTS} cryptogram.cpp ${UTILS_SRC})
add_executable(${ROUTER_TESTS} router.cpp ${UTILS_SRC})
add_executable(${URI_TESTS} uri.cpp ${UTILS_SRC})
add_executable(${ENDPOINT_TESTS} endpoint.cpp ${UTILS_SRC})
add_executable(${SOCKS5_TESTS} socks5.cpp ${UTILS_SRC})
add_executable(${HTTP_TESTS} http.cpp ${UTILS_SRC})
add_executable(${SS_TESTS} ss.cpp ${UTILS_SRC})
add_executable(${BALANCER_TESTS} balancer.cpp ${UTILS_SRC})
add_executable(${VOS_TESTS} vos.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${VO_CREDENTIAL} vo_credential.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${VO_INGRESS_TESTS} vo_ingress.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${VO_EGRESS_TESTS} vo_egress.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${VO_RULE_TESTS} vo_rule.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${VO_ROUTE_TESTS} vo_route.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${VO_OPTIONS_TESTS} vo_options.cpp ${UTILS_SRC} ${VO_SRC})
add_executable(${TROJAN_TESTS} trojan.cpp ${UTILS_SRC})

add_test(NAME ${KEYS_TESTS} COMMAND ${KEYS_TESTS})
add_test(NAME ${HASH_TESTS} COMMAND ${HASH_TESTS})
add_test(NAME ${HMAC_TESTS} COMMAND ${HMAC_TESTS})
add_test(NAME ${HKDF_TESTS} COMMAND ${HKDF_TESTS})
add_test(NAME ${BASE64_TESTS} COMMAND ${BASE64_TESTS})
add_test(NAME ${METHOD_TESTS} COMMAND ${METHOD_TESTS})
add_test(NAME ${CRYPTOGEAM_TESTS} COMMAND ${CRYPTOGEAM_TESTS})
add_test(NAME ${ROUTER_TESTS} COMMAND ${ROUTER_TESTS})
add_test(NAME ${URI_TESTS} COMMAND ${URI_TESTS})
add_test(NAME ${ENDPOINT_TESTS} COMMAND ${ENDPOINT_TESTS})
add_test(NAME ${SOCKS5_TESTS} COMMAND ${SOCKS5_TESTS})
add_test(NAME ${HTTP_TESTS} COMMAND ${HTTP_TESTS})
add_test(NAME ${SS_TESTS} COMMAND ${SS_TESTS})
add_test(NAME ${BALANCER_TESTS} COMMAND ${BALANCER_TESTS})
add_test(NAME ${VOS_TESTS} COMMAND ${VOS_TESTS})
add_test(NAME ${VO_CREDENTIAL} COMMAND ${VO_CREDENTIAL})
add_test(NAME ${VO_INGRESS_TESTS} COMMAND ${VO_INGRESS_TESTS})
add_test(NAME ${VO_EGRESS_TESTS} COMMAND ${VO_EGRESS_TESTS})
add_test(NAME ${VO_RULE_TESTS} COMMAND ${VO_RULE_TESTS})
add_test(NAME ${VO_ROUTE_TESTS} COMMAND ${VO_ROUTE_TESTS})
add_test(NAME ${VO_OPTIONS_TESTS} COMMAND ${VO_OPTIONS_TESTS})
add_test(NAME ${TROJAN_TESTS} COMMAND ${TROJAN_TESTS})
