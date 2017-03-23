#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_1_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint16
        YLeaf state; //type: uint8

        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System> system;


}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16



}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum

        class Local; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local> local;


}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string



}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string



}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpMembers : public Entity
{
    public:
        LacpMembers();
        ~LacpMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LacpMember; //type: BundleInformation::Lacp::LacpMembers::LacpMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember> > lacp_member;


}; // BundleInformation::Lacp::LacpMembers


class BundleInformation::Lacp::LacpMembers::LacpMember : public Entity
{
    public:
        LacpMember();
        ~LacpMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string

        class LacpMemberAncestor; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor
        class LacpMemberItem; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor> lacp_member_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem> lacp_member_item;


}; // BundleInformation::Lacp::LacpMembers::LacpMember


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor : public Entity
{
    public:
        LacpMemberAncestor();
        ~LacpMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData
        class MemberData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData> > member_data;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16

        class ActorBundleData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData> actor_bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId> bundle_system_id;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData : public Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean

        class MacAddress; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress> mac_address;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32

        class DestinationAddress; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId : public Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf selection_state; //type: LacpSelStateEnum
        YLeaf period_state; //type: LacpPeriodStateEnum
        YLeaf receive_machine_state; //type: RxstatesEnum
        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf actor_churn_state; //type: LacpChurnstatesEnum
        YLeaf partner_churn_state; //type: LacpChurnstatesEnum
        YLeaf iccp_group_id; //type: uint32

        class ActorInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo> partner_info;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo : public Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_period; //type: uint32

        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo> port_info;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint16
        YLeaf state; //type: uint8

        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System> system;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo : public Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_period; //type: uint32

        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo> port_info;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint16
        YLeaf state; //type: uint8

        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System> system;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum

        class Local; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local> local;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem : public Entity
{
    public:
        LacpMemberItem();
        ~LacpMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf selection_state; //type: LacpSelStateEnum
        YLeaf period_state; //type: LacpPeriodStateEnum
        YLeaf receive_machine_state; //type: RxstatesEnum
        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf actor_churn_state; //type: LacpChurnstatesEnum
        YLeaf partner_churn_state; //type: LacpChurnstatesEnum
        YLeaf iccp_group_id; //type: uint32

        class ActorInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo> actor_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo> additional_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo> partner_info;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo : public Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_period; //type: uint32

        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo> port_info;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint16
        YLeaf state; //type: uint8

        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System> system;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo : public Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tx_period; //type: uint32

        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo> port_info;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo : public Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key; //type: uint16
        YLeaf state; //type: uint8

        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System> system;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf link_priority; //type: uint16
        YLeaf link_number; //type: uint16



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo : public Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mbr_type; //type: BmdMemberTypeEnumEnum

        class Local; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local> local;


}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign : public Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_address; //type: string
        YLeaf member_name; //type: string



}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign


class BundleInformation::MlacpBundleCounters : public Entity
{
    public:
        MlacpBundleCounters();
        ~MlacpBundleCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroups; //type: BundleInformation::MlacpBundleCounters::IccpGroups
        class Bundles; //type: BundleInformation::MlacpBundleCounters::Bundles
        class Nodes; //type: BundleInformation::MlacpBundleCounters::Nodes

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles> bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups> iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes> nodes;


}; // BundleInformation::MlacpBundleCounters


class BundleInformation::MlacpBundleCounters::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroup; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup> > iccp_group;


}; // BundleInformation::MlacpBundleCounters::IccpGroups


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32

        class IccpGroupItem; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem : public Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData> > node_data;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32

        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string

        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NodeData_; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_> node_data;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: uint32

        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string

        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Bundle; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle> > bundle;


}; // BundleInformation::MlacpBundleCounters::Bundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class BundleItem; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem> bundle_item;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem : public Entity
{
    public:
        BundleItem();
        ~BundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroup; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup> > iccp_group;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData> > node_data;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32

        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string

        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NodeData_; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_> node_data;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: uint32

        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string

        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: BundleInformation::MlacpBundleCounters::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node> > node;


}; // BundleInformation::MlacpBundleCounters::Nodes


class BundleInformation::MlacpBundleCounters::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node; //type: string

        class NodeItem; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem> node_item;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem : public Entity
{
    public:
        NodeItem();
        ~NodeItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData> > node_data;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32

        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string

        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NodeData_; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_> node_data;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_id; //type: uint32

        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string

        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64

        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32



}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::Protect : public Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectBundles; //type: BundleInformation::Protect::ProtectBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles> protect_bundles;


}; // BundleInformation::Protect


class BundleInformation::Protect::ProtectBundles : public Entity
{
    public:
        ProtectBundles();
        ~ProtectBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ProtectBundle; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle> > protect_bundle;


}; // BundleInformation::Protect::ProtectBundles


class BundleInformation::Protect::ProtectBundles::ProtectBundle : public Entity
{
    public:
        ProtectBundle();
        ~ProtectBundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class ProtectBundleItem; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem> protect_bundle_item;


}; // BundleInformation::Protect::ProtectBundles::ProtectBundle


class BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem : public Entity
{
    public:
        ProtectBundleItem();
        ~ProtectBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface_handle; //type: string
        YLeaf interface_up; //type: boolean
        YLeaf registered; //type: boolean
        YLeaf slow_path_up; //type: boolean
        YLeaf slow_path_trigger; //type: boolean
        YLeaf minimum_active_links; //type: uint32
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf event_type; //type: BmdBagTargetEnum
        YLeaf time_stamp; //type: uint64

        class MemberInfo; //type: BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo> > member_info;


}; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem


class BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo : public Entity
{
    public:
        MemberInfo();
        ~MemberInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_handle; //type: string
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf bandwidth; //type: uint32
        YLeaf node; //type: string
        YLeaf active; //type: boolean
        YLeaf notification_received; //type: boolean
        YLeaf slow_path_up; //type: boolean
        YLeaf time_stamp; //type: uint64



}; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo


class BundleInformation::MlacpBrief : public Entity
{
    public:
        MlacpBrief();
        ~MlacpBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpBundleBriefs; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs
        class MlacpBriefIccpGroups; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups> mlacp_brief_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs> mlacp_bundle_briefs;


}; // BundleInformation::MlacpBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs : public Entity
{
    public:
        MlacpBundleBriefs();
        ~MlacpBundleBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpBundleBrief; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief> > mlacp_bundle_brief;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief : public Entity
{
    public:
        MlacpBundleBrief();
        ~MlacpBundleBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class MlacpBundleItemBrief; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief> mlacp_bundle_item_brief;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief : public Entity
{
    public:
        MlacpBundleItemBrief();
        ~MlacpBundleItemBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData> > mlacp_data;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData : public Entity
{
    public:
        MlacpData();
        ~MlacpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData
        class BundleData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData> iccp_group_data;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64

        class NodeData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData> > node_data;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum

        class SystemId; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId> system_id;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64

        class MlacpBundleData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16

        class MacAddress; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;


}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum



}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups : public Entity
{
    public:
        MlacpBriefIccpGroups();
        ~MlacpBriefIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpBriefIccpGroup; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup> > mlacp_brief_iccp_group;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup : public Entity
{
    public:
        MlacpBriefIccpGroup();
        ~MlacpBriefIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32

        class MlacpBriefIccpGroupItem; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem> mlacp_brief_iccp_group_item;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem : public Entity
{
    public:
        MlacpBriefIccpGroupItem();
        ~MlacpBriefIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData
        class BundleData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData> iccp_group_data;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64

        class NodeData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData> > node_data;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum

        class SystemId; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64

        class MlacpBundleData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16

        class MacAddress; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;


}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum



}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData


class BundleInformation::Mlacp : public Entity
{
    public:
        Mlacp();
        ~Mlacp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpBundles; //type: BundleInformation::Mlacp::MlacpBundles
        class MlacpIccpGroups; //type: BundleInformation::Mlacp::MlacpIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles> mlacp_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups> mlacp_iccp_groups;


}; // BundleInformation::Mlacp


class BundleInformation::Mlacp::MlacpBundles : public Entity
{
    public:
        MlacpBundles();
        ~MlacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpBundle; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle> > mlacp_bundle;


}; // BundleInformation::Mlacp::MlacpBundles


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle : public Entity
{
    public:
        MlacpBundle();
        ~MlacpBundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class MlacpBundleItem; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem> mlacp_bundle_item;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem : public Entity
{
    public:
        MlacpBundleItem();
        ~MlacpBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData> > mlacp_data;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData : public Entity
{
    public:
        MlacpData();
        ~MlacpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData
        class BundleData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData> iccp_group_data;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64

        class NodeData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData> > node_data;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum

        class SystemId; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId> system_id;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64

        class MlacpBundleData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16

        class MacAddress; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;


}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum



}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData


class BundleInformation::Mlacp::MlacpIccpGroups : public Entity
{
    public:
        MlacpIccpGroups();
        ~MlacpIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MlacpIccpGroup; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup> > mlacp_iccp_group;


}; // BundleInformation::Mlacp::MlacpIccpGroups


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_1_ */
