FILE(REMOVE_RECURSE
  "CMakeFiles/my_lib.dir/lib.cpp.o"
  "libmy_lib.pdb"
  "libmy_lib.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/my_lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
