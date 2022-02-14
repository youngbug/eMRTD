cmake_minimum_required(VERSION 3.5.1)

project("eMRTD")

#set project root direcrory
set(EMRTD_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${EMRTD_DIR}/include)

include_directories(${EMRTD_DIR}/library)

add_subdirectory(include)

#add_subdirectory(3rdparty)

add_subdirectory(library)

add_subdirectory(programs)
