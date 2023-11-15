add_library(Generator STATIC DNASequenceGenerator.cpp)

target_include_directories(Generator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})