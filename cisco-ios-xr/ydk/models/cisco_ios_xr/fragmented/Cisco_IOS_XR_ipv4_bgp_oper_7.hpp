#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_7_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_7_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_6.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TtlSecurityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo : public Entity
{
    public:
        Suppress4BbyteAsInfo();
        ~Suppress4BbyteAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::Suppress4BbyteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo : public Entity
{
    public:
        SessionOpenModeInfo();
        ~SessionOpenModeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::SessionOpenModeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo : public Entity
{
    public:
        BfdInfo();
        ~BfdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo : public Entity
{
    public:
        BfdMinintervalInfo();
        ~BfdMinintervalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo : public Entity
{
    public:
        BfdMultiplierInfo();
        ~BfdMultiplierInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo : public Entity
{
    public:
        TosInfo();
        ~TosInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::TosInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo : public Entity
{
    public:
        NsrDisabledInfo();
        ~NsrDisabledInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo : public Entity
{
    public:
        GracefulRestartDisabledInfo();
        ~GracefulRestartDisabledInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo : public Entity
{
    public:
        NbrRestartTimeInfo();
        ~NbrRestartTimeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo : public Entity
{
    public:
        NbrStalePathTimeInfo();
        ~NbrStalePathTimeInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo : public Entity
{
    public:
        NbrEnforceFirstAsInfo();
        ~NbrEnforceFirstAsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo : public Entity
{
    public:
        ClusterIdInfo();
        ~ClusterIdInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo : public Entity
{
    public:
        IgnoreConnectedInfo();
        ~IgnoreConnectedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo : public Entity
{
    public:
        InternalVpnClientInfo();
        ~InternalVpnClientInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo : public Entity
{
    public:
        AddpathSendCapabilityInfo();
        ~AddpathSendCapabilityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathSendCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo : public Entity
{
    public:
        AddpathReceiveCapabilityInfo();
        ~AddpathReceiveCapabilityInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::AddpathReceiveCapabilityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo : public Entity
{
    public:
        EgressPeerEngineeringInfo();
        ~EgressPeerEngineeringInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo : public Entity
{
    public:
        UpdateErrorHandlingNoResetInfo();
        ~UpdateErrorHandlingNoResetInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_item_configured; //type: boolean

        class InheritanceChain; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain> inheritance_chain;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain : public Entity
{
    public:
        InheritanceChain();
        ~InheritanceChain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpConfigEntid; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid> > bgp_config_entid;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid : public Entity
{
    public:
        BgpConfigEntid();
        ~BgpConfigEntid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family_identifier; //type: uint8
        YLeaf configuration_type; //type: BgpEntitiesEnum
        YLeaf group_name; //type: string

        class NeighborAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress> neighbor_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class L2VpnvplsAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::UpdateErrorHandlingNoResetInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_7_ */
