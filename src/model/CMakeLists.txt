#add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/observer)


set (Model_SOURCES ${Model_SOURCES} 
 					Model.cpp)


add_library(model STATIC ${Model_SOURCES}  
						)

						
#set (Observer_SOURCES ${Observer_SOURCES} 
 #                     	${CMAKE_CURRENT_SOURCE_DIR}/Subject.cpp
 #                       ) #Add .cpp here

#add_library(observer OBJECT ${Observer_SOURCES})