

# This is a skeleton CMakeLists.txt file, auto-generated on
# Tue Apr 18 12:03:13 CDT 2023.  The developer(s) of this package should delete
# this comment as well as adding dependent targets, packages,
# etc. specific to the package. For details on how to write a package,
# please see
# https://dune-daq-sw.readthedocs.io/en/latest/packages/daq-cmake/

cmake_minimum_required(VERSION 3.12)
project(nddetdataformats VERSION 0.0.0)

find_package(daq-cmake REQUIRED)

daq_setup_environment()


find_package(Boost COMPONENTS unit_test_framework REQUIRED)

##############################################################################

daq_add_library( LINK_LIBRARIES )

##############################################################################

daq_add_python_bindings(*.cpp LINK_LIBRARIES ${PROJECT_NAME} ) 

##############################################################################

daq_add_unit_test(Placeholder_test LINK_LIBRARIES)  # Placeholder_test should be replaced with real unit tests

##############################################################################

daq_install()

