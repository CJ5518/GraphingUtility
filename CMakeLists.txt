cmake_minimum_required(VERSION 3.10)
set(CMAKE_FIND_FRAMEWORK NEVER)

project(GraphingUtility)

set(GRAPHING_UTILITY_SOURCE
	src/main.cpp
)

set(GRAPHING_UTILITY_HEADERS
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

if (BUILD_SHARED_LIBS)
	set(SFML_STATIC_LIBRARIES TRUE)
endif()

#_CRT_SECURE_NO_WARNINGS
add_definitions(-D_CRT_SECURE_NO_WARNINGS)

add_subdirectory(extern/SFML-2.5.1)
add_subdirectory(extern/ImGui)

add_executable(${PROJECT_NAME} ${GRAPHING_UTILITY_SOURCE} ${GRAPHING_UTILITY_HEADERS})


target_include_directories(${PROJECT_NAME} PUBLIC "include")

target_link_libraries(${PROJECT_NAME} sfml-window sfml-graphics sfml-system)
target_link_libraries(${PROJECT_NAME} imgui)
target_include_directories(${PROJECT_NAME} PUBLIC "extern/box2d-2.4.1/include")