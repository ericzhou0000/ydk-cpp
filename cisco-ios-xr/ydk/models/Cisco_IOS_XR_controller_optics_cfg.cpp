
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_controller_optics_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_optics_cfg {


const Enum::YLeaf ThresholdEnum::low {1, "low"};
const Enum::YLeaf ThresholdEnum::high {2, "high"};

const Enum::YLeaf OpticsFecEnum::fec_none {0, "fec-none"};
const Enum::YLeaf OpticsFecEnum::fec_h15 {1, "fec-h15"};
const Enum::YLeaf OpticsFecEnum::fec_h25 {2, "fec-h25"};
const Enum::YLeaf OpticsFecEnum::fec_h15_de {4, "fec-h15-de"};
const Enum::YLeaf OpticsFecEnum::fec_h25_de {8, "fec-h25-de"};

const Enum::YLeaf OpticsLoopbackEnum::none {0, "none"};
const Enum::YLeaf OpticsLoopbackEnum::internal {1, "internal"};
const Enum::YLeaf OpticsLoopbackEnum::line {2, "line"};

const Enum::YLeaf OpticsDwdmCarrierGridEnum::Y_50g_hz_grid {0, "50g-hz-grid"};
const Enum::YLeaf OpticsDwdmCarrierGridEnum::Y_100mhz_grid {1, "100mhz-grid"};

const Enum::YLeaf OpticsDwdmCarrierParamEnum::itu_ch {0, "itu-ch"};
const Enum::YLeaf OpticsDwdmCarrierParamEnum::wavelength {1, "wavelength"};
const Enum::YLeaf OpticsDwdmCarrierParamEnum::frequency {2, "frequency"};


}
}

