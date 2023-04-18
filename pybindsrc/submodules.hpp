#ifndef __DUNEDAQ_NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP__
#define __DUNEDAQ_NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP__ 

#include <pybind11/pybind11.h>

namespace dunedaq::nddetdataformats {

namespace mpd {
namespace python {
extern void register_mpd(pybind11::module &);    
}
}  // namespace mpd::python

}  // namespace dunedaq::nddetdataformats

#endif /* __DUNEDAQ_NDDETDATAFORMATS_PYBINDSRC_SUBMODULES_HPP__ */
