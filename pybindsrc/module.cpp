/**
 * @file module.cpp
 *
 * This is part of the DUNE DAQ Software Suite, copyright 2020.
 * Licensing/copyright details are in the COPYING file that you should have
 * received with this code.
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

namespace py = pybind11;

namespace dunedaq::nddetdataformats::python {

  extern void register_mpd(pybind11::module &);    

PYBIND11_MODULE(_daq_nddetdataformats_py, m)
{

  m.doc() = "C++ implementation of the nddetdataformats modules";

  register_mpd(m);
}

} // namespace dunedaq::nddetdataformats::python
