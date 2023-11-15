file(REMOVE_RECURSE
  "libAnalyzer.a"
  "libAnalyzer.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/Analyzer.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
