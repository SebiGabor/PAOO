add_library(Converter STATIC DNAConverter.cpp)

target_include_directories(Converter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})