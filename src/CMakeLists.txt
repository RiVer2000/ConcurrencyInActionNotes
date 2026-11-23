add_executable(main)
target_sources(main PRIVATE main.cpp)
target_compile_features(main PUBLIC cxx_std_17)
set_target_properties(main PROPERTIES CXX_STANDARD_REQUIRED ON CXX_EXTENSIONS OFF)

