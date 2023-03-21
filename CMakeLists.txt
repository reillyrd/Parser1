cmake_minimum_required(VERSION 3.10)
project(Parser1)

MESSAGE( [Parser1] " PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR})

set(CMAKE_CXX_STANDARD 17)

#pcap
include(pcap-config.cmake)
set(PCAP_INCLUDE_DIR = /usr/include)
set(PCAP_LIBRARY = /usr/lib/x86_64-linux-gnu/libpcap.so)
MESSAGE( [Parser1] " PCAP_INCLUDE_DIR = ${PCAP_INCLUDE_DIR}")
MESSAGE( [Parser1] " PCAP_LIBRARY = ${PCAP_LIBRARY}")
find_package(PCAP REQUIRED)

set(sources Parser1.cpp)

# the executable
add_executable(Parser1 ${sources})
target_link_libraries(Parser1 pcap)
