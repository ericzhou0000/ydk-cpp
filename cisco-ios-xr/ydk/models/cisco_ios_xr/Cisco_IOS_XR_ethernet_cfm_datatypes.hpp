#ifndef _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_
#define _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_cfm_datatypes {

class BandwidthNotificationState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf degraded;

};

class CfmMepDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class CfmCcmInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_3__DOT__3ms;
        static const ydk::Enum::YLeaf Y_10ms;
        static const ydk::Enum::YLeaf Y_100ms;
        static const ydk::Enum::YLeaf Y_1s;
        static const ydk::Enum::YLeaf Y_10s;
        static const ydk::Enum::YLeaf Y_1m;
        static const ydk::Enum::YLeaf Y_10m;

};

class CfmAisInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1s;
        static const ydk::Enum::YLeaf Y_1m;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_ */

