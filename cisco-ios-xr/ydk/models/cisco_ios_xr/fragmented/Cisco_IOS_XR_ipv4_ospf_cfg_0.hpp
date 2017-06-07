#ifndef _CISCO_IOS_XR_IPV4_OSPF_CFG_0_
#define _CISCO_IOS_XR_IPV4_OSPF_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_cfg {

class Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Processes; //type: Ospf::Processes
        class Global; //type: Ospf::Global

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Global> global;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes> processes;
        
}; // Ospf


class Ospf::Processes : public Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Process; //type: Ospf::Processes::Process

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process> > process;
        
}; // Ospf::Processes


class Ospf::Processes::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_name; //type: string
        YLeaf start; //type: empty
        YLeaf nsr; //type: NsrEnum
        YLeaf protocol_shutdown; //type: OspfShutdownEnum
        YLeaf running; //type: empty
        class Snmp; //type: Ospf::Processes::Process::Snmp
        class Distribute; //type: Ospf::Processes::Process::Distribute
        class Vrfs; //type: Ospf::Processes::Process::Vrfs
        class GracefulShutdownTimers; //type: Ospf::Processes::Process::GracefulShutdownTimers
        class DefaultVrf; //type: Ospf::Processes::Process::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Distribute> distribute; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::GracefulShutdownTimers> graceful_shutdown_timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs> vrfs;
        
}; // Ospf::Processes::Process


class Ospf::Processes::Process::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TrapRateLimit; //type: Ospf::Processes::Process::Snmp::TrapRateLimit

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Snmp::TrapRateLimit> trap_rate_limit; // presence node
        
}; // Ospf::Processes::Process::Snmp


class Ospf::Processes::Process::Snmp::TrapRateLimit : public Entity
{
    public:
        TrapRateLimit();
        ~TrapRateLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf window_size; //type: uint32
        YLeaf max_window_traps; //type: uint32

}; // Ospf::Processes::Process::Snmp::TrapRateLimit


class Ospf::Processes::Process::Distribute : public Entity
{
    public:
        Distribute();
        ~Distribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf instance_id; //type: uint32

}; // Ospf::Processes::Process::Distribute


class Ospf::Processes::Process::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Ospf::Processes::Process::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf> > vrf;
        
}; // Ospf::Processes::Process::Vrfs


class Ospf::Processes::Process::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf vrf_start; //type: empty
        YLeaf snmp_trap_enabled; //type: boolean
        YLeaf domain_tag; //type: uint32
        YLeaf vrf_lite; //type: empty
        YLeaf disable_dn_bit_check; //type: empty
        YLeaf ignore_mospf; //type: empty
        YLeaf router_id; //type: string
        YLeaf type7; //type: empty
        YLeaf snmp_context; //type: string
        YLeaf maximum_interfaces; //type: uint32
        YLeaf no_opaque; //type: empty
        YLeaf spf_prefix_priority; //type: string
        YLeaf maximum_paths; //type: uint32
        YLeaf adjacency_changes; //type: OspfLogAdjEnum
        YLeaf default_metric; //type: uint32
        class DomainId; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId
        class Microloop; //type: Ospf::Processes::Process::Vrfs::Vrf::Microloop
        class MaximumRedistributePrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix
        class DefaultInformation; //type: Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation
        class Af; //type: Ospf::Processes::Process::Vrfs::Vrf::Af
        class Queue; //type: Ospf::Processes::Process::Vrfs::Vrf::Queue
        class MaxMetric; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric
        class Nsf; //type: Ospf::Processes::Process::Vrfs::Vrf::Nsf
        class ProcessScope; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope
        class Redistribution; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution
        class AdjacencyStagger; //type: Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger
        class MaxLsa; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxLsa
        class AutoCost; //type: Ospf::Processes::Process::Vrfs::Vrf::AutoCost
        class Ucmp; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute
        class SummaryPrefixes; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes
        class OutgoingRouteUpdates; //type: Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates
        class Distance; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance
        class AreaAddresses; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses
        class Timers; //type: Ospf::Processes::Process::Vrfs::Vrf::Timers

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger> adjacency_stagger;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Af> af; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses> area_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AutoCost> auto_cost;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance> distance;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId> domain_id;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxLsa> max_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric> max_metric;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix> maximum_redistribute_prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Microloop> microloop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates> outgoing_route_updates;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope> process_scope;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Queue> queue;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution> redistribution;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes> summary_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp> ucmp;
        
}; // Ospf::Processes::Process::Vrfs::Vrf


class Ospf::Processes::Process::Vrfs::Vrf::DomainId : public Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrimaryDomainId; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId
        class SecondaryDomainIds; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId> primary_domain_id;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds> secondary_domain_ids;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId


class Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId : public Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_id_type; //type: OspfDomainIdEnum
        YLeaf domain_id_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId


class Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds : public Entity
{
    public:
        SecondaryDomainIds();
        ~SecondaryDomainIds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SecondaryDomainId; //type: Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId> > secondary_domain_id;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds


class Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId : public Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_id_type; //type: OspfDomainIdEnum
        YLeaf domain_id_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId


class Ospf::Processes::Process::Vrfs::Vrf::Microloop : public Entity
{
    public:
        Microloop();
        ~Microloop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Avoidance; //type: Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance> avoidance;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Microloop


class Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance : public Entity
{
    public:
        Avoidance();
        ~Avoidance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: OspfUloopAvoidanceEnum
        YLeaf rib_update_delay; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Microloop::Avoidance


class Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix : public Entity
{
    public:
        MaximumRedistributePrefix();
        ~MaximumRedistributePrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_prefixes; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf warning_only; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::MaximumRedistributePrefix


class Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always_advertise; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: OspfLinkStateMetricEnum
        YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::DefaultInformation


class Ospf::Processes::Process::Vrfs::Vrf::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: OspfAddressFamilyEnum
        YLeaf saf_name; //type: OspfSubAddressFamilyEnum

}; // Ospf::Processes::Process::Vrfs::Vrf::Af


class Ospf::Processes::Process::Vrfs::Vrf::Queue : public Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dispatch_rate_limited_flush; //type: uint32
        YLeaf limit_high; //type: uint32
        YLeaf dispatch_spf_lsa_limit; //type: uint32
        YLeaf limit_low; //type: uint32
        YLeaf dispatch_rate_limited; //type: uint32
        YLeaf limit_medium; //type: uint32
        YLeaf dispatch_incoming; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Queue


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric : public Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_metric_no_abr_off; //type: empty
        class MaxMetricOnProcRestart; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart
        class MaxMetricOnStartup; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup
        class MaxMetricOnProcMigration; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration
        class MaxMetricAlways; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways
        class MaxMetricOnSwitchover; //type: Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways> max_metric_always;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration> max_metric_on_proc_migration;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart> max_metric_on_proc_restart;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup> max_metric_on_startup;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover> max_metric_on_switchover;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart : public Entity
{
    public:
        MaxMetricOnProcRestart();
        ~MaxMetricOnProcRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf startup_max; //type: uint32
        YLeaf include_stub; //type: boolean
        YLeaf summary_lsa; //type: boolean
        YLeaf summary_lsa_maximum_metric; //type: uint32
        YLeaf external_lsa; //type: boolean
        YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcRestart


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup : public Entity
{
    public:
        MaxMetricOnStartup();
        ~MaxMetricOnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf startup_max; //type: uint32
        YLeaf include_stub; //type: boolean
        YLeaf summary_lsa; //type: boolean
        YLeaf summary_lsa_maximum_metric; //type: uint32
        YLeaf external_lsa; //type: boolean
        YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnStartup


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration : public Entity
{
    public:
        MaxMetricOnProcMigration();
        ~MaxMetricOnProcMigration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf startup_max; //type: uint32
        YLeaf include_stub; //type: boolean
        YLeaf summary_lsa; //type: boolean
        YLeaf summary_lsa_maximum_metric; //type: uint32
        YLeaf external_lsa; //type: boolean
        YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnProcMigration


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways : public Entity
{
    public:
        MaxMetricAlways();
        ~MaxMetricAlways();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_stub; //type: boolean
        YLeaf summary_lsa; //type: boolean
        YLeaf summary_lsa_maximum_metric; //type: uint32
        YLeaf external_lsa; //type: boolean
        YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricAlways


class Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover : public Entity
{
    public:
        MaxMetricOnSwitchover();
        ~MaxMetricOnSwitchover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_for_bgp; //type: boolean
        YLeaf startup_max; //type: uint32
        YLeaf include_stub; //type: boolean
        YLeaf summary_lsa; //type: boolean
        YLeaf summary_lsa_maximum_metric; //type: uint32
        YLeaf external_lsa; //type: boolean
        YLeaf external_lsa_maximum_metric; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxMetric::MaxMetricOnSwitchover


class Ospf::Processes::Process::Vrfs::Vrf::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lifetime; //type: uint32
        YLeaf ietf; //type: OspfIetfNsfEnum
        YLeaf ietf_support_role; //type: OspfIetfNsfSupportEnum
        YLeaf cisco; //type: OspfCiscoNsfEnum
        YLeaf interval; //type: uint32
        YLeaf flush_delay_time; //type: uint32
        YLeaf ietf_strict_lsa_checking; //type: empty

}; // Ospf::Processes::Process::Vrfs::Vrf::Nsf


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope : public Entity
{
    public:
        ProcessScope();
        ~ProcessScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint32
        YLeaf external_out; //type: boolean
        YLeaf prefix_suppression_primary; //type: boolean
        YLeaf mtu_ignore; //type: boolean
        YLeaf ldp_sync_igp_shortcuts; //type: boolean
        YLeaf ldp_auto_config; //type: empty
        YLeaf summary_in; //type: boolean
        YLeaf network_type; //type: OspfNetworkEnum
        YLeaf hello_interval; //type: uint32
        YLeaf loopback_stub_network; //type: boolean
        YLeaf prefix_suppression_secondary; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf segment_routing; //type: OspfSegmentRoutingEnum
        YLeaf passive; //type: boolean
        YLeaf transmit_delay; //type: uint32
        YLeaf packet_size; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf database_filter; //type: boolean
        YLeaf link_down_fast_detect; //type: boolean
        YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
        YLeaf retransmit_interval; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf flood_reduction; //type: boolean
        class Srgb; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback> cost_fallback;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security> security;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb> srgb; // presence node
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb : public Entity
{
    public:
        Srgb();
        ~Srgb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lower_bound; //type: uint32
        YLeaf upper_bound; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Srgb


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_enable; //type: OspfProcFastRerouteEnum
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topology_independent_lfa; //type: boolean
        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel; //type: OspfProcFrrRlfaTunnelEnum
        YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list_name; //type: string
        YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf fast_detect_mode; //type: BfdEnableModeEnum

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authen_type; //type: OspfAuthenticationEnum
        YLeaf keychain_authen_type; //type: OspfKeychainAuthEnum
        YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies : public Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_id; //type: uint32
        YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal : public Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback : public Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint32
        YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::ProcessScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Redistributes; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes> redistributes;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes : public Entity
{
    public:
        Redistributes();
        ~Redistributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Redistribute; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute> > redistribute;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: OspfRedistProtocolEnum
        class ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip
        class ApplicationOrIsisOrOspf; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf
        class Bgp; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp
        class Eigrp; //type: Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf> > application_or_isis_or_ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip> connected_or_static_or_dagr_or_subscriber_or_mobile_or_rip; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp> > eigrp;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip : public Entity
{
    public:
        ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();
        ~ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf classful; //type: boolean
        YLeaf default_redistributed_route_metric; //type: uint32
        YLeaf tag; //type: int32
        YLeaf metric_type; //type: OspfLinkStateMetricEnum
        YLeaf eigrp_route_type; //type: OspfEigrpRouteEnum
        YLeaf isis_levels; //type: OspfRouteLevelEnum
        YLeaf ospf_internal; //type: boolean
        YLeaf ospf_external; //type: OspfRouteLevelEnum
        YLeaf ospf_nssa_level; //type: OspfRouteLevelEnum
        YLeaf route_policy_name; //type: string
        YLeaf bgp_preserve_med; //type: boolean
        YLeaf bgp_preserve_default_info; //type: boolean
        YLeaf ospf_redist_lsa_type; //type: OspfRedistLsaEnum
        YLeaf ospfnssa_only; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ConnectedOrStaticOrDagrOrSubscriberOrMobileOrRip


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf : public Entity
{
    public:
        ApplicationOrIsisOrOspf();
        ~ApplicationOrIsisOrOspf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        YLeaf classful; //type: boolean
        YLeaf default_redistributed_route_metric; //type: uint32
        YLeaf tag; //type: int32
        YLeaf metric_type; //type: OspfLinkStateMetricEnum
        YLeaf eigrp_route_type; //type: OspfEigrpRouteEnum
        YLeaf isis_levels; //type: OspfRouteLevelEnum
        YLeaf ospf_internal; //type: boolean
        YLeaf ospf_external; //type: OspfRouteLevelEnum
        YLeaf ospf_nssa_level; //type: OspfRouteLevelEnum
        YLeaf route_policy_name; //type: string
        YLeaf bgp_preserve_med; //type: boolean
        YLeaf bgp_preserve_default_info; //type: boolean
        YLeaf ospf_redist_lsa_type; //type: OspfRedistLsaEnum
        YLeaf ospfnssa_only; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::ApplicationOrIsisOrOspf


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf classful; //type: boolean
        YLeaf default_redistributed_route_metric; //type: uint32
        YLeaf tag; //type: int32
        YLeaf metric_type; //type: OspfLinkStateMetricEnum
        YLeaf eigrp_route_type; //type: OspfEigrpRouteEnum
        YLeaf isis_levels; //type: OspfRouteLevelEnum
        YLeaf ospf_internal; //type: boolean
        YLeaf ospf_external; //type: OspfRouteLevelEnum
        YLeaf ospf_nssa_level; //type: OspfRouteLevelEnum
        YLeaf route_policy_name; //type: string
        YLeaf bgp_preserve_med; //type: boolean
        YLeaf bgp_preserve_default_info; //type: boolean
        YLeaf ospf_redist_lsa_type; //type: OspfRedistLsaEnum
        YLeaf ospfnssa_only; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Bgp


class Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_name; //type: string
        YLeaf as_xx; //type: uint32
        YLeaf classful; //type: boolean
        YLeaf default_redistributed_route_metric; //type: uint32
        YLeaf tag; //type: int32
        YLeaf metric_type; //type: OspfLinkStateMetricEnum
        YLeaf eigrp_route_type; //type: OspfEigrpRouteEnum
        YLeaf isis_levels; //type: OspfRouteLevelEnum
        YLeaf ospf_internal; //type: boolean
        YLeaf ospf_external; //type: OspfRouteLevelEnum
        YLeaf ospf_nssa_level; //type: OspfRouteLevelEnum
        YLeaf route_policy_name; //type: string
        YLeaf bgp_preserve_med; //type: boolean
        YLeaf bgp_preserve_default_info; //type: boolean
        YLeaf ospf_redist_lsa_type; //type: OspfRedistLsaEnum
        YLeaf ospfnssa_only; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::Redistribution::Redistributes::Redistribute::Eigrp


class Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger : public Entity
{
    public:
        AdjacencyStagger();
        ~AdjacencyStagger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf initial_nbr; //type: uint32
        YLeaf max_nbr; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AdjacencyStagger


class Ospf::Processes::Process::Vrfs::Vrf::MaxLsa : public Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_lsa_limit; //type: uint32
        YLeaf max_lsa_threshold; //type: uint32
        YLeaf max_lsa_warning_only; //type: boolean
        YLeaf max_lsa_ignore_time; //type: uint32
        YLeaf max_lsa_ignore_count; //type: uint32
        YLeaf max_lsa_reset_time; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::MaxLsa


class Ospf::Processes::Process::Vrfs::Vrf::AutoCost : public Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: boolean
        YLeaf bandwidth; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AutoCost


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp : public Entity
{
    public:
        Ucmp();
        ~Ucmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay_interval; //type: uint32
        class Enable; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable> enable;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf variance; //type: uint32
        YLeaf prefix_list_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::Enable


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Ucmp::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: OspfFastReroutePriorityEnum

}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf load_sharing_disable; //type: empty
        YLeaf priority; //type: OspfFastReroutePriorityEnum
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers : public Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersEnum
        YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes : public Entity
{
    public:
        SummaryPrefixes();
        ~SummaryPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SummaryPrefixData; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData
        class PrefixAndNetmask; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask
        class Prefix; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix
        class Netmask; //type: Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask> > netmask;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix> > prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask> > prefix_and_netmask;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData> summary_prefix_data;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData : public Entity
{
    public:
        SummaryPrefixData();
        ~SummaryPrefixData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf not_advertise; //type: boolean
        YLeaf tag; //type: int32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixData


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask : public Entity
{
    public:
        PrefixAndNetmask();
        ~PrefixAndNetmask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf netmask; //type: string
        YLeaf not_advertise; //type: boolean
        YLeaf tag; //type: int32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::PrefixAndNetmask


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix : public Entity
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

        YLeaf prefix; //type: string
        YLeaf not_advertise; //type: boolean
        YLeaf tag; //type: int32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Prefix


class Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask : public Entity
{
    public:
        Netmask();
        ~Netmask();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf netmask; //type: string
        YLeaf not_advertise; //type: boolean
        YLeaf tag; //type: int32

}; // Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::Netmask


class Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates : public Entity
{
    public:
        OutgoingRouteUpdates();
        ~OutgoingRouteUpdates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class OutgoingRouteUpdate; //type: Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate> > outgoing_route_update;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates


class Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate : public Entity
{
    public:
        OutgoingRouteUpdate();
        ~OutgoingRouteUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: OspfDistListProtocolEnum
        YLeaf access_list_name; //type: string
        YLeaf as_xx; //type: uint32
        YLeaf as_yy; //type: uint32
        YLeaf ospf_process_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::OutgoingRouteUpdates::OutgoingRouteUpdate


class Ospf::Processes::Process::Vrfs::Vrf::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admin_distance; //type: uint32
        class OspfDistance; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance
        class IpDistances; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances> ip_distances;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance> ospf_distance;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Distance


class Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance : public Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intra_area; //type: uint32
        YLeaf inter_area; //type: uint32
        YLeaf external_routes; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::Distance::OspfDistance


class Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances : public Entity
{
    public:
        IpDistances();
        ~IpDistances();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IpDistance; //type: Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance> > ip_distance;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances


class Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance : public Entity
{
    public:
        IpDistance();
        ~IpDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf wildcard; //type: string
        YLeaf distance; //type: uint32
        YLeaf access_list_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::Distance::IpDistances::IpDistance


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses : public Entity
{
    public:
        AreaAddresses();
        ~AreaAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AreaAddress; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress
        class AreaAreaId; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress> > area_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId> > area_area_id;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress : public Entity
{
    public:
        AreaAddress();
        ~AreaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf route_policy_in; //type: string
        YLeaf default_cost; //type: uint32
        YLeaf route_policy_out; //type: string
        YLeaf stub; //type: boolean
        YLeaf mpls_traffic_eng; //type: empty
        YLeaf external_out; //type: boolean
        YLeaf summary_in; //type: boolean
        YLeaf segment_routing; //type: OspfSegmentRoutingEnum
        YLeaf running; //type: empty
        class VirtualLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes
        class ShamLinkScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes
        class AreaScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope
        class NameScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes
        class MultiAreaInterfaceScopes; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes
        class AreaRanges; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges
        class Nssa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaRanges> area_ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope> area_scope;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::MultiAreaInterfaceScopes> multi_area_interface_scopes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes> name_scopes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa> nssa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes> sham_link_scopes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes> virtual_link_scopes;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes : public Entity
{
    public:
        VirtualLinkScopes();
        ~VirtualLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VirtualLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope> > virtual_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope : public Entity
{
    public:
        VirtualLinkScope();
        ~VirtualLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf hello_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authen_type; //type: OspfAuthenticationEnum
        YLeaf keychain_authen_type; //type: OspfKeychainAuthEnum
        YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies : public Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_id; //type: uint32
        YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal : public Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinkScopes::VirtualLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes : public Entity
{
    public:
        ShamLinkScopes();
        ~ShamLinkScopes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ShamLinkScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope> > sham_link_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope : public Entity
{
    public:
        ShamLinkScope();
        ~ShamLinkScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf destination_address; //type: string
        YLeaf source; //type: string
        YLeaf cost; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        YLeaf retransmit_interval; //type: uint32
        YLeaf running; //type: empty
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal> dead_interval_minimal;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authen_type; //type: OspfAuthenticationEnum
        YLeaf keychain_authen_type; //type: OspfKeychainAuthEnum
        YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies : public Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_id; //type: uint32
        YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal : public Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinkScopes::ShamLinkScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope : public Entity
{
    public:
        AreaScope();
        ~AreaScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint32
        YLeaf prefix_suppression_primary; //type: boolean
        YLeaf mtu_ignore; //type: boolean
        YLeaf ldp_sync_igp_shortcuts; //type: boolean
        YLeaf ldp_auto_config; //type: empty
        YLeaf network_type; //type: OspfNetworkEnum
        YLeaf hello_interval; //type: uint32
        YLeaf loopback_stub_network; //type: boolean
        YLeaf prefix_suppression_secondary; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf passive; //type: boolean
        YLeaf transmit_delay; //type: uint32
        YLeaf packet_size; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf database_filter; //type: boolean
        YLeaf link_down_fast_detect; //type: boolean
        YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
        YLeaf retransmit_interval; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf flood_reduction; //type: boolean
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback> cost_fallback;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security> security;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list_name; //type: string
        YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf fast_detect_mode; //type: BfdEnableModeEnum

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authen_type; //type: OspfAuthenticationEnum
        YLeaf keychain_authen_type; //type: OspfKeychainAuthEnum
        YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies : public Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_id; //type: uint32
        YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal : public Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_enable; //type: OspfFastRerouteEnum
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topology_independent_lfa; //type: boolean
        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel; //type: OspfFrrRlfaTunnelEnum
        YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers : public Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
        YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback : public Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint32
        YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::CostFallback


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes : public Entity
{
    public:
        NameScopes();
        ~NameScopes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NameScope; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope> > name_scope;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope : public Entity
{
    public:
        NameScope();
        ~NameScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf cost; //type: uint32
        YLeaf prefix_suppression_primary; //type: boolean
        YLeaf mtu_ignore; //type: boolean
        YLeaf ldp_sync_igp_shortcuts; //type: boolean
        YLeaf ldp_auto_config; //type: empty
        YLeaf network_type; //type: OspfNetworkEnum
        YLeaf hello_interval; //type: uint32
        YLeaf loopback_stub_network; //type: boolean
        YLeaf prefix_suppression_secondary; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf passive; //type: boolean
        YLeaf transmit_delay; //type: uint32
        YLeaf packet_size; //type: uint32
        YLeaf ldp_sync; //type: boolean
        YLeaf database_filter; //type: boolean
        YLeaf link_down_fast_detect; //type: boolean
        YLeaf segment_routing_forwarding; //type: OspfSegmentRoutingForwardingEnum
        YLeaf retransmit_interval; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf flood_reduction; //type: boolean
        YLeaf running; //type: empty
        class PrefixSid; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid
        class PrefixSidStrict; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict
        class DistributeList; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList
        class Bfd; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd
        class Authentication; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication
        class Security; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security
        class Neighbors; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors
        class DeadIntervalMinimal; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal
        class FastReroute; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute
        class CostFallback; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback> cost_fallback;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal> dead_interval_minimal;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList> distribute_list; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid> prefix_sid; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict> prefix_sid_strict; // presence node
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security> security;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid : public Entity
{
    public:
        PrefixSid();
        ~PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_value; //type: uint32
        YLeaf explicit_null; //type: boolean
        YLeaf type; //type: OspfSidEnum
        YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSid


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict : public Entity
{
    public:
        PrefixSidStrict();
        ~PrefixSidStrict();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sid_value; //type: uint32
        YLeaf explicit_null; //type: boolean
        YLeaf type; //type: OspfSidEnum
        YLeaf n_flag_clear; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::PrefixSidStrict


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list_name; //type: string
        YLeaf route_policy_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DistributeList


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32
        YLeaf fast_detect_mode; //type: BfdEnableModeEnum

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Bfd


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        class Type; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type
        class MessageDigestKeies; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies> message_digest_keies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type> type;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authen_type; //type: OspfAuthenticationEnum
        YLeaf keychain_authen_type; //type: OspfKeychainAuthEnum
        YLeaf keychain_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::Type


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies : public Entity
{
    public:
        MessageDigestKeies();
        ~MessageDigestKeies();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MessageDigestKey; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey> > message_digest_key;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_id; //type: uint32
        YLeaf password; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Authentication::MessageDigestKeies::MessageDigestKey


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ttl; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl> ttl;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl : public Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: boolean
        YLeaf hop_count; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Security::Ttl


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string
        YLeaf priority; //type: uint32
        YLeaf poll_interval; //type: uint32
        YLeaf cost; //type: uint32
        YLeaf database_filter; //type: boolean

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::Neighbors::Neighbor


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal : public Entity
{
    public:
        DeadIntervalMinimal();
        ~DeadIntervalMinimal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32
        YLeaf multiplier; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::DeadIntervalMinimal


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_enable; //type: OspfFastRerouteEnum
        class PerLink; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink
        class PerPrefix; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink> per_link;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix> per_prefix;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink : public Entity
{
    public:
        PerLink();
        ~PerLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces> exclude_interfaces;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix : public Entity
{
    public:
        PerPrefix();
        ~PerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf topology_independent_lfa; //type: boolean
        YLeaf fast_reroute_use_candidate_only; //type: boolean
        class RemoteLfa; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa
        class Tiebreakers; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers
        class CandidateInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces
        class ExcludeInterfaces; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces> candidate_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces> exclude_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa> remote_lfa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers> tiebreakers;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel; //type: OspfFrrRlfaTunnelEnum
        YLeaf maximum_cost; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::RemoteLfa


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers : public Entity
{
    public:
        Tiebreakers();
        ~Tiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tiebreaker; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker> > tiebreaker;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker : public Entity
{
    public:
        Tiebreaker();
        ~Tiebreaker();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tiebreaker_type; //type: OspfFastRerouteTiebreakersIntfEnum
        YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::Tiebreakers::Tiebreaker


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces : public Entity
{
    public:
        CandidateInterfaces();
        ~CandidateInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CandidateInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface> > candidate_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface : public Entity
{
    public:
        CandidateInterface();
        ~CandidateInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces : public Entity
{
    public:
        ExcludeInterfaces();
        ~ExcludeInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExcludeInterface; //type: Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface> > exclude_interface;
        
}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface : public Entity
{
    public:
        ExcludeInterface();
        ~ExcludeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface


class Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback : public Entity
{
    public:
        CostFallback();
        ~CostFallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint32
        YLeaf threshold; //type: uint32

}; // Ospf::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::NameScopes::NameScope::CostFallback

class OspfFastRerouteTiebreakersEnum : public Enum
{
    public:
        static const Enum::YLeaf downstream;
        static const Enum::YLeaf line_card_disjoint;
        static const Enum::YLeaf lowest_metric;
        static const Enum::YLeaf node_protect;
        static const Enum::YLeaf primary_path;
        static const Enum::YLeaf secondary_path;
        static const Enum::YLeaf srlg_disjoint;

};

class OspfFastRerouteEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf per_link;
        static const Enum::YLeaf per_prefix;

};

class OspfRedistLsaEnum : public Enum
{
    public:
        static const Enum::YLeaf summary;
        static const Enum::YLeaf external;

};

class OspfIetfNsfEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class BfdEnableModeEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf strict;

};

class OspfFastReroutePriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};

class OspfCiscoNsfEnum : public Enum
{
    public:
        static const Enum::YLeaf always;
        static const Enum::YLeaf require_nsf_neighbors;

};

class OspfRedistProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf dagr;
        static const Enum::YLeaf subscriber;
        static const Enum::YLeaf application;
        static const Enum::YLeaf mobile;

};

class OspfSegmentRoutingEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf mpls;

};

class OspfUloopAvoidanceEnum : public Enum
{
    public:
        static const Enum::YLeaf protected_;
        static const Enum::YLeaf all;
        static const Enum::YLeaf segment_routing;

};

class OspfSegmentRoutingForwardingEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf mpls;

};

class OspfAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;

};

class OspfProcFastRerouteEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf per_link;
        static const Enum::YLeaf per_prefix;

};

class OspfProcFrrRlfaTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf mpls_ldp;

};

class OspfIetfNsfSupportEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class OspfLinkStateMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf type1;
        static const Enum::YLeaf type2;

};

class OspfAuthenticationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf plain;
        static const Enum::YLeaf md5;

};

class OspfLogAdjEnum : public Enum
{
    public:
        static const Enum::YLeaf brief;
        static const Enum::YLeaf detail;
        static const Enum::YLeaf suppress;

};

class OspfSubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;

};

class OspfDomainIdEnum : public Enum
{
    public:
        static const Enum::YLeaf type0005;
        static const Enum::YLeaf type0105;
        static const Enum::YLeaf type0205;
        static const Enum::YLeaf type8005;

};

class OspfEigrpRouteEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf external;

};

class OspfSidEnum : public Enum
{
    public:
        static const Enum::YLeaf index_;
        static const Enum::YLeaf absolute;

};

class NsrEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;
        static const Enum::YLeaf false_;

};

class OspfFastRerouteTiebreakersIntfEnum : public Enum
{
    public:
        static const Enum::YLeaf downstream;
        static const Enum::YLeaf line_card_disjoint;
        static const Enum::YLeaf lowest_metric;
        static const Enum::YLeaf node_protect;
        static const Enum::YLeaf primary_path;
        static const Enum::YLeaf secondary_path;
        static const Enum::YLeaf srlg_disjoint;

};

class OspfDistListProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf dagr;

};

class OspfRouteLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf type1;
        static const Enum::YLeaf type2;
        static const Enum::YLeaf type1_and2;

};

class OspfNetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf non_broadcast;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf point_to_multipoint;
        static const Enum::YLeaf non_broadcast_point_to_multipoint;

};

class OspfFrrRlfaTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf mpls_ldp;

};

class OspfShutdownEnum : public Enum
{
    public:
        static const Enum::YLeaf full;
        static const Enum::YLeaf hostmode;
        static const Enum::YLeaf onreload;

};

class OspfKeychainAuthEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf keychain;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_CFG_0_ */

