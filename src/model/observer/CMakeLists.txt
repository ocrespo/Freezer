

set (Observer_SOURCES ${Observer_SOURCES} 
                      	${CMAKE_CURRENT_SOURCE_DIR}/Subject.cpp
                        ) #Add .cpp here

add_library(observer OBJECT ${Observer_SOURCES})
