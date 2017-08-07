#ifndef _CISCO_XE_OPENCONFIG_IF_ETHERNET_EXT_
#define _CISCO_XE_OPENCONFIG_IF_ETHERNET_EXT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_openconfig/openconfig_if_ethernet.hpp"

namespace cisco_ios_xe {
namespace cisco_xe_openconfig_if_ethernet_ext {

class Auto_ : public openconfig::openconfig_if_ethernet::Ethernet_Speed, virtual ydk::Identity
{
    public:
        Auto_();
        ~Auto_();


}; // Auto_


}
}

#endif /* _CISCO_XE_OPENCONFIG_IF_ETHERNET_EXT_ */
