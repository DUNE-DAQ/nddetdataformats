cmake_minimum_required(VERSION 3.12)
project(nddetdataformats VERSION 1.0.0)

find_package(daq-cmake REQUIRED)

daq_setup_environment()


find_package(Boost COMPONENTS unit_test_framework REQUIRED)

##############################################################################

daq_add_library( LINK_LIBRARIES )

##############################################################################

daq_add_python_bindings(*.cpp LINK_LIBRARIES ${PROJECT_NAME} ) 

##############################################################################

daq_add_unit_test(Nddetdataformats_test LINK_LIBRARIES) 

##############################################################################

daq_install()

