set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES exceptions/*.h linalg/*.h linalg/*.cpp  video/*.h video/*.cpp)

add_library(common SHARED ${SOURCES})



set_target_properties(common PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(common INTERFACE ${CMAKE_CURRENT_LIST_DIR})