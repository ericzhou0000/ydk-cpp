#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_90_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_90_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_51.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_71.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_89.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue : public ydk::Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr : public ydk::Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr : public ydk::Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel : public ydk::Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pe_address; //type: string
        ydk::YLeaf label; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr : public ydk::Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf len; //type: BgpRnhAddrLen
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp : public ydk::Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_distinguisher; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf : public ydk::Entity
{
    public:
        UpdateInboundFilterVrf();
        ~UpdateInboundFilterVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_filtered_message_count; //type: uint32
        ydk::YLeaf update_filtered_neighbor_count; //type: uint32
        ydk::YLeaf last_update_filtered_age; //type: uint32
        class LastUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp> last_update_filtered_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp : public ydk::Entity
{
    public:
        LastUpdateFilteredTimestamp();
        ~LastUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits : public ydk::Entity
{
    public:
        Postits();
        ~Postits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Postit; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit> > postit;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit : public ydk::Entity
{
    public:
        Postit();
        ~Postit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf connect_state; //type: uint32
        ydk::YLeaf start_time; //type: uint32
        ydk::YLeaf nsr_state; //type: BgpSyncNbrNsrState
        class NeighborsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress
        class NeighborAf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf
        class PostitInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf> > neighbor_af;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress> neighbors_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo> > postit_info;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress : public ydk::Entity
{
    public:
        NeighborsAddress();
        ~NeighborsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf : public ydk::Entity
{
    public:
        NeighborAf();
        ~NeighborAf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: boolean

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo : public ydk::Entity
{
    public:
        PostitInfo();
        ~PostitInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf postit_type; //type: uint32
        ydk::YLeaf postit_subtype; //type: uint32
        ydk::YLeaf postit_flags; //type: uint8
        ydk::YLeaf postit_af_name; //type: BgpAfi
        ydk::YLeaf postit_ts; //type: uint64
        ydk::YLeaf postit_direction; //type: uint8
        ydk::YLeaf postit_id; //type: uint32
        ydk::YLeaf peer_id; //type: uint32
        ydk::YLeaf postit_policy; //type: string
        ydk::YLeaf postit_reset; //type: BgpResetReasonIndex
        class PostitNotification; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification> postit_notification;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification : public ydk::Entity
{
    public:
        PostitNotification();
        ~PostitNotification();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_since_last_notification; //type: uint32
        ydk::YLeaf notification_error_code; //type: uint8
        ydk::YLeaf notification_error_subcode; //type: uint8
        class LastNotificationData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData> > last_notification_data;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData : public ydk::Entity
{
    public:
        LastNotificationData();
        ~LastNotificationData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo : public ydk::Entity
{
    public:
        GlobalProcessInfo();
        ~GlobalProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrfid; //type: uint32
        class Global; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf> vrf;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_standalone_mode; //type: boolean
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf instance_name; //type: string
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf update_delay; //type: uint32
        ydk::YLeaf generic_scan_period; //type: uint16
        ydk::YLeaf confederation_id; //type: uint32
        ydk::YLeaf cluster_id; //type: uint32
        ydk::YLeaf configured_cluster_id; //type: uint32
        ydk::YLeaf is_cluster_id_specified_as_ip; //type: boolean
        ydk::YLeaf asn_format; //type: uint32
        ydk::YLeaf srgb_start_configured; //type: uint32
        ydk::YLeaf srgb_end_configured; //type: uint32
        ydk::YLeaf srgb_start; //type: uint32
        ydk::YLeaf srgb_end; //type: uint32
        ydk::YLeaf graceful_maintenance; //type: boolean
        ydk::YLeaf graceful_maint_all_nbrs; //type: boolean
        ydk::YLeaf graceful_maint_retain_routes; //type: boolean
        ydk::YLeaf process_rlimit; //type: uint64
        ydk::YLeaf bmp_maximum_buffer_size; //type: uint64
        ydk::YLeaf bmp_default_buffer_size; //type: uint64
        ydk::YLeaf bmp_current_buffer_size; //type: uint64
        ydk::YLeaf bmp_cur_maximum_buffer_size; //type: uint64
        class ClusterIdEntry; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry> > cluster_id_entry;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry : public ydk::Entity
{
    public:
        ClusterIdEntry();
        ~ClusterIdEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cluster_id_val; //type: uint32
        ydk::YLeaf cluster_id_type; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_is_active; //type: boolean
        ydk::YLeaf route_distinguisher; //type: string
        ydk::YLeaf router_id; //type: string
        ydk::YLeaf configured_router_id; //type: string
        ydk::YLeaf is_redistribute_ibgp_to_ig_ps_enabled; //type: boolean
        ydk::YLeaf is_fast_external_fallover_enabled; //type: boolean
        ydk::YLeaf is_bestpath_missing_med_is_worst_enabled; //type: boolean
        ydk::YLeaf is_bestpath_always_compare_med_enabled; //type: boolean
        ydk::YLeaf is_bestpath_ignore_as_path_enabled; //type: boolean
        ydk::YLeaf is_bestpath_as_path_mpath_relax_enabled; //type: boolean
        ydk::YLeaf is_bestpath_compare_med_from_confed_peer_enabled; //type: boolean
        ydk::YLeaf is_bestpath_compare_router_id_for_ebgp_peers_enabled; //type: boolean
        ydk::YLeaf is_bestpath_aigp_ignore_enabled; //type: boolean
        ydk::YLeaf is_multipath_as_path_ignore_onwards_enabled; //type: boolean
        ydk::YLeaf is_enforce_first_as_enabled; //type: boolean
        ydk::YLeaf default_local_preference; //type: uint32
        ydk::YLeaf keep_alive_time; //type: uint16
        ydk::YLeaf hold_time; //type: uint16
        ydk::YLeaf min_acceptable_hold_time; //type: uint16
        ydk::YLeaf is_neighbor_logging; //type: boolean
        ydk::YLeaf is_default_metric_configured; //type: boolean
        ydk::YLeaf default_metric; //type: uint32
        ydk::YLeaf is_default_originate_configured; //type: boolean
        ydk::YLeaf is_graceful_restart; //type: boolean
        ydk::YLeaf is_nsr; //type: boolean
        ydk::YLeaf restart_time; //type: uint32
        ydk::YLeaf stale_path_time; //type: uint32
        ydk::YLeaf rib_purge_timeout; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors : public ydk::Entity
{
    public:
        UpdateInboundErrorNeighbors();
        ~UpdateInboundErrorNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateInboundErrorNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor> > update_inbound_error_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor : public ydk::Entity
{
    public:
        UpdateInboundErrorNeighbor();
        ~UpdateInboundErrorNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_error_handling_avoid_reset; //type: boolean
        ydk::YLeaf total_update_message_count; //type: uint32
        ydk::YLeaf update_malformed_message_count; //type: uint32
        ydk::YLeaf last_update_malformed_age; //type: uint32
        ydk::YLeaf update_memory_allocation_fail_count; //type: uint32
        ydk::YLeaf last_update_memory_allocation_fail_age; //type: uint32
        ydk::YLeaf update_error_handling_reset_count; //type: uint32
        ydk::YLeaf last_error_handling_reset_age; //type: uint32
        ydk::YLeaf update_error_message_list_count; //type: uint32
        ydk::YLeaf update_attribute_discard_count; //type: uint32
        ydk::YLeaf establishment_total_update_message_count; //type: uint32
        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress
        class FirstUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp
        class LastUpdateMalformedTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp
        class FirstUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp
        class FirstUpdateErrorHandlingResetTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp
        class LastErrorHandlingResetTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp
        class EstablishmentActionCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount
        class UpdateErrorMessage; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount> > establishment_action_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp> first_update_error_handling_reset_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp> first_update_malformed_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp> first_update_memory_allocation_fail_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp> last_error_handling_reset_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp> last_update_malformed_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage> > update_error_message;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress> update_neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress : public ydk::Entity
{
    public:
        UpdateNeighborAddress();
        ~UpdateNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp : public ydk::Entity
{
    public:
        FirstUpdateMalformedTimestamp();
        ~FirstUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp : public ydk::Entity
{
    public:
        LastUpdateMalformedTimestamp();
        ~LastUpdateMalformedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        FirstUpdateMemoryAllocationFailTimestamp();
        ~FirstUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp : public ydk::Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp : public ydk::Entity
{
    public:
        FirstUpdateErrorHandlingResetTimestamp();
        ~FirstUpdateErrorHandlingResetTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp : public ydk::Entity
{
    public:
        LastErrorHandlingResetTimestamp();
        ~LastErrorHandlingResetTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount : public ydk::Entity
{
    public:
        EstablishmentActionCount();
        ~EstablishmentActionCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage : public ydk::Entity
{
    public:
        UpdateErrorMessage();
        ~UpdateErrorMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_error_final_action; //type: BgpBagUpdErrAction
        ydk::YLeaf update_attribute_discard_count; //type: uint32
        ydk::YLeaf update_error_nlri_address_family; //type: BgpAfi
        ydk::YLeaf update_error_nlri_string; //type: string
        ydk::YLeaf update_error_nlri_string_truncated; //type: boolean
        class UpdateMessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp
        class UpdateMessageResetData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData
        class UpdateMessageData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData
        class UpdateErrorElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement> > update_error_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData> > update_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData> update_message_reset_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp> update_message_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp : public ydk::Entity
{
    public:
        UpdateMessageTimestamp();
        ~UpdateMessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData : public ydk::Entity
{
    public:
        UpdateMessageResetData();
        ~UpdateMessageResetData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_error_reset_reason; //type: BgpResetReasonIndex
        ydk::YLeaf update_error_reset_notification_code; //type: uint8
        ydk::YLeaf update_error_reset_notification_sub_code; //type: uint16
        ydk::YLeaf update_error_reset_notification_data; //type: string
        ydk::YLeaf update_error_reset_notification_data_length; //type: uint16

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData : public ydk::Entity
{
    public:
        UpdateMessageData();
        ~UpdateMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement : public ydk::Entity
{
    public:
        UpdateErrorElement();
        ~UpdateErrorElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_attribute_flags; //type: uint8
        ydk::YLeaf update_attribute_code; //type: uint8
        ydk::YLeaf update_attribute_length; //type: uint16
        ydk::YLeaf update_error_data; //type: string
        ydk::YLeaf update_error_data_length; //type: uint16
        ydk::YLeaf update_error_action; //type: BgpBagUpdErrAction

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors : public ydk::Entity
{
    public:
        UpdateInboundFilterNeighbors();
        ~UpdateInboundFilterNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UpdateInboundFilterNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor> > update_inbound_filter_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor : public ydk::Entity
{
    public:
        UpdateInboundFilterNeighbor();
        ~UpdateInboundFilterNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf update_vrf_name; //type: string
        ydk::YLeaf update_filter_logging_enabled; //type: boolean
        ydk::YLeaf configured_update_filter_message_buffer_count; //type: uint32
        ydk::YLeaf operational_update_filter_message_buffer_count; //type: uint32
        ydk::YLeaf update_filter_message_buffer_circular; //type: boolean
        ydk::YLeaf update_attribute_filter_group_name; //type: string
        ydk::YLeaf operational_update_attribute_filtering_enabled; //type: boolean
        ydk::YLeaf message_update_attribute_filtering_enabled; //type: boolean
        ydk::YLeaf total_filter_update_message_count; //type: uint32
        ydk::YLeaf establishment_total_filter_update_message_count; //type: uint32
        ydk::YLeaf update_filtered_message_count; //type: uint32
        ydk::YLeaf establishment_update_filtered_message_count; //type: uint32
        ydk::YLeaf last_update_filtered_age; //type: uint32
        ydk::YLeaf update_filter_message_list_count; //type: uint32
        class UpdateNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress
        class FirstUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp
        class LastUpdateFilteredTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp
        class UpdateAttributeFilterAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes
        class UpdateFilterMessage; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp> first_update_filtered_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp> last_update_filtered_timestamp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes> > update_attribute_filter_attributes;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage> > update_filter_message;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress> update_neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress : public ydk::Entity
{
    public:
        UpdateNeighborAddress();
        ~UpdateNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp : public ydk::Entity
{
    public:
        FirstUpdateFilteredTimestamp();
        ~FirstUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp : public ydk::Entity
{
    public:
        LastUpdateFilteredTimestamp();
        ~LastUpdateFilteredTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes : public ydk::Entity
{
    public:
        UpdateAttributeFilterAttributes();
        ~UpdateAttributeFilterAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_internal_attribute_code; //type: uint32
        ydk::YLeaf update_filter_action; //type: BgpBagUpdFilterAction
        ydk::YLeaf update_filter_match_count; //type: uint32
        ydk::YLeaf establishment_update_filter_match_count; //type: uint32
        ydk::YLeaf last_update_filter_match_age; //type: uint32
        class LastUpdateFilterMatchTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp> last_update_filter_match_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp : public ydk::Entity
{
    public:
        LastUpdateFilterMatchTimestamp();
        ~LastUpdateFilterMatchTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage : public ydk::Entity
{
    public:
        UpdateFilterMessage();
        ~UpdateFilterMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_filtered_attribute_count; //type: uint32
        ydk::YLeaf update_filter_final_action; //type: BgpBagUpdFilterAction
        ydk::YLeaf update_filter_nlri_address_family; //type: BgpAfi
        ydk::YLeaf update_filter_nlri_string; //type: string
        ydk::YLeaf update_filter_nlri_string_truncated; //type: boolean
        class UpdateFilterMessageTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp
        class UpdateFilterMessageData; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData
        class UpdateFilterElement; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement> > update_filter_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData> > update_filter_message_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp> update_filter_message_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp : public ydk::Entity
{
    public:
        UpdateFilterMessageTimestamp();
        ~UpdateFilterMessageTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData : public ydk::Entity
{
    public:
        UpdateFilterMessageData();
        ~UpdateFilterMessageData();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement : public ydk::Entity
{
    public:
        UpdateFilterElement();
        ~UpdateFilterElement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf update_attribute_flags; //type: uint8
        ydk::YLeaf update_attribute_code; //type: uint8
        ydk::YLeaf update_filter_action; //type: BgpBagUpdFilterAction

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp : public ydk::Entity
{
    public:
        Bmp();
        ~Bmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerSummaries; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries
        class ServerNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors> server_neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries> server_summaries;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries : public ydk::Entity
{
    public:
        ServerSummaries();
        ~ServerSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerSummary; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary> > server_summary;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary : public ydk::Entity
{
    public:
        ServerSummary();
        ~ServerSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32
        ydk::YLeaf bmp_server_id; //type: uint8
        ydk::YLeaf bmp_server_host_name; //type: string
        ydk::YLeaf bmp_server_port; //type: uint32
        ydk::YLeaf bmp_server_state; //type: BgpBmpState
        ydk::YLeaf bmp_server_is_flapping; //type: boolean
        ydk::YLeaf bmp_server_nbr_count; //type: uint32
        ydk::YLeaf bmp_init_msg_count; //type: uint32
        ydk::YLeaf bmp_termination_msg_count; //type: uint32
        ydk::YLeaf bmp_status_report_count; //type: uint32
        ydk::YLeaf bmp_per_peer_msg_count; //type: uint32
        ydk::YLeaf bmp_peer_msg_drop_count; //type: uint32
        ydk::YLeaf bmp_peer_msg_pending_count; //type: uint32
        ydk::YLeaf tos_type; //type: uint8
        ydk::YLeaf tos_value; //type: uint8
        ydk::YLeaf update_source_interface_name; //type: string
        ydk::YLeaf update_source_vrf_id; //type: uint32
        ydk::YLeaf bmp_vrf_name; //type: string
        ydk::YLeaf bmp_vrf_id; //type: uint32
        ydk::YLeaf bmp_update_mode; //type: BgpBmpUpdMode
        ydk::YLeaf tcp_keep_alive_interval; //type: uint32
        ydk::YLeaf tcp_maximum_segment_size; //type: uint32
        ydk::YLeaf tcp_write_cb_pending; //type: uint32
        ydk::YLeaf tcp_last_write_result; //type: uint32
        ydk::YLeaf tcp_last_write_cb_time; //type: uint64
        ydk::YLeaf tcp_last_write_time; //type: uint64
        ydk::YLeaf bmpq_last_write_pulse_sent_time; //type: uint64
        ydk::YLeaf bmpq_last_all_write_pulse_sent_time; //type: uint64
        ydk::YLeaf bmpq_last_write_pulse_cb_time; //type: uint64
        ydk::YLeaf path_update_count; //type: uint32
        ydk::YLeaf path_withdraw_count; //type: uint32
        ydk::YLeaf path_update_drop; //type: uint32
        ydk::YLeaf path_withdraw_drop; //type: uint32
        ydk::YLeaf bmp_peer_msg_pending_count_max; //type: uint32
        ydk::YLeaf bmp_peer_msg_pending_count_hwts; //type: uint64
        ydk::YLeaf bmp_bytes_written_tcp; //type: uint64
        ydk::YLeaf tcp_write_time; //type: uint32
        ydk::YLeaf bmpr_mon_upd_messages; //type: uint32
        ydk::YLeaf bmpr_mon_wdraw_messages; //type: uint32
        ydk::YLeaf bmp_messages_wdraw_discarded; //type: uint32
        ydk::YLeaf bmp_pfx_wdraw_discarded; //type: uint32
        ydk::YLeaf bmp_per_peer_msg_route_mon_count; //type: uint32
        ydk::YLeaf bmpr_mon_update_gen_time; //type: uint32
        ydk::YLeaf bmpr_mon_eo_rmessages; //type: uint32
        ydk::YLeaf bmp_rmon_cur_buffer_size; //type: uint64
        ydk::YLeaf bmp_maximum_buffer_size_route_mon; //type: uint64
        ydk::YLeaf bmp_server_up_count; //type: uint32
        ydk::YLeaf bmp_upd_gen_in_progress; //type: boolean
        ydk::YLeaf bmp_reset_walk_in_progress; //type: boolean
        class BmpServerStateAge; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge
        class BmpServerStateTimeSpec; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec
        class BmpServerLastDisconTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime
        class UpdateSourceAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress
        class BmpafiInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime> bmp_server_last_discon_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge> bmp_server_state_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec> bmp_server_state_time_spec;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo> > bmpafi_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress> update_source_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge : public ydk::Entity
{
    public:
        BmpServerStateAge();
        ~BmpServerStateAge();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec : public ydk::Entity
{
    public:
        BmpServerStateTimeSpec();
        ~BmpServerStateTimeSpec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime : public ydk::Entity
{
    public:
        BmpServerLastDisconTime();
        ~BmpServerLastDisconTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress : public ydk::Entity
{
    public:
        UpdateSourceAddress();
        ~UpdateSourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo : public ydk::Entity
{
    public:
        BmpafiInfo();
        ~BmpafiInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bmpaf_name; //type: BgpAfi
        ydk::YLeaf bmp_resume_prefix_len; //type: uint32
        ydk::YLeaf bmp_upd_gen_resume_start_version; //type: uint32
        ydk::YLeaf bmp_upd_gen_resume_end_version; //type: uint32
        ydk::YLeaf bmp_upd_gen_walk_stopped; //type: boolean
        ydk::YLeaf bmp_upd_gen_resume_net_version; //type: uint32
        ydk::YLeaf bmp_upd_gen_walk_run_time_stamp; //type: uint64
        ydk::YLeaf bmp_upd_gen_walk_run_count; //type: uint64
        ydk::YLeaf bmp_upd_gen_walk_stop_time_stamp; //type: uint64
        ydk::YLeaf bmp_upd_gen_walk_stop_count; //type: uint64
        ydk::YLeaf bmp_init_eor_end_version; //type: uint32
        ydk::YLeaf bmp_init_eor_pending_cnt; //type: uint32
        ydk::YLeaf bmp_filter_neighbor_address_set; //type: boolean
        ydk::YLeaf bmp_filter_nbr_cnt; //type: uint32
        ydk::YLeaf bmp_send_version; //type: uint32
        class BmpResumePrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix
        class BmpFilterNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress> bmp_filter_neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix> bmp_resume_prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix : public ydk::Entity
{
    public:
        BmpResumePrefix();
        ~BmpResumePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress : public ydk::Entity
{
    public:
        BmpFilterNeighborAddress();
        ~BmpFilterNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors : public ydk::Entity
{
    public:
        ServerNeighbors();
        ~ServerNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServerNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor> > server_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor : public ydk::Entity
{
    public:
        ServerNeighbor();
        ~ServerNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_id; //type: uint32
        class MonitoredNeighbors; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors> monitored_neighbors;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors : public ydk::Entity
{
    public:
        MonitoredNeighbors();
        ~MonitoredNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitoredNeighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor> > monitored_neighbor;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor : public ydk::Entity
{
    public:
        MonitoredNeighbor();
        ~MonitoredNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf bmp_neighbor_msg_pending; //type: uint32
        ydk::YLeaf bmp_neighbor_msg_dropped; //type: uint32
        ydk::YLeaf bmp_neighbor_peer_up_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_peer_down_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_route_monitor_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_route_monitor_eor_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_path_update_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_path_withdraw_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_path_update_drop; //type: uint32
        ydk::YLeaf bmp_neighbor_path_withdraw_drop; //type: uint32
        ydk::YLeaf bmp_neighbor_upd_msg_sent; //type: uint32
        ydk::YLeaf bmp_neighbor_wdraw_msg_sent; //type: uint32
        class BmpNeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress> bmp_neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress : public ydk::Entity
{
    public:
        BmpNeighborAddress();
        ~BmpNeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp::ServerNeighbors::ServerNeighbor::MonitoredNeighbors::MonitoredNeighbor::BmpNeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo : public ydk::Entity
{
    public:
        ProcessInfo();
        ~ProcessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_instance; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf vrf_totals; //type: boolean
        class Global; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics> performance_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf> vrf;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_instance_node; //type: string
        ydk::YLeaf restart_count; //type: uint32
        ydk::YLeaf path_attributes_entry_count; //type: uint32
        ydk::YLeaf path_attribute_memory; //type: uint32
        ydk::YLeaf as_path_entry_count; //type: uint32
        ydk::YLeaf as_path_entries_memory; //type: uint32
        ydk::YLeaf community_entry_count; //type: uint32
        ydk::YLeaf community_memory; //type: uint32
        ydk::YLeaf extended_community_entry_count; //type: uint32
        ydk::YLeaf extended_community_memory; //type: uint32
        ydk::YLeaf pe_distinguisher_label_entry_count; //type: uint32
        ydk::YLeaf pe_distinguisher_label_memory; //type: uint32
        ydk::YLeaf pta_entry_count; //type: uint32
        ydk::YLeaf pta_memory; //type: uint32
        ydk::YLeaf tunnel_encap_entry_count; //type: uint32
        ydk::YLeaf tunnel_encap_memory; //type: uint32
        ydk::YLeaf ribrnh_entry_count; //type: uint32
        ydk::YLeaf ribrnh_memory; //type: uint32
        ydk::YLeaf ppmp_entry_count; //type: uint32
        ydk::YLeaf ppmp_memory; //type: uint32
        ydk::YLeaf route_reflectors; //type: uint32
        ydk::YLeaf route_reflector_memory; //type: uint32
        ydk::YLeaf nexthop_count; //type: uint32
        ydk::YLeaf nexthop_memory; //type: uint32
        ydk::YLeaf lsattr_entry_count; //type: uint32
        ydk::YLeaf lsattr_memory; //type: uint32
        ydk::YLeaf attr_set_entry_count; //type: uint32
        ydk::YLeaf attr_set_memory; //type: uint32
        ydk::YLeaf lindex_entry_count; //type: uint32
        ydk::YLeaf lindex_memory; //type: uint32
        ydk::YLeaf local_as; //type: uint32
        ydk::YLeaf total_vrf_count; //type: uint32
        ydk::YLeaf neighbors_count_total; //type: uint32
        ydk::YLeaf established_neighbors_count_total; //type: uint32
        ydk::YLeaf sn_num_non_dflt_vrf_nbrs; //type: uint32
        ydk::YLeaf sn_num_non_dflt_vrf_nbrs_estab; //type: uint32
        class PoolSize; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize
        class PoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount
        class PoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount
        class MsgLogPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize
        class MsgLogPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount
        class MsgLogPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount
        class BmpPoolSize; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize
        class BmpPoolAllocCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount
        class BmpPoolFreeCount; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount> > bmp_pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount> > bmp_pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize> > bmp_pool_size;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount> > msg_log_pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount> > msg_log_pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize> > msg_log_pool_size;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount> > pool_alloc_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount> > pool_free_count;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize> > pool_size;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize : public ydk::Entity
{
    public:
        PoolSize();
        ~PoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolSize


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount : public ydk::Entity
{
    public:
        PoolAllocCount();
        ~PoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount : public ydk::Entity
{
    public:
        PoolFreeCount();
        ~PoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::PoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize : public ydk::Entity
{
    public:
        MsgLogPoolSize();
        ~MsgLogPoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolSize


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount : public ydk::Entity
{
    public:
        MsgLogPoolAllocCount();
        ~MsgLogPoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount : public ydk::Entity
{
    public:
        MsgLogPoolFreeCount();
        ~MsgLogPoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::MsgLogPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize : public ydk::Entity
{
    public:
        BmpPoolSize();
        ~BmpPoolSize();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolSize


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount : public ydk::Entity
{
    public:
        BmpPoolAllocCount();
        ~BmpPoolAllocCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolAllocCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount : public ydk::Entity
{
    public:
        BmpPoolFreeCount();
        ~BmpPoolFreeCount();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Global::BmpPoolFreeCount


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbors_count; //type: uint32
        ydk::YLeaf established_neighbors_count; //type: uint32
        ydk::YLeaf update_messages_received; //type: uint32
        ydk::YLeaf update_messages_sent; //type: uint32
        ydk::YLeaf notifications_received; //type: uint32
        ydk::YLeaf notifications_sent; //type: uint32
        ydk::YLeaf network_count; //type: uint32
        ydk::YLeaf path_count; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::Vrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics : public ydk::Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global
        class Vrf; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf> vrf;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configuration_items_processed; //type: uint32
        ydk::YLeaf configuration_processing_time; //type: uint32
        ydk::YLeaf edm_requests_count; //type: uint32
        ydk::YLeaf edm_processing_time; //type: uint32
        ydk::YLeaf brib_api_output_messages_sent; //type: uint32
        ydk::YLeaf brib_api_output_bytes_sent; //type: uint32
        ydk::YLeaf brib_api_output_bytes_generated; //type: uint32
        ydk::YLeaf brib_api_output_prefixes_advertised; //type: uint32
        ydk::YLeaf brib_api_output_prefixes_withdrawn; //type: uint32
        ydk::YLeaf brib_api_output_sending_time; //type: uint32
        ydk::YLeaf brib_api_output_generation_time; //type: uint32
        ydk::YLeaf brib_api_output_calls; //type: uint32
        ydk::YLeaf brib_api_input_messages; //type: uint32
        ydk::YLeaf brib_api_input_bytes; //type: uint32
        ydk::YLeaf brib_api_input_prefixes_received; //type: uint32
        ydk::YLeaf brib_api_input_withdrawn_prefixes; //type: uint32
        ydk::YLeaf brib_api_input_processing_time; //type: uint32
        ydk::YLeaf instance_node_role; //type: boolean
        ydk::YLeaf active_nsrtcp_phase_two_enter_time; //type: uint32
        ydk::YLeaf sec_active_nsrtcp_phase_two_enter_time; //type: uint32
        ydk::YLeaf proc_scoped_sync_state; //type: BgpScopedSyncState
        ydk::YLeaf initial_sync_sessions_added; //type: boolean
        ydk::YLeaf in_event_attach_calls; //type: uint32
        ydk::YLeaf out_event_attach_calls; //type: uint32
        ydk::YLeaf in_out_event_attach_calls; //type: uint32
        ydk::YLeaf updgen_timer_id; //type: uint32
        ydk::YLeaf updgen_tree_timer_left; //type: uint64
        ydk::YLeaf updgen_tree_timer_expiry; //type: uint64
        ydk::YLeaf current_clock_time; //type: uint64
        ydk::YLeaf updgen_handler_tm; //type: uint64
        ydk::YLeaf io_timer_id; //type: uint32
        ydk::YLeaf io_tree_timer_left; //type: uint64
        ydk::YLeaf io_tree_timer_expiry; //type: uint64
        ydk::YLeaf io_handler_tm; //type: uint64
        ydk::YLeaf qad_messages_sent; //type: uint32
        ydk::YLeaf qadack_sent; //type: uint32
        ydk::YLeaf qad_send_failure; //type: uint32
        ydk::YLeaf qad_ac_ks_failure; //type: uint32
        ydk::YLeaf qad_suspends; //type: uint32
        ydk::YLeaf qad_resumes; //type: uint32
        ydk::YLeaf qad_send_drops; //type: uint32
        ydk::YLeaf qad_messages_received; //type: uint32
        ydk::YLeaf qad_processed; //type: uint32
        ydk::YLeaf qad_ac_ks_received; //type: uint32
        ydk::YLeaf qad_timeout_received; //type: uint32
        ydk::YLeaf qad_init_drops; //type: uint32
        ydk::YLeaf qadoos_drops; //type: uint32
        ydk::YLeaf qad_recv_drops; //type: uint32
        ydk::YLeaf qad_timeout_recvd; //type: uint32
        ydk::YLeaf nsr_last_reset_reason; //type: uint8
        ydk::YLeaf redcon_nsr_ready; //type: boolean
        ydk::YLeaf redcon_state_time; //type: uint32
        ydk::YLeaf active_nsr_state; //type: uint32
        ydk::YLeaf sec_active_nsr_state; //type: uint32
        ydk::YLeaf total_outstanding_postits; //type: uint32
        ydk::YLeaf total_neighbors_with_pending_postits; //type: uint32
        ydk::YLeaf tep2p_auto_tunnel_enabled; //type: boolean
        ydk::YLeaf issu_milestone_packed; //type: boolean
        ydk::YLeaf bgp_te_infra_tunnel_type; //type: BgpTeInfraTunnel
        class Ipv4RibServer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer
        class Ipv6RibServer; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer
        class TeConnection; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection
        class LsdConnection; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection
        class DsNpl; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl
        class ActiveNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime
        class StandbyNsrModeEnterTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime
        class ActiveNsrfoTime; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime
        class PostitCountInfo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo
        class IssuMilestone; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime> > active_nsr_mode_enter_time;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime> > active_nsrfo_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl> ds_npl;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer> ipv4rib_server;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer> ipv6rib_server;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone> > issu_milestone;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection> lsd_connection;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo> > postit_count_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime> > standby_nsr_mode_enter_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection> te_connection;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer : public ydk::Entity
{
    public:
        Ipv4RibServer();
        ~Ipv4RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_rib_connection_up; //type: boolean
        ydk::YLeaf rib_connection_up_count; //type: uint32
        ydk::YLeaf last_rib_connection_up_age; //type: uint32
        ydk::YLeaf rib_connection_down_count; //type: uint32
        ydk::YLeaf last_rib_connection_down_age; //type: uint32
        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv4RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer : public ydk::Entity
{
    public:
        Ipv6RibServer();
        ~Ipv6RibServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_rib_connection_up; //type: boolean
        ydk::YLeaf rib_connection_up_count; //type: uint32
        ydk::YLeaf last_rib_connection_up_age; //type: uint32
        ydk::YLeaf rib_connection_down_count; //type: uint32
        ydk::YLeaf last_rib_connection_down_age; //type: uint32
        class FirstRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp
        class LastRibConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp
        class FirstRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp
        class LastRibConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp> first_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp> first_rib_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp> last_rib_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp> last_rib_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionUpTimestamp();
        ~FirstRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionUpTimestamp();
        ~LastRibConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstRibConnectionDownTimestamp();
        ~FirstRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::FirstRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastRibConnectionDownTimestamp();
        ~LastRibConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::Ipv6RibServer::LastRibConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection : public ydk::Entity
{
    public:
        TeConnection();
        ~TeConnection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf last_connection_up_age; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        ydk::YLeaf last_connection_down_age; //type: uint32
        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::TeConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection : public ydk::Entity
{
    public:
        LsdConnection();
        ~LsdConnection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_connection_up; //type: boolean
        ydk::YLeaf connection_up_count; //type: uint32
        ydk::YLeaf last_connection_up_age; //type: uint32
        ydk::YLeaf connection_down_count; //type: uint32
        ydk::YLeaf last_connection_down_age; //type: uint32
        class FirstConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp
        class LastConnectionUpTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp
        class FirstConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp
        class LastConnectionDownTimestamp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp> first_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp> first_connection_up_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp> last_connection_down_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp> last_connection_up_timestamp;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp : public ydk::Entity
{
    public:
        FirstConnectionUpTimestamp();
        ~FirstConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp : public ydk::Entity
{
    public:
        LastConnectionUpTimestamp();
        ~LastConnectionUpTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionUpTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp : public ydk::Entity
{
    public:
        FirstConnectionDownTimestamp();
        ~FirstConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::FirstConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp : public ydk::Entity
{
    public:
        LastConnectionDownTimestamp();
        ~LastConnectionDownTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::LsdConnection::LastConnectionDownTimestamp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl : public ydk::Entity
{
    public:
        DsNpl();
        ~DsNpl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir_service_conn_state; //type: BgpDsConnState
        ydk::YLeaf issu_mgr_conn_state; //type: BgpIsmConnState
        ydk::YLeaf issu_phase; //type: string
        ydk::YLeaf issu_type_ng; //type: boolean
        ydk::YLeaf issuha_option; //type: string
        ydk::YLeaf local_ds_handle; //type: uint64
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf dsissu_status_flag; //type: uint32
        class NplPriorityStatistic; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic
        class NplEndpoint; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint> > npl_endpoint;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic> > npl_priority_statistic;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic : public ydk::Entity
{
    public:
        NplPriorityStatistic();
        ~NplPriorityStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NumSent; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent
        class NumRecv; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv
        class NumSentDrop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop
        class NumRecvDrop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv> > num_recv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop> > num_recv_drop;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent> > num_sent;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop> > num_sent_drop;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent : public ydk::Entity
{
    public:
        NumSent();
        ~NumSent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSent


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv : public ydk::Entity
{
    public:
        NumRecv();
        ~NumRecv();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint64

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecv


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop : public ydk::Entity
{
    public:
        NumSentDrop();
        ~NumSentDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlSendDropArray; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray> > nsr_pl_send_drop_array;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray : public ydk::Entity
{
    public:
        NsrPlSendDropArray();
        ~NsrPlSendDropArray();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop : public ydk::Entity
{
    public:
        NumRecvDrop();
        ~NumRecvDrop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NsrPlRecvDropArray; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray> > nsr_pl_recv_drop_array;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray : public ydk::Entity
{
    public:
        NsrPlRecvDropArray();
        ~NsrPlRecvDropArray();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint : public ydk::Entity
{
    public:
        NplEndpoint();
        ~NplEndpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf endpoint_name; //type: string
        ydk::YLeaf sync_group_name; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf endpoint_handle; //type: uint64
        ydk::YLeaf endpoint_stale_flag; //type: boolean
        ydk::YLeaf endpoint_issu_role; //type: string
        ydk::YLeaf endpoint_active_flag; //type: boolean
        ydk::YLeaf msg_size; //type: uint32
        ydk::YLeaf wheel_id; //type: uint32
        ydk::YLeaf expected_sequence_num; //type: uint32
        class Endpoint; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint> > endpoint;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint : public ydk::Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime : public ydk::Entity
{
    public:
        ActiveNsrModeEnterTime();
        ~ActiveNsrModeEnterTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime : public ydk::Entity
{
    public:
        StandbyNsrModeEnterTime();
        ~StandbyNsrModeEnterTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime : public ydk::Entity
{
    public:
        ActiveNsrfoTime();
        ~ActiveNsrfoTime();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo : public ydk::Entity
{
    public:
        PostitCountInfo();
        ~PostitCountInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf postit_count; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress : public ydk::Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: BgpAfi
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv4_mcast_address; //type: string
        ydk::YLeaf ipv4_label_address; //type: string
        ydk::YLeaf ipv4_tunnel_address; //type: string
        ydk::YLeaf ipv4mdt_address; //type: string
        ydk::YLeaf ipv4vpn_address; //type: string
        ydk::YLeaf ipv4vpna_mcastddress; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf ipv6_mcast_address; //type: string
        ydk::YLeaf ipv6_label_address; //type: string
        ydk::YLeaf ipv6vpn_address; //type: string
        ydk::YLeaf ipv6vpn_mcast_address; //type: string
        ydk::YLeaf rt_constraint_address; //type: string
        ydk::YLeaf ipv6mvpn_address; //type: string
        ydk::YLeaf ipv4mvpn_address; //type: string
        ydk::YLeaf l2vpn_evpn_address; //type: string
        ydk::YLeaf ls_ls_address; //type: string
        ydk::YLeaf ipv4_flowspec_address; //type: string
        ydk::YLeaf ipv6_flowspec_address; //type: string
        ydk::YLeaf ipv4vpn_flowspec_address; //type: string
        ydk::YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress : public ydk::Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress : public ydk::Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress : public ydk::Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone : public ydk::Entity
{
    public:
        IssuMilestone();
        ~IssuMilestone();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf milestone_name; //type: string
        ydk::YLeaf milestone_start_timestamp; //type: uint32
        ydk::YLeaf milestone_met_timestamp; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lpts_set_up_time; //type: uint32
        ydk::YLeaf lpts_calls; //type: uint32
        ydk::YLeaf read_throttles_count; //type: uint32
        ydk::YLeaf low_throttled_read_count; //type: uint32
        ydk::YLeaf high_throttled_read_count; //type: uint32
        ydk::YLeaf read_calls_count; //type: uint32
        ydk::YLeaf read_messages_count; //type: uint32
        ydk::YLeaf data_bytes_read; //type: uint32
        ydk::YLeaf io_read_time; //type: uint32
        ydk::YLeaf write_calls_count; //type: uint32
        ydk::YLeaf data_bytes_written; //type: uint32
        ydk::YLeaf io_write_time; //type: uint32
        ydk::YLeaf write_subgroup_calls_count; //type: uint32
        ydk::YLeaf write_subgroup_messages_count; //type: uint32
        ydk::YLeaf subgroup_list_time; //type: uint32
        ydk::YLeaf write_queue_calls_count; //type: uint32
        ydk::YLeaf write_queue_messages_count; //type: uint32
        ydk::YLeaf write_queue_time; //type: uint32
        ydk::YLeaf inbound_update_messages; //type: uint32
        ydk::YLeaf inbound_update_messages_time; //type: uint32

}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo::PerformanceStatistics::Vrf


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Session; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions::Session> > session;
        
}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_90_ */
