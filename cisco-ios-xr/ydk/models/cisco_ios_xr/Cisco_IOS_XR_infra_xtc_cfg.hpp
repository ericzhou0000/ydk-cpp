#ifndef _CISCO_IOS_XR_INFRA_XTC_CFG_
#define _CISCO_IOS_XR_INFRA_XTC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_xtc_cfg {

class Pce : public Entity
{
    public:
        Pce();
        ~Pce();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf server_address; //type: string
        YLeaf password; //type: string
        YLeaf enable; //type: empty

        class PccAddresses; //type: Pce::PccAddresses
        class Logging; //type: Pce::Logging
        class Backoff; //type: Pce::Backoff
        class StateSyncs; //type: Pce::StateSyncs
        class SegmentRouting; //type: Pce::SegmentRouting
        class Timers; //type: Pce::Timers
        class Netconf; //type: Pce::Netconf
        class DisjointPath; //type: Pce::DisjointPath
        class ExplicitPaths; //type: Pce::ExplicitPaths

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::Backoff> backoff;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath> disjoint_path;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths> explicit_paths;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::Logging> logging;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::Netconf> netconf;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses> pcc_addresses;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::SegmentRouting> segment_routing;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::StateSyncs> state_syncs;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::Timers> timers;


}; // Pce


class Pce::PccAddresses : public Entity
{
    public:
        PccAddresses();
        ~PccAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PccAddress; //type: Pce::PccAddresses::PccAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress> > pcc_address;


}; // Pce::PccAddresses


class Pce::PccAddresses::PccAddress : public Entity
{
    public:
        PccAddress();
        ~PccAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf enable; //type: empty

        class LspNames; //type: Pce::PccAddresses::PccAddress::LspNames

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames> lsp_names;


}; // Pce::PccAddresses::PccAddress


class Pce::PccAddresses::PccAddress::LspNames : public Entity
{
    public:
        LspNames();
        ~LspNames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LspName; //type: Pce::PccAddresses::PccAddress::LspNames::LspName

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName> > lsp_name;


}; // Pce::PccAddresses::PccAddress::LspNames


class Pce::PccAddresses::PccAddress::LspNames::LspName : public Entity
{
    public:
        LspName();
        ~LspName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf undelegate; //type: empty
        YLeaf explicit_path_name; //type: string
        YLeaf enable; //type: empty

        class RsvpTe; //type: Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe> rsvp_te;


}; // Pce::PccAddresses::PccAddress::LspNames::LspName


class Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe : public Entity
{
    public:
        RsvpTe();
        ~RsvpTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf fast_protect; //type: empty
        YLeaf bandwidth; //type: int32
        YLeaf enable; //type: empty

        class Affinity; //type: Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity
        class Priority; //type: Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority> priority; // presence node


}; // Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe


class Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf include_any; //type: string
        YLeaf include_all; //type: string
        YLeaf exclude_any; //type: string



}; // Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Affinity


class Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf setup_priority; //type: uint32
        YLeaf hold_priority; //type: uint32



}; // Pce::PccAddresses::PccAddress::LspNames::LspName::RsvpTe::Priority


class Pce::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf no_path; //type: empty
        YLeaf fallback; //type: empty



}; // Pce::Logging


class Pce::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ratio; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf difference; //type: uint32



}; // Pce::Backoff


class Pce::StateSyncs : public Entity
{
    public:
        StateSyncs();
        ~StateSyncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StateSync; //type: Pce::StateSyncs::StateSync

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::StateSyncs::StateSync> > state_sync;


}; // Pce::StateSyncs


class Pce::StateSyncs::StateSync : public Entity
{
    public:
        StateSync();
        ~StateSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // Pce::StateSyncs::StateSync


class Pce::SegmentRouting : public Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf te_latency; //type: empty
        YLeaf strict_sid_only; //type: empty



}; // Pce::SegmentRouting


class Pce::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf reoptimization_timer; //type: uint32
        YLeaf keepalive; //type: uint32
        YLeaf minimum_peer_keepalive; //type: uint32



}; // Pce::Timers


class Pce::Netconf : public Entity
{
    public:
        Netconf();
        ~Netconf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetconfSsh; //type: Pce::Netconf::NetconfSsh

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::Netconf::NetconfSsh> netconf_ssh;


}; // Pce::Netconf


class Pce::Netconf::NetconfSsh : public Entity
{
    public:
        NetconfSsh();
        ~NetconfSsh();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf netconf_ssh_password; //type: string
        YLeaf netconf_ssh_user; //type: string



}; // Pce::Netconf::NetconfSsh


class Pce::DisjointPath : public Entity
{
    public:
        DisjointPath();
        ~DisjointPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Groups; //type: Pce::DisjointPath::Groups

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath::Groups> groups;


}; // Pce::DisjointPath


class Pce::DisjointPath::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Group; //type: Pce::DisjointPath::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::DisjointPath::Groups::Group> > group;


}; // Pce::DisjointPath::Groups


class Pce::DisjointPath::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_id; //type: uint32
        YLeaf dp_type; //type: PceDisjointPathEnum
        YLeaf sub_id; //type: uint32
        YLeaf strict; //type: empty



}; // Pce::DisjointPath::Groups::Group


class Pce::ExplicitPaths : public Entity
{
    public:
        ExplicitPaths();
        ~ExplicitPaths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ExplicitPath; //type: Pce::ExplicitPaths::ExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths::ExplicitPath> > explicit_path;


}; // Pce::ExplicitPaths


class Pce::ExplicitPaths::ExplicitPath : public Entity
{
    public:
        ExplicitPath();
        ~ExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf enable; //type: empty

        class PathHops; //type: Pce::ExplicitPaths::ExplicitPath::PathHops

        std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths::ExplicitPath::PathHops> path_hops;


}; // Pce::ExplicitPaths::ExplicitPath


class Pce::ExplicitPaths::ExplicitPath::PathHops : public Entity
{
    public:
        PathHops();
        ~PathHops();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PathHop; //type: Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_xtc_cfg::Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop> > path_hop;


}; // Pce::ExplicitPaths::ExplicitPath::PathHops


class Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop : public Entity
{
    public:
        PathHop();
        ~PathHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint32
        YLeaf hop_type; //type: PceExplicitPathHopEnum
        YLeaf address; //type: string
        YLeaf remote_address; //type: string
        YLeaf mpls_label; //type: uint32



}; // Pce::ExplicitPaths::ExplicitPath::PathHops::PathHop

class PceExplicitPathHopEnum : public Enum
{
    public:
        static const Enum::YLeaf address;
        static const Enum::YLeaf sid_node;
        static const Enum::YLeaf sid_adjancency;
        static const Enum::YLeaf binding_sid;

};

class PceDisjointPathEnum : public Enum
{
    public:
        static const Enum::YLeaf link;
        static const Enum::YLeaf node;
        static const Enum::YLeaf srlg;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_XTC_CFG_ */
