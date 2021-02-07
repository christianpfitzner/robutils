set(BINARY ${CMAKE_PROJECT_NAME})


file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

find_package (Eigen3 3.3 REQUIRED)
include_directories(EIGEN3_INCLUDE_DIR)

add_executable(${BINARY}_run ${SOURCES})

# target_link_libraries(${BINARY}_run Eigen3::Eigen)  

add_library(${BINARY}_lib STATIC ${SOURCES})