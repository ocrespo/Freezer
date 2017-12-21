add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/observer)


set (Model_SOURCES ${Model_SOURCES} 
 					Model.cpp)


add_library(model STATIC ${Model_SOURCES}  
						$<TARGET_OBJECTS:observer>
						)
