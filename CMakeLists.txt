cmake_minimum_required(VERSION 3.0)
project(yaicit)
add_compile_options(-std=c++11)
find_package(catkin REQUIRED COMPONENTS bar sequences)

catkin_package(
  CATKIN_DEPENDS bar sequences
)


###########
## BUILD ##
###########

include_directories(${catkin_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} src/${PROJECT_NAME}.cpp)
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})


#############
## INSTALL ##
#############

# executables
install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
