/**
 * @file Nddetdataformats_test.cxx
 *
 * This is part of the DUNE DAQ Application Framework, copyright 2020.
 * Licensing/copyright details are in the COPYING file that you should have
 * received with this code.
 */

#include "nddetdataformats/PACMANFrame.hpp"
#include "nddetdataformats/MPDFrame.hpp"

#define BOOST_TEST_MODULE Nddetdataformats_test // NOLINT

#include "boost/test/unit_test.hpp"

BOOST_AUTO_TEST_SUITE(Nddetdataformats_test)

BOOST_AUTO_TEST_CASE(HelpfulMessage)
{
  BOOST_TEST_MESSAGE("This unit test file is simply here to check that the headers compile correctly");
}

BOOST_AUTO_TEST_SUITE_END()
