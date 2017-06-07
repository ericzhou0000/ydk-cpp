#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_10_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_infra_policymgr_oper_0.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_5.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_7.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_9.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_oper {


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort : public Entity
{
    public:
        DstPort();
        ~DstPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassEncode::InlineCmap::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP : public Entity
{
    public:
        ExcdclassP();
        ~ExcdclassP();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMapBg; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg> > class_map_bg;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg : public Entity
{
    public:
        ClassMapBg();
        ~ClassMapBg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf magic; //type: uint32
        YLeaf name; //type: string
        YLeaf type; //type: ClassMapEnum
        YLeaf mode; //type: ClassMapModeEnum
        YLeaf flags; //type: uint32
        YLeaf match_count; //type: uint32
        YLeaf chk_sum; //type: string
        YLeaf description; //type: string
        class MatchInfop; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop> match_infop;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop : public Entity
{
    public:
        MatchInfop();
        ~MatchInfop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ClassMatchInfoSt; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt> > class_match_info_st;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt : public Entity
{
    public:
        ClassMatchInfoSt();
        ~ClassMatchInfoSt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flags; //type: uint32
        class MatchData; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData> match_data;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData : public Entity
{
    public:
        MatchData();
        ~MatchData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: MatchEnum
        YLeaf mpls_top_eos; //type: uint8
        YLeaf fragment_type; //type: uint8
        YLeaf authen_status; //type: MatchAuthenStatusEnum
        YLeaf mlp_negotiated; //type: MatchMlpNegotiatedEnum
        class Ipv4Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp
        class Ipv6Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp
        class Dscp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp
        class Ipv4Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec
        class Ipv6Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec
        class Prec; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec
        class DiscardClass; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass
        class QosGroup; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup
        class TrafficClass; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass
        class Proto; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto
        class IcmpV4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4
        class IcmpV6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6
        class Ipv4PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen
        class Ipv6PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen
        class PacketLen; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen
        class FlowTag; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag
        class TcpFlag; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag
        class Icmpv4Type; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type
        class Icmpv4Code; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code
        class Icmpv6Type; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type
        class Icmpv6Code; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code
        class MplsExp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp
        class MplsExpImp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp
        class MplsDispIpv4Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl
        class MplsDispIpv6Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl
        class MplsTopLabel; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel
        class Cos; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos
        class CosInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr
        class Dei; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei
        class DeiInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr
        class Vlan; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan
        class VlanInr; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr
        class FrDlci; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci
        class SrcMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac
        class DstMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac
        class AtmClp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp
        class FrDe; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe
        class Ipv4Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl
        class Ipv6Acl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl
        class EtherServiceAcl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl
        class AvailId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId
        class MediaType; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType
        class SubsProtocol; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol
        class Dnis; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis
        class DnisRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex
        class Domain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain
        class DomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex
        class NasPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort
        class ServiceName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName
        class ServiceNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex
        class SrcAddrIpv4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4
        class DstAddrIpv4; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4
        class SrcAddrIpv6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6
        class DstAddrIpv6; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6
        class SrcAddrMac; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac
        class Timer; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer
        class TimerRegexp; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp
        class TunnelName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName
        class TunnelNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex
        class UserName; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName
        class UserNameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex
        class AuthUsername; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername
        class AuthUsernameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex
        class UnauthUsername; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername
        class UnauthUsernameRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex
        class AuthDomain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain
        class AuthDomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex
        class UnauthDomain; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain
        class UnauthDomainRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex
        class VendorId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId
        class VendorIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex
        class AccessInterface; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface
        class InputInterface; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface
        class InputIntfhdl; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl
        class Ethertype; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype
        class FlowKeyData; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData
        class DhcpClientId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId
        class DhcpClientIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex
        class CircuitId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId
        class CircuitIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex
        class RemoteId; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId
        class RemoteIdRegex; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex
        class SrcPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort
        class DstPort; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface> access_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp> atm_clp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain> auth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex> auth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername> auth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex> auth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId> avail_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId> circuit_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex> circuit_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos> cos;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr> cos_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei> dei;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr> dei_inr;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId> dhcp_client_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex> dhcp_client_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass> discard_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis> dnis;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex> dnis_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain> domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex> domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4> dst_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6> dst_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac> dst_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort> dst_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl> ether_service_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype> ethertype;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData> flow_key_data;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag> flow_tag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe> fr_de;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci> fr_dlci;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4> icmp_v4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6> icmp_v6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code> icmpv4_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type> icmpv4_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code> icmpv6_code;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type> icmpv6_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface> input_interface;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl> input_intfhdl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl> ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp> ipv4_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen> ipv4_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec> ipv4_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl> ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp> ipv6_dscp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen> ipv6_packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec> ipv6_prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType> media_type;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl> mpls_disp_ipv4_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl> mpls_disp_ipv6_acl;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp> mpls_exp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp> mpls_exp_imp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel> mpls_top_label;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort> nas_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen> packet_len;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec> prec;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto> proto;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup> qos_group;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId> remote_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex> remote_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName> service_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex> service_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4> src_addr_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6> src_addr_ipv6;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac> src_addr_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac> src_mac;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort> src_port;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol> subs_protocol;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag> tcp_flag;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer> timer;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp> timer_regexp;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass> traffic_class;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName> tunnel_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex> tunnel_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain> unauth_domain;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex> unauth_domain_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername> unauth_username;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex> unauth_username_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName> user_name;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex> user_name_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId> vendor_id;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex> vendor_id_regex;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan> vlan;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr> vlan_inr;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp : public Entity
{
    public:
        Ipv4Dscp();
        ~Ipv4Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp : public Entity
{
    public:
        Ipv6Dscp();
        ~Ipv6Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dscp::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec : public Entity
{
    public:
        Ipv4Prec();
        ~Ipv4Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec : public Entity
{
    public:
        Ipv6Prec();
        ~Ipv6Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec : public Entity
{
    public:
        Prec();
        ~Prec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass : public Entity
{
    public:
        DiscardClass();
        ~DiscardClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DiscardClass


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup : public Entity
{
    public:
        QosGroup();
        ~QosGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass : public Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto : public Entity
{
    public:
        Proto();
        ~Proto();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4 : public Entity
{
    public:
        IcmpV4();
        ~IcmpV4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8
        YLeaf code; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6 : public Entity
{
    public:
        IcmpV6();
        ~IcmpV6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint8
        YLeaf code; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen : public Entity
{
    public:
        Ipv4PacketLen();
        ~Ipv4PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen : public Entity
{
    public:
        Ipv6PacketLen();
        ~Ipv6PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen : public Entity
{
    public:
        PacketLen();
        ~PacketLen();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag : public Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag : public Entity
{
    public:
        TcpFlag();
        ~TcpFlag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf match_any; //type: boolean

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type : public Entity
{
    public:
        Icmpv4Type();
        ~Icmpv4Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code : public Entity
{
    public:
        Icmpv4Code();
        ~Icmpv4Code();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type : public Entity
{
    public:
        Icmpv6Type();
        ~Icmpv6Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code : public Entity
{
    public:
        Icmpv6Code();
        ~Icmpv6Code();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint8_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array> > uint8_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array : public Entity
{
    public:
        Uint8_Rng_Array();
        ~Uint8_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint8
        YLeaf max; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp : public Entity
{
    public:
        MplsExp();
        ~MplsExp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp : public Entity
{
    public:
        MplsExpImp();
        ~MplsExpImp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl : public Entity
{
    public:
        MplsDispIpv4Acl();
        ~MplsDispIpv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl : public Entity
{
    public:
        MplsDispIpv6Acl();
        ~MplsDispIpv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel : public Entity
{
    public:
        MplsTopLabel();
        ~MplsTopLabel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint32_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array> > uint32_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array : public Entity
{
    public:
        Uint32_Rng_Array();
        ~Uint32_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos : public Entity
{
    public:
        Cos();
        ~Cos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Cos


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr : public Entity
{
    public:
        CosInr();
        ~CosInr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CosInr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei : public Entity
{
    public:
        Dei();
        ~Dei();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bit_value; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dei


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr : public Entity
{
    public:
        DeiInr();
        ~DeiInr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bit_value; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DeiInr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VlanIdArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray> > vlan_id_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray : public Entity
{
    public:
        VlanIdArray();
        ~VlanIdArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16
        YLeaf mask; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr : public Entity
{
    public:
        VlanInr();
        ~VlanInr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci : public Entity
{
    public:
        FrDlci();
        ~FrDlci();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac : public Entity
{
    public:
        SrcMac();
        ~SrcMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac : public Entity
{
    public:
        DstMac();
        ~DstMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp : public Entity
{
    public:
        AtmClp();
        ~AtmClp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AtmClp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe : public Entity
{
    public:
        FrDe();
        ~FrDe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl : public Entity
{
    public:
        Ipv4Acl();
        ~Ipv4Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl : public Entity
{
    public:
        Ipv6Acl();
        ~Ipv6Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl : public Entity
{
    public:
        EtherServiceAcl();
        ~EtherServiceAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId : public Entity
{
    public:
        AvailId();
        ~AvailId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AvailId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType : public Entity
{
    public:
        MediaType();
        ~MediaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol : public Entity
{
    public:
        SubsProtocol();
        ~SubsProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint8_array; //type: list of  uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis : public Entity
{
    public:
        Dnis();
        ~Dnis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Dnis


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex : public Entity
{
    public:
        DnisRegex();
        ~DnisRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DnisRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray> > domain_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Domain::DomainArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex : public Entity
{
    public:
        DomainRegex();
        ~DomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DomainArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray> > domain_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray : public Entity
{
    public:
        DomainArray();
        ~DomainArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        YLeaf format_name; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DomainRegex::DomainArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort : public Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NasPortArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray> > nas_port_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray : public Entity
{
    public:
        NasPortArray();
        ~NasPortArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_id; //type: MatchNasPortSubIdEnum
        YLeaf operator_; //type: MatchLogicalOperatorEnum
        YLeaf value_; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName : public Entity
{
    public:
        ServiceName();
        ~ServiceName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex : public Entity
{
    public:
        ServiceNameRegex();
        ~ServiceNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4 : public Entity
{
    public:
        SrcAddrIpv4();
        ~SrcAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4 : public Entity
{
    public:
        DstAddrIpv4();
        ~DstAddrIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray> > ipv4_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray : public Entity
{
    public:
        Ipv4AddrArray();
        ~Ipv4AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6 : public Entity
{
    public:
        SrcAddrIpv6();
        ~SrcAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray : public Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6 : public Entity
{
    public:
        DstAddrIpv6();
        ~DstAddrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6AddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray> > ipv6_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray : public Entity
{
    public:
        Ipv6AddrArray();
        ~Ipv6AddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf mask; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac : public Entity
{
    public:
        SrcAddrMac();
        ~SrcAddrMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MacAddrArray; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray> > mac_addr_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray : public Entity
{
    public:
        MacAddrArray();
        ~MacAddrArray();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList mac_addr; //type: list of  uint16
        YLeafList mask; //type: list of  uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp : public Entity
{
    public:
        TimerRegexp();
        ~TimerRegexp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName : public Entity
{
    public:
        TunnelName();
        ~TunnelName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex : public Entity
{
    public:
        TunnelNameRegex();
        ~TunnelNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName : public Entity
{
    public:
        UserName();
        ~UserName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex : public Entity
{
    public:
        UserNameRegex();
        ~UserNameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername : public Entity
{
    public:
        AuthUsername();
        ~AuthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsername


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex : public Entity
{
    public:
        AuthUsernameRegex();
        ~AuthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthUsernameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername : public Entity
{
    public:
        UnauthUsername();
        ~UnauthUsername();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex : public Entity
{
    public:
        UnauthUsernameRegex();
        ~UnauthUsernameRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain : public Entity
{
    public:
        AuthDomain();
        ~AuthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomain


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex : public Entity
{
    public:
        AuthDomainRegex();
        ~AuthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AuthDomainRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain : public Entity
{
    public:
        UnauthDomain();
        ~UnauthDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex : public Entity
{
    public:
        UnauthDomainRegex();
        ~UnauthDomainRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId : public Entity
{
    public:
        VendorId();
        ~VendorId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex : public Entity
{
    public:
        VendorIdRegex();
        ~VendorIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface : public Entity
{
    public:
        AccessInterface();
        ~AccessInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::AccessInterface


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface : public Entity
{
    public:
        InputInterface();
        ~InputInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl : public Entity
{
    public:
        InputIntfhdl();
        ~InputIntfhdl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList uint64_array; //type: list of  uint64

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype : public Entity
{
    public:
        Ethertype();
        ~Ethertype();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData : public Entity
{
    public:
        FlowKeyData();
        ~FlowKeyData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_count; //type: uint16
        YLeaf idle_timeout; //type: uint16
        class FlowKeys; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys> flow_keys;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys : public Entity
{
    public:
        FlowKeys();
        ~FlowKeys();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf keys; //type: string
        YLeaf num; //type: uint8

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId : public Entity
{
    public:
        DhcpClientId();
        ~DhcpClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex : public Entity
{
    public:
        DhcpClientIdRegex();
        ~DhcpClientIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DhcpClientIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId : public Entity
{
    public:
        CircuitId();
        ~CircuitId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex : public Entity
{
    public:
        CircuitIdRegex();
        ~CircuitIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::CircuitIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId : public Entity
{
    public:
        RemoteId();
        ~RemoteId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex : public Entity
{
    public:
        RemoteIdRegex();
        ~RemoteIdRegex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList string_array; //type: list of  string

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort : public Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort : public Entity
{
    public:
        DstPort();
        ~DstPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Uint16_Rng_Array; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array> > uint16_rng_array;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array : public Entity
{
    public:
        Uint16_Rng_Array();
        ~Uint16_Rng_Array();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint16
        YLeaf max; //type: uint16

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police::ExcdclassP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16_Rng_Array


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bw; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw
        class Be; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be> be;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw> bw;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw : public Entity
{
    public:
        Bw();
        ~Bw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Bw


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be : public Entity
{
    public:
        Be();
        ~Be();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape::Be


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy : public Entity
{
    public:
        ChildPolicy();
        ~ChildPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enc; //type: PolicyObjEncEnum
        class Info; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info
        class HdInfo; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo> hd_info;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info> info;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info : public Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: PolicyMapEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo : public Entity
{
    public:
        HdInfo();
        ~HdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hd; //type: uint64
        class DataHd; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd> data_hd;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd : public Entity
{
    public:
        DataHd();
        ~DataHd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac : public Entity
{
    public:
        Cac();
        ~Cac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cac_type; //type: uint8
        YLeaf idle_timeout; //type: uint16
        class FlowRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate
        class Rate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate> flow_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate> rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate : public Entity
{
    public:
        FlowRate();
        ~FlowRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc : public Entity
{
    public:
        Pfc();
        ~Pfc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pfc_pause_set; //type: uint32
        YLeaf buffer_size_flag; //type: uint32
        class BufferSize; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize
        class PauseThreshold; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold
        class ResumeThreshold; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize> buffer_size;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold> pause_threshold;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold> resume_threshold;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize : public Entity
{
    public:
        BufferSize();
        ~BufferSize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold : public Entity
{
    public:
        PauseThreshold();
        ~PauseThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold : public Entity
{
    public:
        ResumeThreshold();
        ~ResumeThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm : public Entity
{
    public:
        FlowParm();
        ~FlowParm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_mon_flows; //type: uint32
        YLeaf mon_interval; //type: uint32
        YLeaf intvl_hist; //type: uint32
        YLeaf flow_timeout; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr : public Entity
{
    public:
        Ipcbr();
        ~Ipcbr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf ip_pkt_rate; //type: uint32
        YLeaf media_pkt_size; //type: uint32
        YLeaf media_pkts_per_ip; //type: uint32
        class IpBitRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate
        class MediaBitRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate> ip_bit_rate;
        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate> media_bit_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate : public Entity
{
    public:
        MediaBitRate();
        ~MediaBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp : public Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp::ClockRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr : public Entity
{
    public:
        RtpMmr();
        ~RtpMmr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr::ClockRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K : public Entity
{
    public:
        RtpJ2K();
        ~RtpJ2K();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K::ClockRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice : public Entity
{
    public:
        RtpVoice();
        ~RtpVoice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf min_sequential; //type: uint32
        YLeaf max_dropout; //type: uint32
        YLeaf max_misorder; //type: uint32
        YLeaf seq_ext_cop4; //type: uint32
        class ClockRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate> > clock_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate : public Entity
{
    public:
        ClockRate();
        ~ClockRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pt; //type: uint32
        YLeaf frequency; //type: uint32

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice::ClockRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi : public Entity
{
    public:
        Mdi();
        ~Mdi();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf filtered_pkt_rate; //type: uint32
        YLeaf ip_pkt_rate; //type: uint32
        YLeafList pids; //type: list of  uint32
        class IpBitRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate> ip_bit_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate : public Entity
{
    public:
        IpBitRate();
        ~IpBitRate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        YLeaf unit; //type: PolicyParamUnitEnum

}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate


class PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp : public Entity
{
    public:
        MdiRtp();
        ~MdiRtp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action_metric_type; //type: PolicyActionEnum
        YLeaf filtered_pkt_rate; //type: uint32
        YLeaf ip_pkt_rate; //type: uint32
        YLeafList pids; //type: list of  uint32
        class IpBitRate; //type: PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate

        std::shared_ptr<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate> ip_bit_rate;
        
}; // PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_OPER_10_ */

