add_library(Analyzer SequenceAnalyzer.hpp SequenceAnalyzer.tpp)

target_include_directories(Analyzer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(Analyzer PROPERTIES LINKER_LANGUAGE CXX)