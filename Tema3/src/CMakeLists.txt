add_library(src STATIC main.cpp)

add_subdirectory(Analyzer)
add_subdirectory(Converter)
add_subdirectory(Generator)

target_link_libraries(src PRIVATE Analyzer Generator Converter)