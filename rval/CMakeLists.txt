cmake_minimum_required(VERSION 3.10)

set(HEADERS move_constructor.h)
source_group("My_Headers" FILES ${HEADERS})
add_executable(rval_ref test_rvalue_ref.cpp move_constructor.cpp ${HEADERS}) 

