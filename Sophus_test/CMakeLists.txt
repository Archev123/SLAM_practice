project(sophus_test)

FIND_PACKAGE(Sophus REQUIRED)
INCLUDE_DIRECTORIES(${Sophus_INCLUDE_DIRS})

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_FLAGS_DEBUG  "-O0 -g -O3")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -std=c++11 -Wno-deprecated-declarations -ftemplate-backtrace-limit=0")


add_executable(sophus_test sophus_test.cpp)
target_link_libraries(sophus_test ${Sophus_LIBRARIES})