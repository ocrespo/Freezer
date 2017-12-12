


#set (Freezer_SOURCES ${LITERTP_HEADERS} liteRTP.h ) #Add .h here, just for standalone headers

set (Freezer_SOURCES ${LITERTP_SOURCES} main.cpp)


add_executable(Freezer ${Freezer_SOURCES})

target_link_libraries(Freezer Qt5::Widgets)
 
install (TARGETS Freezer DESTINATION release/bin)

################## TESTS ############################
#add_executable(serverTest ServerTest.cpp)
#target_link_libraries(serverTest ConnectionManager)
#target_include_directories(serverTest PUBLIC release/include)

#add_executable(clientTest ClientTest.cpp)
#target_link_libraries(clientTest ConnectionManager)
#target_include_directories(clientTest PUBLIC release/include)



