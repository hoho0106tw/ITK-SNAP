
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was Config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

####################################################################################
include ( "${CMAKE_CURRENT_LIST_DIR}/Convert3DTargets.cmake" )

set ( Convert3D_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set ( Convert3D_LIBRARIES cnd_api cnd_driver cnd_adapters cnd_maxflow )
