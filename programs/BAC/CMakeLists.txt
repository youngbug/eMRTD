
add_executable(bac  bac.c)

target_link_libraries(bac ${emrtd_library_static} )
#target_include_directories(bac PUBLIC ${EMRTD_DIR}/include)
#message(WARNING "include dir is ${EMRTD_DIR}/include/emrtd")