
set(src_emrtd
    mrz.c
)

set(emrtd_library_static "emrtd_static" PARENT_SCOPE)
set(emrtd_library "emrtd" PARENT_SCOPE)

add_library(${emrtd_library_static} STATIC ${src_emrtd})

add_library(${emrtd_library} SHARED ${src_emrtd})
