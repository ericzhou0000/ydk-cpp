#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_19_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_19_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_18.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily : public Entity
{
    public:
        NextHopAddressFamily();
        ~NextHopAddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_af_name; //type: BgpAddressFamilyEnum
        class NextHopAfVrfAf; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf
        class NextHopAfs; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf> next_hop_af_vrf_af;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs> next_hop_afs;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf : public Entity
{
    public:
        NextHopAfVrfAf();
        ~NextHopAfVrfAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: BgpAfiEnum
        YLeaf gwaf_name; //type: BgpAfiEnum
        YLeaf total_nexthops; //type: uint32
        YLeaf critical_trigger_delay; //type: uint32
        YLeaf non_critical_trigger_delay; //type: uint32
        YLeaf table_active; //type: boolean
        YLeaf nh_rib_up; //type: boolean
        YLeaf nh_rib_version; //type: uint32
        YLeaf nh_nexthop_version; //type: uint32
        YLeaf nh_table_id; //type: uint32
        YLeaf epe_table_version; //type: uint32
        YLeaf epe_label_version; //type: uint32
        YLeaf epe_downloaded_version; //type: uint32
        YLeaf epe_standby_version; //type: uint32
        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics> performance_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics : public Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf critical_notf_count; //type: uint32
        YLeaf noncritical_notf_count; //type: uint32
        YLeaf last_notf_bestpath_deletes; //type: uint32
        YLeaf last_notf_bestpath_changes; //type: uint32
        YLeaf nh_sync_reg_calls; //type: uint32
        YLeaf nha_sync_reg_calls; //type: uint32
        YLeaf nha_sync_un_reg_calls; //type: uint32
        YLeaf nh_pending_registrations; //type: uint32
        YLeaf nh_peak_registrations; //type: uint32
        YLeaf nh_batch_finish_calls; //type: uint32
        YLeaf nh_flush_timer_calls; //type: uint32
        YLeaf nh_last_sync_reg_ts; //type: uint32
        YLeaf nh_last_a_sync_reg_ts; //type: uint32
        YLeaf nh_last_a_sync_un_reg_ts; //type: uint32
        YLeaf nh_last_batch_finish_ts; //type: uint32
        YLeaf nh_last_flush_timer_ts; //type: uint32
        YLeaf nhrib_update_calls; //type: uint32
        YLeaf nhrib_update_time; //type: uint32
        YLeaf nexthops_sent_to_rib; //type: uint32
        YLeaf nexthops_resent_to_rib; //type: uint32
        YLeaf nexthops_removed_from_rib; //type: uint32
        YLeaf rib_sync_registers_failed; //type: uint32
        YLeaf riba_sync_registers_failed; //type: uint32
        YLeaf ribnh_reg_failed_for_no_tbl_id; //type: uint32
        YLeaf ribnh_reg_failed_for_no_rib_conn; //type: uint32
        YLeaf tunnel_walk_nh_not_found; //type: uint32
        YLeaf tunnel_walk_gw_not_found; //type: uint32
        YLeaf tunnel_walk_backup_creates; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfVrfAf::PerformanceStatistics


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs : public Entity
{
    public:
        NextHopAfs();
        ~NextHopAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NextHopAf; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf> > next_hop_af;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf : public Entity
{
    public:
        NextHopAf();
        ~NextHopAf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf attribute_set; //type: string
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf rib_nexthop_id; //type: uint32
        YLeaf nexthop_pending_registration; //type: uint8
        YLeaf nexthop_reference_count; //type: uint32
        YLeaf nh_reference_count_total; //type: uint32
        YLeaf nh_first_hop_if_handle; //type: string
        YLeaf nexthop_aigp_metric; //type: uint32
        YLeaf nexthop_gateway_reachable; //type: boolean
        YLeaf nexthop_gateway_prefix_connected; //type: boolean
        YLeaf nexthop_gateway_prefix_length; //type: uint32
        class NexthopAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhteTunnel
        class NexthopInternalInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo
        class NexthopGatewayInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress> > neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress> nexthop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo> > nexthop_gateway_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo> nexthop_internal_info;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhteTunnel> nhte_tunnel;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress : public Entity
{
    public:
        NexthopAddress();
        ~NexthopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NhteTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo : public Entity
{
    public:
        NexthopInternalInfo();
        ~NexthopInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nexthop_id; //type: uint32
        YLeaf nexthop_version; //type: uint32
        YLeaf nexthop_flags; //type: uint32
        YLeaf nexthop_if_handle; //type: uint32
        YLeaf nexthop_af_user_bits; //type: uint32
        YLeaf nexthop_label; //type: uint32
        YLeaf gateway_flags; //type: uint32
        class NexthopAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress
        class NexthopMetrice; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice
        class NexthopRefcount; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount
        class NexthopGatewayInternalInfo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress> nexthop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo> > nexthop_gateway_internal_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice> > nexthop_metrice;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount> > nexthop_refcount;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress : public Entity
{
    public:
        NexthopAddress();
        ~NexthopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice : public Entity
{
    public:
        NexthopMetrice();
        ~NexthopMetrice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopMetrice


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount : public Entity
{
    public:
        NexthopRefcount();
        ~NexthopRefcount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopRefcount


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo : public Entity
{
    public:
        NexthopGatewayInternalInfo();
        ~NexthopGatewayInternalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gateway_flags; //type: uint32
        YLeaf registration_type; //type: BgpNhValidateEnum
        YLeaf registration_since; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopInternalInfo::NexthopGatewayInternalInfo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo : public Entity
{
    public:
        NexthopGatewayInfo();
        ~NexthopGatewayInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nexthop_route_prefix_length; //type: uint8
        YLeaf nexthop_route_protocol; //type: string
        YLeaf nexthop_route_path_count; //type: uint32
        YLeaf nexthop_af_invalid_bits; //type: uint16
        YLeaf nexthop_status; //type: uint8
        YLeaf nexthop_tableid; //type: uint64
        YLeaf nexthop_metric; //type: uint32
        YLeaf last_event_type; //type: BgpNhEventEnum
        YLeaf last_update_type; //type: BgpNhUpdateEnum
        YLeaf critical_events; //type: uint32
        YLeaf non_critical_events; //type: uint32
        YLeaf last_event_since; //type: uint32
        YLeaf last_rib_update; //type: uint32
        YLeaf nexthop_mpls_enabled; //type: boolean
        YLeaf nexthop_mpls_interfaces; //type: uint32
        YLeaf nexthop_mpls_label; //type: uint32
        class NexthopRoute; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute
        class NexthopRoutePath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute> nexthop_route;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath> > nexthop_route_path;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute : public Entity
{
    public:
        NexthopRoute();
        ~NexthopRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoute::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath : public Entity
{
    public:
        NexthopRoutePath();
        ~NexthopRoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NexthopGatewayInfo::NexthopRoutePath::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies::NextHopAddressFamily::NextHopAfs::NextHopAf::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters : public Entity
{
    public:
        RtSetCounters();
        ~RtSetCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RtSetCounter; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter> > rt_set_counter;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter : public Entity
{
    public:
        RtSetCounter();
        ~RtSetCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt_set_id; //type: int32
        class RouteTargetSet; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet> route_target_set;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet : public Entity
{
    public:
        RouteTargetSet();
        ~RouteTargetSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt_set_len; //type: uint8
        YLeaf rt_set_id; //type: uint32
        YLeaf rt_set_net_count; //type: uint32
        class RtSet; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet> > rt_set;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet : public Entity
{
    public:
        RtSet();
        ~RtSet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry; //type: uint8

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters::RtSetCounter::RouteTargetSet::RtSet


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths : public Entity
{
    public:
        BmpPaths();
        ~BmpPaths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BmpPath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath> > bmp_path;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath : public Entity
{
    public:
        BmpPath();
        ~BmpPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf bmp_net_flags; //type: uint32
        YLeaf bmp_net_version; //type: uint32
        YLeaf num_of_path; //type: uint32
        YLeaf has_local_label; //type: boolean
        YLeaf net_local_label; //type: uint32
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge
        class BmpPath_; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_> > bmp_path;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge> version_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp> version_timestamp;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix : public Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp : public Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge : public Entity
{
    public:
        VersionAge();
        ~VersionAge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_ : public Entity
{
    public:
        BmpPath_();
        ~BmpPath_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bmp_path_flags; //type: uint32
        YLeaf bmp_path_adv_bit_map; //type: uint16
        YLeaf bmp_path_snd_bit_map; //type: uint16
        YLeaf bmp_nbr_bit_map; //type: uint32
        YLeaf local_path; //type: boolean
        YLeaf received_label; //type: uint32
        YLeaf bpath_pointer; //type: uint64
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups : public Entity
{
    public:
        UpdateGenerationUpdateGroups();
        ~UpdateGenerationUpdateGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UpdateGenerationUpdateGroup; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup> > update_generation_update_group;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup : public Entity
{
    public:
        UpdateGenerationUpdateGroup();
        ~UpdateGenerationUpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group_index; //type: int32
        YLeaf process_id; //type: uint32
        YLeaf update_vrf_name; //type: string
        YLeaf update_group_af_name; //type: BgpAfiEnum
        YLeaf neighbor_session_af_name; //type: uint8
        YLeaf update_group_index_xr; //type: uint32
        YLeaf update_group_flags2; //type: uint32
        YLeaf update_out_queue_messages; //type: uint32
        YLeaf update_out_queue_size; //type: uint32
        YLeaf update_sub_group_count; //type: uint32
        YLeaf sub_group_throttled_count; //type: uint32
        YLeaf refresh_sub_group_count; //type: uint32
        YLeaf refresh_sub_group_throttled_count; //type: uint32
        YLeaf filter_group_count; //type: uint32
        YLeaf neighbor_count; //type: uint32
        YLeaf neighbor_leaving_count; //type: uint32
        YLeaf update_generation_recovery_pending; //type: boolean
        YLeaf last_update_timer_expiry_age; //type: uint32
        YLeaf is_update_timer_running; //type: boolean
        YLeaf perm_pelem_encountered; //type: uint32
        YLeaf perm_pelem_allowed; //type: uint32
        YLeaf perm_pelem_not_allowed; //type: uint32
        YLeaf perm_pelem_exp_wdr; //type: uint32
        YLeaf perm_pelem_spur_wdr; //type: uint32
        YLeaf is_permanent; //type: boolean
        class LastUpdateTimerStartTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp
        class LastUpdateTimerStopTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp
        class LastUpdateTimerExpiryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp
        class LastUpdateTimerRemainingValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue
        class LastUpdateTimerDelayValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue
        class UpdateStatistics; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue> last_update_timer_delay_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp> last_update_timer_expiry_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue> last_update_timer_remaining_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp> last_update_timer_start_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp> last_update_timer_stop_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics> update_statistics;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp : public Entity
{
    public:
        LastUpdateTimerStartTimestamp();
        ~LastUpdateTimerStartTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStartTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp : public Entity
{
    public:
        LastUpdateTimerStopTimestamp();
        ~LastUpdateTimerStopTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerStopTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp : public Entity
{
    public:
        LastUpdateTimerExpiryTimestamp();
        ~LastUpdateTimerExpiryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerExpiryTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue : public Entity
{
    public:
        LastUpdateTimerRemainingValue();
        ~LastUpdateTimerRemainingValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerRemainingValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue : public Entity
{
    public:
        LastUpdateTimerDelayValue();
        ~LastUpdateTimerDelayValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::LastUpdateTimerDelayValue


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics : public Entity
{
    public:
        UpdateStatistics();
        ~UpdateStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_out_queue_messages_high; //type: uint32
        YLeaf update_out_queue_messages_cumulative; //type: uint32
        YLeaf update_out_queue_messages_discarded; //type: uint32
        YLeaf update_out_queue_messages_cleared; //type: uint32
        YLeaf update_out_queue_size_high; //type: uint32
        YLeaf update_out_queue_size_cumulative; //type: uint64
        YLeaf update_out_queue_size_discarded; //type: uint64
        YLeaf update_out_queue_size_cleared; //type: uint64
        YLeaf last_update_discard_age; //type: uint32
        YLeaf last_update_cleard_age; //type: uint32
        YLeaf update_throttle_count; //type: uint32
        YLeaf last_update_throttle_age; //type: uint32
        YLeaf update_recovery_count; //type: uint32
        YLeaf last_update_recovery_age; //type: uint32
        YLeaf update_memory_allocation_fail_count; //type: uint32
        YLeaf last_update_memory_allocation_fail_age; //type: uint32
        class LastUpdateDiscardTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp
        class LastUpdateClearedTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp
        class LastUpdateThrottleTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp
        class LastUpdateRecoveryTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp
        class LastUpdateMemoryAllocationFailTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp> last_update_cleared_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp> last_update_discard_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp> last_update_memory_allocation_fail_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp> last_update_recovery_timestamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp> last_update_throttle_timestamp;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp : public Entity
{
    public:
        LastUpdateDiscardTimestamp();
        ~LastUpdateDiscardTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateDiscardTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp : public Entity
{
    public:
        LastUpdateClearedTimestamp();
        ~LastUpdateClearedTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateClearedTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp : public Entity
{
    public:
        LastUpdateThrottleTimestamp();
        ~LastUpdateThrottleTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateThrottleTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp : public Entity
{
    public:
        LastUpdateRecoveryTimestamp();
        ~LastUpdateRecoveryTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateRecoveryTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp : public Entity
{
    public:
        LastUpdateMemoryAllocationFailTimestamp();
        ~LastUpdateMemoryAllocationFailTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups::UpdateGenerationUpdateGroup::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups : public Entity
{
    public:
        UpdateGenerationFilterGroups();
        ~UpdateGenerationFilterGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UpdateGenerationFilterGroup; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup> > update_generation_filter_group;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup : public Entity
{
    public:
        UpdateGenerationFilterGroup();
        ~UpdateGenerationFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update_group_index; //type: int32
        YLeaf sub_group_index; //type: int32
        YLeaf sub_group_id; //type: int32
        YLeaf filter_group_index; //type: int32
        YLeaf process_id; //type: uint32
        YLeaf update_vrf_name; //type: string
        YLeaf update_group_af_name; //type: BgpAfiEnum
        YLeaf update_filter_group_index; //type: uint32
        YLeaf parent_filter_group_index; //type: uint32
        YLeaf sub_group_index_xr; //type: uint32
        YLeaf sub_group_id_xr; //type: uint32
        YLeaf parent_sub_group_index; //type: uint32
        YLeaf parent_sub_group_id; //type: uint32
        YLeaf update_group_index_xr; //type: uint32
        YLeaf neighbor_count; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups::UpdateGenerationFilterGroup


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks : public Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Network; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network> > network;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rd; //type: string
        YLeaf network; //type: string
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf process_instance_id; //type: uint8
        YLeaf has_inconsistent_paths; //type: boolean
        YLeaf is_net_aggregation_suppressed; //type: boolean
        YLeaf is_net_ldp_signaled; //type: boolean
        YLeaf table_version; //type: uint32
        YLeaf table_brib_version; //type: uint32
        YLeaf advertisedto_pe; //type: boolean
        YLeaf has_local_label; //type: boolean
        YLeaf net_local_label; //type: uint32
        YLeaf net_local_label_rewrite; //type: boolean
        YLeaf net_local_label_srgb; //type: boolean
        YLeaf has_lbl_retained; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf vrf_name; //type: string
        YLeaf net_flags; //type: uint32
        YLeaf net_extended_flags; //type: uint32
        YLeaf net_multipath; //type: boolean
        YLeaf net_eibgp_multipath; //type: boolean
        YLeaf net_backup_available; //type: boolean
        YLeaf net_backup_label_rewrite_available; //type: boolean
        YLeaf rib_failed; //type: boolean
        YLeaf gateway_array; //type: uint32
        YLeaf resilient_nexthop_set; //type: uint32
        YLeaf is_permanent_network; //type: boolean
        YLeaf num_of_path; //type: uint32
        YLeaf version; //type: uint32
        YLeaf bit; //type: uint16
        YLeaf flags; //type: uint8
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix
        class VersionTimestamp; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionTimestamp
        class VersionAge; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionAge
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield
        class LocalProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath
        class ActiveProcessInstancePath; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::ActiveProcessInstancePath
        class LocalPathElement; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPathElement
        class ActivePathElement; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::ActivePathElement

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::ActivePathElement> > active_path_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::ActiveProcessInstancePath> > active_process_instance_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPathElement> > local_path_element;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath> > local_process_instance_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo> > pe_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionAge> version_age;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionTimestamp> version_timestamp;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix : public Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionTimestamp : public Entity
{
    public:
        VersionTimestamp();
        ~VersionTimestamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionTimestamp


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionAge : public Entity
{
    public:
        VersionAge();
        ~VersionAge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint32
        YLeaf nanoseconds; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::VersionAge


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo : public Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo : public Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield : public Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield : public Entity
{
    public:
        AddPathOrrBitfield();
        ~AddPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress> neighbor_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath : public Entity
{
    public:
        LocalProcessInstancePath();
        ~LocalProcessInstancePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_path; //type: boolean
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf process_instance_id; //type: uint8
        YLeaf label_oor; //type: boolean
        YLeaf label_o_or_version; //type: uint32
        YLeaf label_fail; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf source_route_distinguisher; //type: string
        YLeaf prefix_version; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf source_vrf_name; //type: string
        YLeaf srcaf_name; //type: BgpAfiEnum
        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr
        class PathInformation; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AttributesAfterPolicyIn

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::AttributesAfterPolicyIn> attributes_after_policy_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation> path_information;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation : public Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_type; //type: BgpRoute1Enum
        YLeaf is_path_valid; //type: boolean
        YLeaf is_path_damped; //type: boolean
        YLeaf is_path_history_held; //type: boolean
        YLeaf is_internal_path; //type: boolean
        YLeaf is_best_path; //type: boolean
        YLeaf is_as_best; //type: boolean
        YLeaf is_spkr_as_best; //type: boolean
        YLeaf is_partial_best; //type: boolean
        YLeaf is_aggregation_suppressed; //type: boolean
        YLeaf is_import_dampened; //type: boolean
        YLeaf is_import_suspect; //type: boolean
        YLeaf is_path_not_advertised; //type: boolean
        YLeaf is_path_not_advertised_to_ebg_ps; //type: boolean
        YLeaf is_path_advertised_local_as_only; //type: boolean
        YLeaf is_path_from_route_reflector; //type: boolean
        YLeaf is_path_received_only; //type: boolean
        YLeaf is_received_path_not_modified; //type: boolean
        YLeaf is_path_locally_sourced; //type: boolean
        YLeaf is_path_local_aggregate; //type: boolean
        YLeaf is_path_from_network_command; //type: boolean
        YLeaf is_path_from_redistribute_command; //type: boolean
        YLeaf is_path_imported; //type: boolean
        YLeaf is_path_reoriginated; //type: boolean
        YLeaf is_path_reoriginated_stitching; //type: boolean
        YLeaf is_path_vpn_only; //type: boolean
        YLeaf is_path_from_confederation_peer; //type: boolean
        YLeaf is_path_synced_with_igp; //type: boolean
        YLeaf is_path_multipath; //type: boolean
        YLeaf is_path_imp_candidate; //type: boolean
        YLeaf is_path_stale; //type: boolean
        YLeaf is_path_long_lived_stale; //type: boolean
        YLeaf is_path_backup; //type: boolean
        YLeaf is_path_backup_protect_multipath; //type: boolean
        YLeaf is_path_best_external; //type: boolean
        YLeaf is_path_additional_path; //type: boolean
        YLeaf is_path_nexthop_discarded; //type: boolean
        YLeaf has_rcvd_label; //type: boolean
        YLeaf rcvd_label; //type: uint32
        YLeaf has_local_net_label; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf igp_metric; //type: uint32
        YLeaf path_weight; //type: uint16
        YLeaf neighbor_router_id; //type: string
        YLeaf has_mdt_group_addr; //type: boolean
        YLeaf l2vpn_size; //type: uint32
        YLeaf has_esi; //type: boolean
        YLeaf has_gw_addr; //type: boolean
        YLeaf has_second_label; //type: boolean
        YLeaf second_label; //type: uint32
        YLeaf path_flap_count; //type: uint32
        YLeaf seconds_since_first_flap; //type: uint32
        YLeaf time_to_unsuppress; //type: uint32
        YLeaf dampen_penalty; //type: uint32
        YLeaf halflife_time; //type: uint32
        YLeaf suppress_penalty; //type: uint32
        YLeaf reuse_value; //type: uint32
        YLeaf maximum_suppress_time; //type: uint32
        YLeaf best_path_comp_stage; //type: BgpBpStageEnum
        YLeaf best_path_id_comp_winner; //type: uint32
        YLeaf path_flags; //type: uint64
        YLeaf path_import_flags; //type: uint32
        YLeaf best_path_id; //type: uint32
        YLeaf local_path_id; //type: uint32
        YLeaf rcvd_path_id; //type: uint32
        YLeaf path_table_version; //type: uint32
        YLeaf advertisedto_pe; //type: boolean
        YLeaf rib_failed; //type: boolean
        YLeaf sn_rpki_origin_as_validity; //type: uint8
        YLeaf show_rpki_origin_as_validity; //type: boolean
        YLeaf ibgp_signaled_validity; //type: boolean
        YLeaf rpki_origin_as_validation_disabled; //type: boolean
        YLeaf accept_own_path; //type: boolean
        YLeaf accept_own_self_originated_p_ath; //type: boolean
        YLeaf aigp_metric; //type: uint64
        YLeaf mvpn_sfs_path; //type: boolean
        YLeaf fspec_invalid_path; //type: boolean
        YLeaf has_mvpn_nbr_addr; //type: boolean
        YLeaf has_mvpn_nexthop_addr; //type: boolean
        YLeaf has_mvpn_pmsi; //type: boolean
        YLeaf mvpn_pmsi_type; //type: uint16
        YLeaf mvpn_pmsi_flags; //type: uint8
        YLeaf mvpn_pmsi_label; //type: uint32
        YLeaf has_mvpn_extcomm; //type: boolean
        YLeaf mvpn_path_flags; //type: uint16
        YLeaf local_nh; //type: boolean
        YLeaf rt_set_limit_enabled; //type: boolean
        YLeaf path_rt_set_id; //type: uint32
        YLeaf path_rt_set_route_count; //type: uint32
        YLeaf is_path_af_install_eligible; //type: boolean
        YLeaf is_permanent_path; //type: boolean
        YLeaf graceful_shutdown; //type: boolean
        YLeaf labeled_unicast_safi_path; //type: boolean
        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhteTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr
        class L2VpnEvpnEsi; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi
        class GwAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::GwAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::AddPathOrrBitfield

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::ExtendedCommunity> > extended_community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::GwAddr> gw_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi> l2vpn_evpn_esi;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnPmsiValue> > mvpn_pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhteTunnel> nhte_tunnel;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::PePeersAdvertisedTo> > pe_peers_advertised_to;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix : public Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint16
        class Prefix; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix> prefix;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NextHop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::NhteTunnel


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr : public Entity
{
    public:
        MdtGroupAddr();
        ~MdtGroupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi : public Entity
{
    public:
        L2VpnEvpnEsi();
        ~L2VpnEvpnEsi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf esi; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::L2VpnEvpnEsi


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::GwAddr : public Entity
{
    public:
        GwAddr();
        ~GwAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf len; //type: BgpGwAddrLenEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::GwAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner : public Entity
{
    public:
        BestPathCompWinner();
        ~BestPathCompWinner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr : public Entity
{
    public:
        MvpnNbrAddr();
        ~MvpnNbrAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr : public Entity
{
    public:
        MvpnNexthopAddr();
        ~MvpnNexthopAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string
        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress> l2vpnvpls_address;
        
}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2vpn_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_srpolicy_address; //type: string

}; // Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks::Network::LocalProcessInstancePath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_19_ */

