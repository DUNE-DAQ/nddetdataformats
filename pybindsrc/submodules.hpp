#ifndef NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
#define NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
        
#include <pybind11/pybind11.h>

namespace dunedaq::nddetdataformats::python {

  extern void register_mpd(pybind11::module &);    

}  // namespace dunedaq::nddetdataformats::python

#endif // NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
