
set(src_emrtd
    mrz.c
)

set(emrtd_library "emrtd" PARENT_SCOPE)

add_library(${emrtd_library} STATIC ${src_emrtd})
