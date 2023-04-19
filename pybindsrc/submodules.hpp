#ifndef NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
#define NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
        
#include <pybind11/pybind11.h>

namespace dunedaq::nddetdataformats {

  namespace mpd::python {
    extern void register_mpd(pybind11::module &);    
  }  // namespace mpd::python

}  // namespace dunedaq::nddetdataformats

#endif // NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
