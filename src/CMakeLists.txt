

#Source
       
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/model)
        
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/presenter)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/view)

set (Freezer_SOURCES ${Freezer_SOURCES} main.cpp)


#Resource

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Resources)

qt5_add_resources(Freezer_RESOURCES ${Freezer_RESOURCES} )


add_executable(${PROJECT_NAME}  ${Freezer_SOURCES} ${Freezer_RESOURCES})

target_link_libraries(${PROJECT_NAME} model)

target_link_libraries(${PROJECT_NAME}  Qt5::Widgets)
 
install (TARGETS ${PROJECT_NAME}  DESTINATION ${CMAKE_BUILD_TYPE}//bin)




