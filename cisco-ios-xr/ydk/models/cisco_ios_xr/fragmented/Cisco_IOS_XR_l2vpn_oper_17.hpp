#ifndef _CISCO_IOS_XR_L2VPN_OPER_17_
#define _CISCO_IOS_XR_L2VPN_OPER_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_l2vpn_oper_12.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_15.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_16.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw : public Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_available; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf local_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf local_tunnel_id; //type: uint32
        YLeaf local_extended_tunnel_id; //type: string
        YLeaf local_p2mp_id; //type: uint32
        YLeaf local_flags; //type: uint8
        YLeaf remote_available; //type: boolean
        YLeaf remote_label; //type: uint32
        YLeaf remote_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf remote_extended_tunnel_id; //type: string
        YLeaf remote_p2mp_id; //type: uint32
        YLeaf remote_flags; //type: uint8



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac : public Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs : public Entity
{
    public:
        BridgeAcs();
        ~BridgeAcs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BridgeAc; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc> > bridge_ac;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc : public Entity
{
    public:
        BridgeAc();
        ~BridgeAc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bvi_mac_index; //type: uint16

        class AttachmentCircuit; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit
        class SecurityParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters
        class StaticMac; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::StaticMac
        class Bvimac; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::Bvimac

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit> attachment_circuit;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::Bvimac> > bvimac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::StaticMac> > static_mac;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit : public Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf msti; //type: string
        YLeaf internal_ms_ti; //type: string
        YLeaf interface_handle; //type: string
        YLeaf node_id; //type: string
        YLeaf xconnect_id; //type: uint32
        YLeaf ms_ti_mismatch; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf tdm_media_mismatched; //type: boolean
        YLeaf bvi_mac_conflict; //type: boolean
        YLeaf bvi_no_port_up; //type: boolean
        YLeaf control_word_mismatched; //type: boolean
        YLeaf encapsulation_mismatched; //type: boolean
        YLeaf encapsulation_error; //type: string
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf out_of_memory_state; //type: uint32
        YLeaf msti_mismatch_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf redundancy_group_id; //type: uint32
        YLeaf redundancy_group_state; //type: L2VpnRgStateEnum
        YLeaf redundancy_object_id; //type: uint64
        YLeaf is_ac_partially_programmed; //type: boolean
        YLeaf evpn_internal_label; //type: uint32

        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface
        class Statistics; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics
        class L2VpnProtection; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::L2VpnProtection

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface> interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::L2VpnProtection> l2vpn_protection;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics> statistics;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16

        class Parameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters> parameters;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnInterfaceEnum

        class Ethernet; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan> vlan;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Ethernet


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16

        class VlanRange; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange> > vlan_range;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum

        class TdmOptions; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions> tdm_options;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Atm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::Fr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList> interface_list;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_> > interface;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList> interface_list;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_> > interface;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::SequenceNumber> sequence_number;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::Statistics::SequenceNumber


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::L2VpnProtection : public Entity
{
    public:
        L2VpnProtection();
        ~L2VpnProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf protection_type; //type: L2VpnProtectionEnum
        YLeaf protection_configured; //type: L2VpnProtectionRoleEnum
        YLeaf protection_name; //type: string
        YLeaf protected_name; //type: string
        YLeaf active; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::AttachmentCircuit::L2VpnProtection


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::Base::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::SecurityParameters::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::StaticMac : public Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::StaticMac


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::Bvimac : public Entity
{
    public:
        Bvimac();
        ~Bvimac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAcs::BridgeAc::Bvimac


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws : public Entity
{
    public:
        BridgeAccessPws();
        ~BridgeAccessPws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BridgeAccessPw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw> > bridge_access_pw;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw : public Entity
{
    public:
        BridgeAccessPw();
        ~BridgeAccessPw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf is_access; //type: boolean

        class Pseudowire; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire
        class SecurityParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters
        class StaticMac; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire> pseudowire;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters> security_parameters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac> > static_mac;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_source_address; //type: string
        YLeaf ipv6_local_source_address; //type: string
        YLeaf pseudo_wire_id; //type: uint64
        YLeaf is_pwr_type; //type: boolean
        YLeaf is_evpnvpws_type; //type: boolean
        YLeaf xconnect_id; //type: uint32
        YLeaf state; //type: L2VpnSegmentStateEnum
        YLeaf pseudo_wire_state; //type: L2VpnPwStateEnum
        YLeaf protocol; //type: L2VpnSignallingProtoEnum
        YLeaf pw_class_name; //type: string
        YLeaf tag_rewrite; //type: uint16
        YLeaf interworking; //type: L2VpnInterworkingEnum
        YLeaf fe_ctype; //type: L2VpnPwFecEnum
        YLeaf evpn_src_acid; //type: uint32
        YLeaf sequencing_type; //type: L2VpnPwSequenceEnum
        YLeaf resync_enabled; //type: boolean
        YLeaf resync_threshold; //type: uint32
        YLeaf local_control_word; //type: L2VpnPwControlWordEnum
        YLeaf remote_control_word; //type: L2VpnPwControlWordEnum
        YLeaf local_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf remote_pseudo_wire_type; //type: L2VpnPwEnum
        YLeaf imposed_vlan_id; //type: uint32
        YLeaf time_created; //type: string
        YLeaf time_elapsed_creation; //type: string
        YLeaf last_time_status_changed; //type: string
        YLeaf time_elapsed_status_changed; //type: string
        YLeaf last_time_status_down; //type: string
        YLeaf time_elapsed_status_down; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf pseudo_wire_type_mismatched; //type: boolean
        YLeaf payload_bytes_mismatched; //type: boolean
        YLeaf bitrate_mismatched; //type: boolean
        YLeaf rtp_mismatched; //type: boolean
        YLeaf diff_ts_mismatched; //type: boolean
        YLeaf sig_pkts_mismatched; //type: boolean
        YLeaf cas_mismatched; //type: boolean
        YLeaf payload_type_mismatched; //type: boolean
        YLeaf freq_mismatched; //type: boolean
        YLeaf ssrc_mismatched; //type: boolean
        YLeaf mtu_mismatched; //type: boolean
        YLeaf illegal_control_word; //type: boolean
        YLeaf ad_remote_down; //type: boolean
        YLeaf not_supported_qinq; //type: boolean
        YLeaf local_label_failed; //type: boolean
        YLeaf remote_label_failed; //type: boolean
        YLeaf preferred_path_disable_fallback; //type: boolean
        YLeaf backup_pw; //type: boolean
        YLeaf primary_pw; //type: boolean
        YLeaf backup_active; //type: boolean
        YLeaf backup_force_active; //type: boolean
        YLeaf disable_never; //type: boolean
        YLeaf disable_delay; //type: uint8
        YLeaf primary_peer_id; //type: string
        YLeaf primary_pseudo_wire_id; //type: uint64
        YLeaf number_ma_cwithdraw_message_sent; //type: uint32
        YLeaf num_ma_cwithdraw_msg_received; //type: uint32
        YLeaf out_of_memory_state; //type: uint32
        YLeaf transport_lsp_down; //type: boolean
        YLeaf mac_limit_oper_down; //type: boolean
        YLeaf pw_status_use; //type: boolean
        YLeaf auto_discovery; //type: boolean
        YLeaf ad_method; //type: uint32
        YLeaf pwlsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertise_failed; //type: boolean
        YLeaf is_vfi; //type: boolean
        YLeaf is_multi_segment_pseudowire; //type: boolean
        YLeaf pw_redundancy_one_way; //type: boolean
        YLeaf load_balance; //type: L2VpnLoadBalEnum
        YLeaf pw_flow_label_type; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_type_cfg; //type: L2VpnPwFlowLabelEnum
        YLeaf pw_flow_label_code17_disabled; //type: boolean
        YLeaf is_flow_label_static; //type: boolean
        YLeaf is_partially_programmed; //type: boolean
        YLeaf pw_redundancy_initial_delay; //type: uint8
        YLeaf bridge_pw_type_mismatch; //type: boolean
        YLeaf required_bw; //type: uint32
        YLeaf admited_bw; //type: uint32
        YLeaf forward_class; //type: uint8
        YLeaf table_policy_name; //type: string

        class PeerId; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId
        class EncapsulationInfo; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo
        class LocalInterface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface
        class RemoteInterface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface
        class PreferredPath; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath
        class LocalSignalling; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling
        class RemoteSignalling; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling
        class Statistics; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics
        class P2MpPw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo> encapsulation_info;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface> local_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling> local_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw> p2mp_pw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId> peer_id;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath> preferred_path;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface> remote_interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling> remote_signalling;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics> statistics;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId : public Entity
{
    public:
        PeerId();
        ~PeerId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnPeerEnum
        YLeaf ipv4_peer_id; //type: string
        YLeaf ipv6_peer_id; //type: string
        YLeaf internal_label; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PeerId


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo : public Entity
{
    public:
        EncapsulationInfo();
        ~EncapsulationInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf encapsulation; //type: L2VpnEncapMethodEnum

        class Atom; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom
        class L2Tpv3; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom> atom;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3> l2tpv3;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom : public Entity
{
    public:
        Atom();
        ~Atom();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_pseudowire_headend; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf remote_label; //type: uint32
        YLeaf local_group_id; //type: uint32
        YLeaf remote_group_id; //type: uint32
        YLeaf local_cv_type; //type: uint8
        YLeaf local_c_ctype; //type: uint8
        YLeaf remote_cv_type; //type: uint8
        YLeaf remote_c_ctype; //type: uint8
        YLeaf local_veid; //type: uint32
        YLeaf remote_veid; //type: uint32
        YLeaf local_ceid; //type: uint32
        YLeaf remote_ceid; //type: uint32
        YLeaf source_address; //type: string
        YLeaf remote_source_address; //type: string
        YLeaf local_ldp_id; //type: string
        YLeaf remote_ldp_id; //type: string
        YLeaf saii; //type: string
        YLeaf taii; //type: string
        YLeaf is_sai_itype2; //type: boolean
        YLeaf local_saii_gbl_id; //type: uint32
        YLeaf local_saiiac_id; //type: uint32
        YLeaf is_tai_itype2; //type: boolean
        YLeaf local_taii_gbl_id; //type: uint32
        YLeaf local_taiiac_id; //type: uint32
        YLeaf rem_saii_gbl_id; //type: uint32
        YLeaf rem_saiiac_id; //type: uint32
        YLeaf rem_taii_gbl_id; //type: uint32
        YLeaf rem_taiiac_id; //type: uint32
        YLeaf rem_saii; //type: string
        YLeaf rem_taii; //type: string
        YLeaf lsd_rewrite_failed; //type: boolean
        YLeaf ldp_label_advertisment_failed; //type: boolean

        class LocalAgi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi
        class RemoteAgi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi
        class MultiSegmentPseudowireStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi> local_agi;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats> multi_segment_pseudowire_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi> remote_agi;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi : public Entity
{
    public:
        LocalAgi();
        ~LocalAgi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum

        class Auto_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr> v4_addr;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi : public Entity
{
    public:
        RemoteAgi();
        ~RemoteAgi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vpls_id_type; //type: L2VpnAdVplsIdEnum

        class Auto_; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_
        class TwoByteAs; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs
        class V4Addr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs> two_byte_as;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr> v4_addr;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf asn; //type: uint16
        YLeaf vpn_id; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs : public Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf two_byte_as; //type: uint16
        YLeaf four_byte_index; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr : public Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_address; //type: string
        YLeaf two_byte_index; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats : public Entity
{
    public:
        MultiSegmentPseudowireStats();
        ~MultiSegmentPseudowireStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf received_packets; //type: uint64
        YLeaf received_bytes; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3 : public Entity
{
    public:
        L2Tpv3();
        ~L2Tpv3();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2tp_class_name; //type: string
        YLeaf ipv4_source_address; //type: string
        YLeaf ipv6_source_address; //type: string
        YLeaf path_mtu_enabled; //type: boolean
        YLeaf path_mtu_max_value; //type: uint16
        YLeaf dont_fragment_bit; //type: boolean
        YLeaf tos_mode; //type: L2VpnTosModeEnum
        YLeaf tos; //type: uint8
        YLeaf ttl; //type: uint8
        YLeaf local_session_id; //type: uint32
        YLeaf remote_session_id; //type: uint32
        YLeaf local_cookie_size; //type: uint8
        YLeaf remote_cookie_size; //type: uint8
        YLeaf local_cookie_low_value; //type: uint32
        YLeaf remote_cookie_low_value; //type: uint32
        YLeaf local_cookie_high_value; //type: uint32
        YLeaf remote_cookie_high_value; //type: uint32
        YLeaf remote_circuit_status_up; //type: boolean
        YLeaf tunnel_state; //type: L2VpnL2TpTunnelStateEnum
        YLeaf local_secondary_cookie_size; //type: uint8
        YLeaf local_secondary_cookie_low_value; //type: uint32
        YLeaf local_secondary_cookie_high_value; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::EncapsulationInfo::L2Tpv3


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface : public Entity
{
    public:
        LocalInterface();
        ~LocalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16

        class Parameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters> parameters;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnInterfaceEnum

        class Ethernet; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan> vlan;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Ethernet


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16

        class VlanRange; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange> > vlan_range;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum

        class TdmOptions; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions> tdm_options;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Atm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::Fr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList> interface_list;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList> interface_list;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface : public Entity
{
    public:
        RemoteInterface();
        ~RemoteInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mtu; //type: uint32
        YLeaf payload_bytes; //type: uint16

        class Parameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters> parameters;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters : public Entity
{
    public:
        Parameters();
        ~Parameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: L2VpnInterfaceEnum

        class Ethernet; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet
        class Vlan; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan
        class Tdm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm
        class Atm; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm
        class Fr; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr
        class PseudowireEther; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther
        class PseudowireIw; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm> atm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr> fr;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther> pseudowire_ether;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw> pseudowire_iw;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm> tdm;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan> vlan;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Ethernet


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf xconnect_tags; //type: uint8
        YLeaf vlan_rewrite_tag; //type: uint16
        YLeaf simple_efp; //type: uint8
        YLeaf encapsulation_type; //type: uint8
        YLeaf outer_tag; //type: uint16
        YLeafList rewrite_tag; //type: list of  uint16

        class VlanRange; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange> > vlan_range;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lower; //type: uint16
        YLeaf upper; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm : public Entity
{
    public:
        Tdm();
        ~Tdm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf timeslot_group; //type: string
        YLeaf timeslot_rate; //type: uint8
        YLeaf tdm_mode; //type: L2VpnTdmModeEnum

        class TdmOptions; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions> tdm_options;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions : public Entity
{
    public:
        TdmOptions();
        ~TdmOptions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf payload_bytes; //type: uint16
        YLeaf bit_rate; //type: uint32
        YLeaf rtp; //type: L2VpnTdmRtpOptionEnum
        YLeaf timestamp_mode; //type: L2VpnTimeStampModeEnum
        YLeaf signalling_packets; //type: uint8
        YLeaf cas; //type: uint8
        YLeaf rtp_header_payload_type; //type: uint8
        YLeaf timestamp_clock_freq; //type: uint16
        YLeaf ssrc; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum_number_cells_packed; //type: uint16
        YLeaf maximum_number_cells_un_packed; //type: uint16
        YLeaf atm_mode; //type: L2VpnAtmModeEnum
        YLeaf vpi; //type: uint16
        YLeaf vci; //type: uint16



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Atm


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr : public Entity
{
    public:
        Fr();
        ~Fr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fr_mode; //type: L2VpnFrModeEnum
        YLeaf dlci; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::Fr


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther : public Entity
{
    public:
        PseudowireEther();
        ~PseudowireEther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList> interface_list;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw : public Entity
{
    public:
        PseudowireIw();
        ~PseudowireIw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_valid; //type: boolean
        YLeaf internal_label; //type: uint32

        class InterfaceList; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList> interface_list;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_list_name; //type: string
        YLeaf interface_list_id; //type: uint32

        class Interface; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface> > interface;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf replicate_status; //type: IflistRepStatusEnum



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath : public Entity
{
    public:
        PreferredPath();
        ~PreferredPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf option; //type: L2VpnPrefpathOptionEnum
        YLeaf next_hop_ip; //type: uint32
        YLeaf te_tunnel_interface_number; //type: uint32
        YLeaf ip_tunnel_interface_number; //type: uint32
        YLeaf tp_tunnel_interface_number; //type: uint32



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::PreferredPath


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling : public Entity
{
    public:
        LocalSignalling();
        ~LocalSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_status; //type: uint32

        class StatusTlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv> > tlv;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::StatusTlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::LocalSignalling::Tlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling : public Entity
{
    public:
        RemoteSignalling();
        ~RemoteSignalling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_status; //type: uint32

        class StatusTlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv
        class Tlv; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv> status_tlv;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv> > tlv;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv : public Entity
{
    public:
        StatusTlv();
        ~StatusTlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::StatusTlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_id; //type: uint32
        YLeaf local_address; //type: string
        YLeaf remote_address; //type: string
        YLeaf description; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::RemoteSignalling::Tlv


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpostionStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats
        class DispostionStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats
        class SequenceNumber; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats> dispostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats> impostion_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber> sequence_number;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats : public Entity
{
    public:
        ImpostionStats();
        ~ImpostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ImpositionStat; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat
        class ImpositionMtuDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop
        class ImpostionTailDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop
        class L2FsbiDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop
        class Multicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast
        class Broadcast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast
        class KnownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast
        class UnknownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast> broadcast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop> imposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat> imposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop> impostion_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop> l2fsbi_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast> unknown_unicast;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat : public Entity
{
    public:
        ImpositionStat();
        ~ImpositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionStat


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop : public Entity
{
    public:
        ImpositionMtuDrop();
        ~ImpositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop : public Entity
{
    public:
        ImpostionTailDrop();
        ~ImpostionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop : public Entity
{
    public:
        L2FsbiDrop();
        ~L2FsbiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Multicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::Broadcast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast : public Entity
{
    public:
        UnknownUnicast();
        ~UnknownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats : public Entity
{
    public:
        DispostionStats();
        ~DispostionStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DispositionStat; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat
        class DispositionMtuDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop
        class DispositionTailDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop
        class MulticastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop
        class UnicastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop
        class BroadcastDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop
        class ReceivedDrops; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops
        class DaiDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop
        class IpsgDrop; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop
        class DispositionOoODrops; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops
        class DispositionP2MpStats; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats
        class KnownUnicast; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast
        class MacMove; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop> broadcast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop> dai_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop> disposition_mtu_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops> disposition_oo_o_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats> disposition_p2mp_stats;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat> disposition_stat;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop> disposition_tail_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop> ipsg_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast> known_unicast;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove> mac_move;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop> multicast_drop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops> received_drops;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop> unicast_drop;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat : public Entity
{
    public:
        DispositionStat();
        ~DispositionStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionStat


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop : public Entity
{
    public:
        DispositionMtuDrop();
        ~DispositionMtuDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop : public Entity
{
    public:
        DispositionTailDrop();
        ~DispositionTailDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop : public Entity
{
    public:
        MulticastDrop();
        ~MulticastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MulticastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop : public Entity
{
    public:
        UnicastDrop();
        ~UnicastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::UnicastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop : public Entity
{
    public:
        BroadcastDrop();
        ~BroadcastDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::BroadcastDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops : public Entity
{
    public:
        ReceivedDrops();
        ~ReceivedDrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::ReceivedDrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop : public Entity
{
    public:
        DaiDrop();
        ~DaiDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DaiDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop : public Entity
{
    public:
        IpsgDrop();
        ~IpsgDrop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::IpsgDrop


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops : public Entity
{
    public:
        DispositionOoODrops();
        ~DispositionOoODrops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats : public Entity
{
    public:
        DispositionP2MpStats();
        ~DispositionP2MpStats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast : public Entity
{
    public:
        KnownUnicast();
        ~KnownUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::KnownUnicast


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove : public Entity
{
    public:
        MacMove();
        ~MacMove();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf packet_counts; //type: uint64
        YLeaf byte_counts; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::DispostionStats::MacMove


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber : public Entity
{
    public:
        SequenceNumber();
        ~SequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number_sent; //type: uint32
        YLeaf sequence_number_expected; //type: uint32
        YLeaf bypassed_inbound_sequence_packet; //type: uint64
        YLeaf bypassed_out_sequence_packet; //type: uint64



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::Statistics::SequenceNumber


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw : public Entity
{
    public:
        P2MpPw();
        ~P2MpPw();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_available; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf local_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf local_tunnel_id; //type: uint32
        YLeaf local_extended_tunnel_id; //type: string
        YLeaf local_p2mp_id; //type: uint32
        YLeaf local_flags; //type: uint8
        YLeaf remote_available; //type: boolean
        YLeaf remote_label; //type: uint32
        YLeaf remote_ptree_type; //type: L2VpnP2MpPwPtreeEnum
        YLeaf remote_tunnel_id; //type: uint32
        YLeaf remote_extended_tunnel_id; //type: string
        YLeaf remote_p2mp_id; //type: uint32
        YLeaf remote_flags; //type: uint8



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::Pseudowire::P2MpPw


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64
        YLeaf dhcpv4_trust; //type: boolean

        class Base; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base
        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base> base;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base : public Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::Base::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl : public Entity
{
    public:
        StormControl();
        ~StormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_policer; //type: boolean
        YLeaf unicast; //type: boolean
        YLeaf multicast; //type: boolean
        YLeaf broadcast; //type: boolean



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::SecurityParameters::StormControl


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac : public Entity
{
    public:
        StaticMac();
        ~StaticMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf bmac; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeAccessPws::BridgeAccessPw::StaticMac


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo : public Entity
{
    public:
        BridgeDomainInfo();
        ~BridgeDomainInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_name; //type: string
        YLeaf bridge_name; //type: string
        YLeaf bridge_domain_id; //type: uint32
        YLeaf bridge_description; //type: string
        YLeaf bridge_state; //type: L2VpnBridgeStateEnum
        YLeaf bridge_coupled_state; //type: L2VpnBridgeCoupledStateEnum
        YLeaf bridge_shg_id; //type: uint32
        YLeaf bridge_msti; //type: uint32
        YLeaf acpwup; //type: uint32
        YLeaf bridge_internal_msti; //type: uint32
        YLeaf configured; //type: boolean
        YLeaf number_vf_is; //type: uint32
        YLeaf number_access_vf_is; //type: uint32
        YLeaf number_a_cs; //type: uint32
        YLeaf number_a_cs_up; //type: uint32
        YLeaf number_pseudowires; //type: uint32
        YLeaf number_p_ws_up; //type: uint32
        YLeaf standby_pseudowires; //type: uint32
        YLeaf number_pb_bs; //type: uint8
        YLeaf number_pb_bs_up; //type: uint8
        YLeaf num_vn_is; //type: uint32
        YLeaf num_vn_is_up; //type: uint32
        YLeaf partially_programmed_pseudowires; //type: uint32
        YLeaf partially_programmed_a_cs; //type: uint32
        YLeaf bridge_mtu; //type: uint32
        YLeaf shutdown; //type: boolean
        YLeaf mac_limit_down; //type: boolean
        YLeaf flodd_group_id_down; //type: boolean
        YLeaf mac_withdraw; //type: boolean
        YLeaf mac_withdraw_access; //type: boolean
        YLeaf mac_withdraw_relay; //type: boolean
        YLeaf mac_withdraw_option; //type: L2VpnBagMacWithdrawOptionEnum
        YLeaf p2mp_enabled; //type: boolean
        YLeaf bridge_type; //type: L2VpnBridgeEnum
        YLeaf vine_fsm_state; //type: string
        YLeaf time_created; //type: string
        YLeaf time_elapsed_creation; //type: string
        YLeaf last_time_status_changed; //type: string
        YLeaf time_elapsed_status_changed; //type: string
        YLeaf load_balance; //type: L2VpnLoadBalEnum
        YLeaf is_bridge_partially_programmed; //type: boolean
        YLeaf evi; //type: uint32
        YLeaf is_rd_configured; //type: boolean
        YLeaf imposition_pkt_count; //type: uint64
        YLeaf imposition_byte_count; //type: uint64
        YLeaf disposition_pkt_count; //type: uint64
        YLeaf disposition_bytecount; //type: uint64
        YLeaf as; //type: uint32
        YLeaf nv_satellite_offload_ipv4_multicast_disabled; //type: boolean

        class SecurityParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters
        class PbbParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters
        class EvpnParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters
        class VniParameters; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters
        class Rd; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd
        class MacFilter; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter
        class BridgeVfi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi
        class BridgeAccessVfi; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeAccessVfi> > bridge_access_vfi;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::BridgeVfi> > bridge_vfi;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::EvpnParameters> evpn_parameters;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::MacFilter> > mac_filter;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::PbbParameters> pbb_parameters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::Rd> rd;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters> security_parameters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::VniParameters> vni_parameters;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo


class L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters : public Entity
{
    public:
        SecurityParameters();
        ~SecurityParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_limit; //type: uint32
        YLeaf mac_limit_action; //type: L2VpnBagMacLimitActionEnum
        YLeaf mac_limit_notification; //type: L2VpnBagMacLimitNotifyEnum
        YLeaf mac_aging_time; //type: uint32
        YLeaf mac_aging_mode; //type: L2VpnBagMacAgingModeEnum
        YLeaf mac_flooding; //type: boolean
        YLeaf mac_learning; //type: boolean
        YLeaf learn_disabled_mac_limit_action; //type: boolean
        YLeaf flood_uu_disabled_mac_limit_action; //type: boolean
        YLeaf mac_limit_reached; //type: boolean
        YLeaf flood_unknown_unicast_enabled; //type: boolean
        YLeaf mac_port_down_flush_enabled; //type: boolean
        YLeaf split_horizon_group_id; //type: uint32
        YLeaf is_ip_source_guard_enabled; //type: boolean
        YLeaf is_ipsg_logging_enabled; //type: boolean
        YLeaf is_dai_enabled; //type: boolean
        YLeaf is_dai_logging_enabled; //type: boolean
        YLeaf is_dai_addr_validate_source_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_destination_mac_enabled; //type: boolean
        YLeaf is_dai_addr_validate_ipv4_enabled; //type: boolean
        YLeaf is_mac_secure_enabled; //type: boolean
        YLeaf mac_secure_action; //type: L2VpnBagMacSecureActionEnum
        YLeaf is_mac_secure_logging_enabled; //type: boolean
        YLeaf is_mac_secure_accept_shutdown_enabled; //type: boolean
        YLeaf dai_address_validation_mask; //type: uint8
        YLeaf dhcpv4_snoop; //type: boolean
        YLeaf dhcpv4_profile_name; //type: string
        YLeaf igm_pv4_disabled; //type: boolean
        YLeaf igm_pv4_profile_name; //type: string
        YLeaf mld_profile_name; //type: string
        YLeaf mmrp_flood_optimization; //type: boolean
        YLeaf unicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf unicast_storm_control_pps; //type: uint64
        YLeaf unicast_storm_control_kb_ps; //type: uint64
        YLeaf multicast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf multicast_storm_control_pps; //type: uint64
        YLeaf multicast_storm_control_kb_ps; //type: uint64
        YLeaf broadcast_storm_control_rate_unit; //type: L2VpnBagStormControlRateUnitEnum
        YLeaf broadcast_storm_control_pps; //type: uint64
        YLeaf broadcast_storm_control_kb_ps; //type: uint64

        class StormControl; //type: L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl

        std::shared_ptr<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters::StormControl> storm_control;


}; // L2Vpnv2::Active::BridgeDomains::BridgeDomain::BridgeDomainInfo::SecurityParameters


}
}

#endif /* _CISCO_IOS_XR_L2VPN_OPER_17_ */
