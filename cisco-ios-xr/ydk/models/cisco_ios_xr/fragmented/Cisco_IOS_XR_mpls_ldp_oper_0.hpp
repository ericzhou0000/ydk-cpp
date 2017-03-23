#ifndef _CISCO_IOS_XR_MPLS_LDP_OPER_0_
#define _CISCO_IOS_XR_MPLS_LDP_OPER_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {

class MplsLdp : public Entity
{
    public:
        MplsLdp();
        ~MplsLdp();

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



        class Global; //type: MplsLdp::Global
        class Nodes; //type: MplsLdp::Nodes

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global> global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Nodes> nodes;


}; // MplsLdp


class MplsLdp::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Standby; //type: MplsLdp::Global::Standby
        class Active; //type: MplsLdp::Global::Active

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Active> active;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby> standby;


}; // MplsLdp::Global


class MplsLdp::Global::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DefaultVrf; //type: MplsLdp::Global::Standby::DefaultVrf
        class ForwardingSummaryAll; //type: MplsLdp::Global::Standby::ForwardingSummaryAll
        class BindingsSummaryAll; //type: MplsLdp::Global::Standby::BindingsSummaryAll
        class AtoMdbTableEntries; //type: MplsLdp::Global::Standby::AtoMdbTableEntries
        class NsrSummaryAll; //type: MplsLdp::Global::Standby::NsrSummaryAll
        class Summary; //type: MplsLdp::Global::Standby::Summary
        class Vrfs; //type: MplsLdp::Global::Standby::Vrfs
        class DiscoverySummaryAll; //type: MplsLdp::Global::Standby::DiscoverySummaryAll

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::AtoMdbTableEntries> ato_mdb_table_entries;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf> default_vrf;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DiscoverySummaryAll> discovery_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::ForwardingSummaryAll> forwarding_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::NsrSummaryAll> nsr_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::Vrfs> vrfs;


}; // MplsLdp::Global::Standby


class MplsLdp::Global::Standby::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GracefulRestart; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart
        class Capabilities; //type: MplsLdp::Global::Standby::DefaultVrf::Capabilities
        class Summary; //type: MplsLdp::Global::Standby::DefaultVrf::Summary
        class Afs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs
        class NeighborBriefs; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs
        class BackoffParameters; //type: MplsLdp::Global::Standby::DefaultVrf::BackoffParameters
        class Backoffs; //type: MplsLdp::Global::Standby::DefaultVrf::Backoffs
        class Nsr; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr
        class Parameters; //type: MplsLdp::Global::Standby::DefaultVrf::Parameters
        class Issu; //type: MplsLdp::Global::Standby::DefaultVrf::Issu
        class NeighborCapabilities; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities
        class Neighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors
        class LdpId; //type: MplsLdp::Global::Standby::DefaultVrf::LdpId
        class Statistics; //type: MplsLdp::Global::Standby::DefaultVrf::Statistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::BackoffParameters> backoff_parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Backoffs> backoffs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Capabilities> capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart> graceful_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu> issu;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::LdpId> ldp_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs> neighbor_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities> neighbor_capabilities;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr> nsr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Parameters> parameters;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Summary> summary;


}; // MplsLdp::Global::Standby::DefaultVrf


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_forwarding_state_hold_timer_running; //type: boolean
        YLeaf forwarding_state_hold_timer_remaining_seconds; //type: uint32

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf
        class GracefulRestartableNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor> > graceful_restartable_neighbor;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor : public Entity
{
    public:
        GracefulRestartableNeighbor();
        ~GracefulRestartableNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf connect_count; //type: uint32
        YLeaf is_neighbor_up; //type: boolean
        YLeaf is_liveness_timer_running; //type: boolean
        YLeaf liveness_timer_remaining_seconds; //type: uint32
        YLeaf is_recovery_timer_running; //type: boolean
        YLeaf recovery_timer_remaining_seconds; //type: uint32
        YLeaf down_nbr_flap_count; //type: uint8
        YLeaf down_nbr_flags; //type: uint32
        YLeaf down_nbr_down_reason; //type: uint32

        class GrPeer; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer
        class DownNbrInterface; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface
        class DownNbrAddress; //type: MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress> > down_nbr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface> > down_nbr_interface;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer> gr_peer;


}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer : public Entity
{
    public:
        GrPeer();
        ~GrPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface : public Entity
{
    public:
        DownNbrInterface();
        ~DownNbrInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfIdEnum
        YLeaf interface_handle; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface


class MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress : public Entity
{
    public:
        DownNbrAddress();
        ~DownNbrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress


class MplsLdp::Global::Standby::DefaultVrf::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Capability; //type: MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability> > capability;


}; // MplsLdp::Global::Standby::DefaultVrf::Capabilities


class MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf capability_type; //type: int32
        YLeaf capability_owner; //type: string

        class Capability_; //type: MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_> capability;


}; // MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability


class MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_ : public Entity
{
    public:
        Capability_();
        ~Capability_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_


class MplsLdp::Global::Standby::DefaultVrf::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf
        class Common; //type: MplsLdp::Global::Standby::DefaultVrf::Summary::Common

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Summary::Common> common;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Summary


class MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Summary::Common : public Entity
{
    public:
        Common();
        ~Common();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_families; //type: LdpAfEnum
        YLeaf number_of_ipv4af; //type: uint32
        YLeaf number_of_ipv6af; //type: uint32
        YLeaf number_of_neighbors; //type: uint32
        YLeaf number_of_nsr_synced_neighbors; //type: uint32
        YLeaf number_of_graceful_restart_neighbors; //type: uint32
        YLeaf number_of_downstream_on_demand_neighbors; //type: uint32
        YLeaf number_of_ipv4_hello_adj; //type: uint32
        YLeaf number_of_ipv6_hello_adj; //type: uint32
        YLeaf number_of_ipv4_routes; //type: uint32
        YLeaf number_of_ipv6_routes; //type: uint32
        YLeaf number_of_ipv4_local_addresses; //type: uint32
        YLeaf number_of_ipv6_local_addresses; //type: uint32
        YLeaf number_of_ldp_interfaces; //type: uint32
        YLeaf number_of_ipv4ldp_interfaces; //type: uint32
        YLeaf number_of_ipv6ldp_interfaces; //type: uint32
        YLeaf number_of_bindings_ipv4; //type: uint32
        YLeaf number_of_bindings_ipv6; //type: uint32
        YLeaf number_of_local_bindings_ipv4; //type: uint32
        YLeaf number_of_local_bindings_ipv6; //type: uint32
        YLeaf number_of_remote_bindings_ipv4; //type: uint32
        YLeaf number_of_remote_bindings_ipv6; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Summary::Common


class MplsLdp::Global::Standby::DefaultVrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Af; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af> > af;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af : public Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MplsLdpOperAfNameEnum

        class InterfaceSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary
        class Bindings; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings
        class Igp; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp
        class BindingsSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary
        class Interfaces; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces
        class Discovery; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery
        class BindingsSummaryAll; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll
        class Forwardings; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings
        class BindingsAdvertiseSpec; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec
        class ForwardingSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings> bindings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec> bindings_advertise_spec;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary> bindings_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll> bindings_summary_all;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery> discovery;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary> forwarding_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings> forwardings;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp> igp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary> interface_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces> interfaces;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary : public Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf known_ip_interface_count; //type: uint32
        YLeaf known_ip_interface_ldp_enabled; //type: uint32
        YLeaf ldp_configured_attached_interface; //type: uint32
        YLeaf ldp_configured_te_interface; //type: uint32
        YLeaf forward_references; //type: uint32
        YLeaf auto_config_disabled; //type: uint32
        YLeaf auto_config; //type: uint32
        YLeaf auto_config_forward_reference_interfaces; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings : public Entity
{
    public:
        Bindings();
        ~Bindings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Binding; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding> > binding;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint8
        YLeaf local_label; //type: uint32
        YLeaf le_local_binding_revision; //type: uint32
        YLeaf le_local_label_state; //type: LocalLabelStateEnum
        YLeaf is_no_route; //type: boolean
        YLeaf label_oor; //type: boolean
        YLeaf advertise_prefix_acl; //type: string
        YLeaf advertise_tsr_acl; //type: string
        YLeaf config_enforced_local_label_value; //type: boolean
        YLeaf is_elc; //type: boolean

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf
        class PrefixXr; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr
        class RemoteBinding; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding
        class PeersAdvertisedTo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo
        class PeersAcked; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked> > peers_acked;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo> > peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr> prefix_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding> > remote_binding;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding : public Entity
{
    public:
        RemoteBinding();
        ~RemoteBinding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf remote_label; //type: uint32
        YLeaf is_stale; //type: boolean
        YLeaf is_elc; //type: boolean

        class AssigningPeerLdpIdent; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent> assigning_peer_ldp_ident;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent : public Entity
{
    public:
        AssigningPeerLdpIdent();
        ~AssigningPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo : public Entity
{
    public:
        PeersAdvertisedTo();
        ~PeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked : public Entity
{
    public:
        PeersAcked();
        ~PeersAcked();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Syncs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs
        class SyncDelayRestart; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart> sync_delay_restart;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs> syncs;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs : public Entity
{
    public:
        Syncs();
        ~Syncs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Sync; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync> > sync;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf igp_sync_state; //type: LdpIgpSyncStateEnum
        YLeaf igp_sync_delay; //type: uint32
        YLeaf is_delay_timer_running; //type: boolean
        YLeaf delay_timer_remaining; //type: uint32
        YLeaf igp_sync_down_reason; //type: LdpIgpSyncDownReasonEnum

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf
        class Peers; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers
        class GrOnlyPeer; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer> > gr_only_peer;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers> > peers;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_id; //type: string
        YLeaf is_gr_enabled; //type: boolean



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer : public Entity
{
    public:
        GrOnlyPeer();
        ~GrOnlyPeer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_id; //type: string
        YLeaf is_chkpt_created; //type: boolean



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart : public Entity
{
    public:
        SyncDelayRestart();
        ~SyncDelayRestart();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf configured; //type: boolean
        YLeaf delay_secs; //type: uint32
        YLeaf timer_running; //type: boolean
        YLeaf remaining_secs; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary : public Entity
{
    public:
        BindingsSummary();
        ~BindingsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf
        class BindAf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface> > interface;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface : public Entity
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
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf ldp_enabled; //type: boolean
        YLeaf is_im_stale; //type: boolean
        YLeaf ldp_config_mode; //type: boolean
        YLeaf ldp_autoconfig_disable; //type: boolean

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf
        class TeMeshGrp; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp
        class AutoConfig; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig> > auto_config;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp> > te_mesh_grp;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp : public Entity
{
    public:
        TeMeshGrp();
        ~TeMeshGrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ldp_te_mesh_group_all_cfgd; //type: boolean
        YLeaf ldp_mesh_group_enabled; //type: boolean
        YLeaf te_mesh_group_id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig : public Entity
{
    public:
        AutoConfig();
        ~AutoConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tuple; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHellos; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos
        class Summary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary
        class TargetedHellos; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos
        class Brief; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief
        class Stats; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos> link_hellos;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats> stats;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos> targeted_hellos;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos : public Entity
{
    public:
        LinkHellos();
        ~LinkHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHello; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello> > link_hello;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello : public Entity
{
    public:
        LinkHello();
        ~LinkHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hello; //type: uint32
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf quick_start_disabled; //type: boolean

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf
        class HelloInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation
        class DiscoveryLinkAf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf> > discovery_link_af;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf is_no_route; //type: boolean
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf is_targeted; //type: boolean
        YLeaf session_up; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_bringup_failure_reason; //type: string

        class NeighborSrcAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress
        class NeighborTransportAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress
        class Target; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target
        class LastSessionDownInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo> > last_session_down_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress> neighbor_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress> neighbor_transport_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target> target;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress : public Entity
{
    public:
        NeighborSrcAddress();
        ~NeighborSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress : public Entity
{
    public:
        NeighborTransportAddress();
        ~NeighborTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf : public Entity
{
    public:
        DiscoveryLinkAf();
        ~DiscoveryLinkAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32

        class LocalSrcAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress
        class LocalTransportAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress> local_src_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress> local_transport_address;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress : public Entity
{
    public:
        LocalSrcAddress();
        ~LocalSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress : public Entity
{
    public:
        LocalTransportAddress();
        ~LocalTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_ldp_id; //type: string
        YLeaf num_of_ldp_interfaces; //type: uint32
        YLeaf num_of_active_ldp_interfaces; //type: uint32
        YLeaf num_of_lnk_disc_xmit; //type: uint32
        YLeaf num_of_tgt_disc_xmit; //type: uint32
        YLeaf num_of_lnk_disc_recv; //type: uint32
        YLeaf num_of_tgt_disc_recv; //type: uint32
        YLeaf num_of_disc_with_bad_addr_recv; //type: uint32
        YLeaf num_of_disc_with_bad_hello_pdu; //type: uint32
        YLeaf num_of_disc_with_bad_xport_addr; //type: uint32
        YLeaf num_of_disc_with_same_router_id; //type: uint32
        YLeaf num_of_disc_with_wrong_router_id; //type: uint32

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos : public Entity
{
    public:
        TargetedHellos();
        ~TargetedHellos();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHello; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello> > targeted_hello;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf state; //type: DhcbStateEnum
        YLeaf adjacency_ldp_identifier; //type: string
        YLeaf interval; //type: uint32
        YLeaf next_hello; //type: uint32
        YLeaf hold_time; //type: uint32
        YLeaf local_hold_time; //type: uint32
        YLeaf neighbor_hold_time; //type: uint32
        YLeaf disc_expiry; //type: uint32
        YLeaf quick_start_disabled; //type: boolean
        YLeaf established_time; //type: uint64
        YLeaf established_age; //type: uint64
        YLeaf session_up; //type: boolean
        YLeaf session_bringup_failure_reason; //type: string

        class DhcbLocalAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress
        class DhcbTargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress
        class LastSessionDownInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress> dhcb_local_address;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo> > last_session_down_info;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress : public Entity
{
    public:
        DhcbLocalAddress();
        ~DhcbLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo : public Entity
{
    public:
        LastSessionDownInfo();
        ~LastSessionDownInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf last_session_down_reason; //type: string
        YLeaf last_session_down_time; //type: uint64
        YLeaf last_session_up_time; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBriefs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs
        class TargetedHelloBriefs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs> link_hello_briefs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs> targeted_hello_briefs;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs : public Entity
{
    public:
        LinkHelloBriefs();
        ~LinkHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class LinkHelloBrief; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief> > link_hello_brief;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief : public Entity
{
    public:
        LinkHelloBrief();
        ~LinkHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf address_family; //type: LdpAfEnum
        YLeaf address_family_set; //type: LdpAfEnum
        YLeaf interface; //type: string
        YLeaf interface_name_xr; //type: string

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf
        class HelloInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs : public Entity
{
    public:
        TargetedHelloBriefs();
        ~TargetedHelloBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TargetedHelloBrief; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief> > targeted_hello_brief;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief : public Entity
{
    public:
        TargetedHelloBrief();
        ~TargetedHelloBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_address; //type: string
        YLeaf target_address; //type: string
        YLeaf address_family; //type: LdpAfEnum

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf
        class DhcbTargetAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress
        class HelloInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress> dhcb_target_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation> > hello_information;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress : public Entity
{
    public:
        DhcbTargetAddress();
        ~DhcbTargetAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation : public Entity
{
    public:
        HelloInformation();
        ~HelloInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor_ldp_identifier; //type: string
        YLeaf hold_time; //type: uint32
        YLeaf session_up; //type: boolean



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats : public Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stat; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat> > stat;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat : public Entity
{
    public:
        Stat();
        ~Stat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf adjacency_group_up_time; //type: uint32
        YLeaf tcp_open_count; //type: uint32
        YLeaf tcp_arb_chg_count; //type: uint32
        YLeaf tcp_role; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll : public Entity
{
    public:
        BindingsSummaryAll();
        ~BindingsSummaryAll();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf binding_no_route; //type: uint32
        YLeaf binding_local_no_route; //type: uint32
        YLeaf binding_local_null; //type: uint32
        YLeaf binding_local_implicit_null; //type: uint32
        YLeaf binding_local_explicit_null; //type: uint32
        YLeaf binding_local_non_null; //type: uint32
        YLeaf binding_local_oor; //type: uint32
        YLeaf lowest_allocated_label; //type: uint32
        YLeaf highest_allocated_label; //type: uint32

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf
        class BindAf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf> > bind_af;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf : public Entity
{
    public:
        BindAf();
        ~BindAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf last_lib_update; //type: uint32
        YLeaf lib_minimum_revision_sent_all; //type: uint32
        YLeaf binding_total; //type: uint32
        YLeaf binding_local; //type: uint32
        YLeaf binding_remote; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings : public Entity
{
    public:
        Forwardings();
        ~Forwardings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Forwarding; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding> > forwarding;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf table_id; //type: uint32
        YLeaf prefix_length; //type: uint8

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf
        class PrefixXr; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr
        class Route; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route
        class Paths; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths> > paths;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr> prefix_xr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route> route;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr : public Entity
{
    public:
        PrefixXr();
        ~PrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route : public Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routing; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing
        class Mpls; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing> routing;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf version; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf source; //type: uint16
        YLeaf type; //type: uint16
        YLeaf flags; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf is_local_vrf_leaked; //type: boolean
        YLeaf routing_update_count; //type: uint32
        YLeaf routing_update_timestamp; //type: uint64
        YLeaf routing_update_age; //type: uint64
        YLeaf sr_local_label; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_label; //type: uint32
        YLeaf forwarding_update_count; //type: uint32
        YLeaf forwarding_update_timestamp; //type: uint64
        YLeaf forwarding_update_age; //type: uint64



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Routing; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing
        class Mpls; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing> routing;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing : public Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string
        YLeaf interface_name; //type: string
        YLeaf nh_is_overriden; //type: boolean
        YLeaf nexthop_id; //type: uint32
        YLeaf next_hop_table_id; //type: uint32
        YLeaf flags; //type: uint32
        YLeaf load_metric; //type: uint32
        YLeaf path_id; //type: uint8
        YLeaf bkup_path_id; //type: uint8
        YLeaf path_flags; //type: LdpRoutePathFlagsEnum

        class NextHop; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop
        class RemoteLfa; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa> remote_lfa;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean
        YLeaf needs_tldp; //type: boolean
        YLeaf has_q_node; //type: boolean

        class RemotePNodeId; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId
        class RemoteQNodeId; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId> remote_p_node_id;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId> remote_q_node_id;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId : public Entity
{
    public:
        RemotePNodeId();
        ~RemotePNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId : public Entity
{
    public:
        RemoteQNodeId();
        ~RemoteQNodeId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MplsOutgoingInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo
        class RemoteLfa; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo> mpls_outgoing_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa> remote_lfa;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean

        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa : public Entity
{
    public:
        RemoteLfa();
        ~RemoteLfa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_remote_lfa_bkup; //type: boolean

        class MplsOutgoingInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo> mpls_outgoing_info;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo : public Entity
{
    public:
        MplsOutgoingInfo();
        ~MplsOutgoingInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Stack; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack> > stack;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack : public Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf out_label; //type: uint32
        YLeaf out_label_rsn; //type: LdpFwdUnlblRsnEnum
        YLeaf out_label_type; //type: LabelValueEnum
        YLeaf out_label_owner; //type: LdpRoutePathLblOwnerEnum
        YLeaf is_from_graceful_restartable_neighbor; //type: boolean
        YLeaf is_stale; //type: boolean

        class NexthopPeerLdpIdent; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent> nexthop_peer_ldp_ident;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent : public Entity
{
    public:
        NexthopPeerLdpIdent();
        ~NexthopPeerLdpIdent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint16
        YLeaf ldp_id; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec : public Entity
{
    public:
        BindingsAdvertiseSpec();
        ~BindingsAdvertiseSpec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AllocationAcl; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl
        class AdvtAcl; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl> > advt_acl;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl> allocation_acl;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl : public Entity
{
    public:
        AllocationAcl();
        ~AllocationAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf has_acl; //type: boolean
        YLeaf prefix_acl; //type: string
        YLeaf is_host_route_only; //type: boolean



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl : public Entity
{
    public:
        AdvtAcl();
        ~AdvtAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_acl; //type: string
        YLeaf peer_acl; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary : public Entity
{
    public:
        ForwardingSummary();
        ~ForwardingSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_lsd_bound; //type: boolean
        YLeaf fsht; //type: uint16
        YLeaf intfs; //type: uint16
        YLeaf lbls; //type: uint16

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf
        class Rws; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws> rws;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws : public Entity
{
    public:
        Rws();
        ~Rws();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pfxs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs
        class Nhs; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs> nhs;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs> pfxs;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs : public Entity
{
    public:
        Pfxs();
        ~Pfxs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_pfxs; //type: uint16
        YLeaf ecmp_pfxs; //type: uint16
        YLeaf protected_pfxs; //type: uint16

        class LabeledPfxsAggr; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr
        class LabeledPfxsPrimary; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary
        class LabeledPfxsBackup; //type: MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr> labeled_pfxs_aggr;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup> labeled_pfxs_backup;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary> labeled_pfxs_primary;


}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr : public Entity
{
    public:
        LabeledPfxsAggr();
        ~LabeledPfxsAggr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary : public Entity
{
    public:
        LabeledPfxsPrimary();
        ~LabeledPfxsPrimary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup : public Entity
{
    public:
        LabeledPfxsBackup();
        ~LabeledPfxsBackup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf labeled_pfxs; //type: uint16
        YLeaf labeled_pfxs_partial; //type: uint16
        YLeaf unlabeled_pfxs; //type: uint16



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup


class MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total_paths; //type: uint32
        YLeaf protected_paths; //type: uint32
        YLeaf backup_paths; //type: uint32
        YLeaf remote_backup_paths; //type: uint32
        YLeaf labeled_paths; //type: uint32
        YLeaf labeled_backup_paths; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs : public Entity
{
    public:
        NeighborBriefs();
        ~NeighborBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborBrief; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief> > neighbor_brief;


}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief : public Entity
{
    public:
        NeighborBrief();
        ~NeighborBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf is_graceful_restartable; //type: boolean
        YLeaf nsr_state; //type: ShowNsrStateEnum
        YLeaf up_time_seconds; //type: uint32

        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf
        class NbrBrAfInfo; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo> > nbr_br_af_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf


class MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo : public Entity
{
    public:
        NbrBrAfInfo();
        ~NbrBrAfInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf num_of_nbr_discovery; //type: uint32
        YLeaf num_of_nbr_addresses; //type: uint32
        YLeaf num_of_nbr_lbl; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo


class MplsLdp::Global::Standby::DefaultVrf::BackoffParameters : public Entity
{
    public:
        BackoffParameters();
        ~BackoffParameters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf initial_seconds; //type: uint32
        YLeaf maximum_seconds; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::BackoffParameters


class MplsLdp::Global::Standby::DefaultVrf::Backoffs : public Entity
{
    public:
        Backoffs();
        ~Backoffs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Backoff; //type: MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff> > backoff;


}; // MplsLdp::Global::Standby::DefaultVrf::Backoffs


class MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff : public Entity
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


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf backoff_seconds; //type: uint32
        YLeaf waiting_seconds; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff


class MplsLdp::Global::Standby::DefaultVrf::Nsr : public Entity
{
    public:
        Nsr();
        ~Nsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NsrPending; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending
        class HaSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary> ha_summary;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending> nsr_pending;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending : public Entity
{
    public:
        NsrPending();
        ~NsrPending();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaGlobal; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InitSync; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync> init_sync;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Parameters : public Entity
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


        YLeaf role_is_active; //type: boolean
        YLeaf global_md5_password_enabled; //type: boolean
        YLeaf protocol_version; //type: uint32
        YLeaf router_id; //type: string
        YLeaf keepalive_interval; //type: uint32
        YLeaf hello_hold_time; //type: uint32
        YLeaf hello_interval; //type: uint32
        YLeaf targeted_hello_hold_time; //type: uint32
        YLeaf targeted_hello_interval; //type: uint32
        YLeaf session_hold_time; //type: uint32
        YLeaf housekeeping_timer_interval; //type: uint32
        YLeaf le_no_route_timeout; //type: uint32
        YLeaf ldp_recovery_timeout; //type: uint32
        YLeaf af_binding_withdraw_delay; //type: uint32
        YLeaf max_intf_attached; //type: uint32
        YLeaf max_intf_te; //type: uint32
        YLeaf max_peer; //type: uint32
        YLeaf ldp_out_of_mem_state; //type: uint32
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf igp_sync_delay_time_for_interface; //type: uint32
        YLeaf igp_sync_delay_time_on_restart; //type: uint32
        YLeaf global_discovery_quick_start_disabled; //type: boolean
        YLeaf discovery_quick_start_disabled_on_interfaces; //type: boolean

        class GracefulRestartInformation; //type: MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation
        class AddressFamilyParameter; //type: MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter> > address_family_parameter;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation> graceful_restart_information;


}; // MplsLdp::Global::Standby::DefaultVrf::Parameters


class MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation : public Entity
{
    public:
        GracefulRestartInformation();
        ~GracefulRestartInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_graceful_restart_configured; //type: boolean
        YLeaf graceful_restart_reconnect_timeout; //type: uint32
        YLeaf graceful_restart_forwarding_state_hold_time; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation


class MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter : public Entity
{
    public:
        AddressFamilyParameter();
        ~AddressFamilyParameter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: LdpAfEnum
        YLeaf null_label; //type: string
        YLeaf label_imp_null_override_acl; //type: string
        YLeaf is_accepting_targeted_hellos; //type: boolean
        YLeaf targeted_hello_acl; //type: string

        class DiscoveryTransportAddress; //type: MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress> discovery_transport_address;


}; // MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter


class MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress : public Entity
{
    public:
        DiscoveryTransportAddress();
        ~DiscoveryTransportAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: LdpAfIdEnum
        YLeaf dummy; //type: uint8
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress


class MplsLdp::Global::Standby::DefaultVrf::Issu : public Entity
{
    public:
        Issu();
        ~Issu();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaSummary; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary
        class HaStatistics; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics> ha_statistics;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary> ha_summary;


}; // MplsLdp::Global::Standby::DefaultVrf::Issu


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary : public Entity
{
    public:
        HaSummary();
        ~HaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf
        class Sessions; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf> vrf;


}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf id; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf total; //type: uint32
        YLeaf nsr_eligible; //type: uint32
        YLeaf nsr_state_none; //type: uint32
        YLeaf nsr_state_wait; //type: uint32
        YLeaf nsr_state_ready; //type: uint32
        YLeaf nsr_state_prepare; //type: uint32
        YLeaf nsr_state_app_wait; //type: uint32
        YLeaf nsr_state_operational; //type: uint32
        YLeaf nsr_state_tcp_phase1; //type: uint32
        YLeaf nsr_state_tcp_phase2; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics : public Entity
{
    public:
        HaStatistics();
        ~HaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaGlobal; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal
        class HaNeighbors; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal> ha_global;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors> ha_neighbors;


}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal : public Entity
{
    public:
        HaGlobal();
        ~HaGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InitSync; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync> init_sync;


}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync : public Entity
{
    public:
        InitSync();
        ~InitSync();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nsr_cfged; //type: boolean
        YLeaf nsr_synced; //type: boolean
        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_peers; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_pfx; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_lcl_addr_wd; //type: uint32
        YLeaf num_lbl_adv; //type: uint32
        YLeaf ipc_msg_tx_cnt; //type: uint32
        YLeaf ipc_msg_tx_bytes; //type: uint32
        YLeaf ipc_msg_rx_cnt; //type: uint32
        YLeaf ipc_msg_rx_bytes; //type: uint32
        YLeaf ipc_max_tx_batch_bytes; //type: uint32
        YLeaf ipc_max_rx_batch_bytes; //type: uint32
        YLeaf ipc_tx_fail_cnt; //type: uint32
        YLeaf total_ipc_tx_fail_cnt; //type: uint32
        YLeaf ipc_restart_cnt; //type: uint32
        YLeaf ipc_default_mtu; //type: uint32
        YLeaf ipc_exceeded_mtu_msg_cnt; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors : public Entity
{
    public:
        HaNeighbors();
        ~HaNeighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HaNeighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor> > ha_neighbor;


}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor : public Entity
{
    public:
        HaNeighbor();
        ~HaNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32
        YLeaf lsr_id_xr; //type: uint32
        YLeaf lbl_spc_id; //type: uint16
        YLeaf nsr_sync_state; //type: int32
        YLeaf num_msg; //type: uint32

        class InitSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo
        class SteadyStateSyncInfo; //type: MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo

        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo> init_sync_info;
        std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo> steady_state_sync_info;


}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo : public Entity
{
    public:
        InitSyncInfo();
        ~InitSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf init_sync_start; //type: uint32
        YLeaf init_sync_end; //type: uint32
        YLeaf num_addr; //type: uint32
        YLeaf num_duplicate_addr; //type: uint32
        YLeaf num_rx_bytes; //type: uint32
        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf num_lbl; //type: uint32
        YLeaf num_app_bytes; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo : public Entity
{
    public:
        SteadyStateSyncInfo();
        ~SteadyStateSyncInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf num_cap_sent; //type: uint32
        YLeaf num_cap_rcvd; //type: uint32
        YLeaf rem_lbl_wd; //type: uint32
        YLeaf rem_lbl_rq; //type: uint32
        YLeaf num_stdby_adj_join; //type: uint32
        YLeaf num_stdby_adj_leave; //type: uint32



}; // MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities : public Entity
{
    public:
        NeighborCapabilities();
        ~NeighborCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborCapability; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability> > neighbor_capability;


}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability : public Entity
{
    public:
        NeighborCapability();
        ~NeighborCapability();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lsr_id; //type: string
        YLeaf label_space_id; //type: uint32

        class Sent; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent
        class Received; //type: MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received> > received;
        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent> > sent;


}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent : public Entity
{
    public:
        Sent();
        ~Sent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent


class MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received : public Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint16
        YLeaf description; //type: string
        YLeaf capability_data_length; //type: uint16
        YLeaf capability_data; //type: string



}; // MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received


class MplsLdp::Global::Standby::DefaultVrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor> > neighbor;


}; // MplsLdp::Global::Standby::DefaultVrf::Neighbors

class MgmtLdpNbrBgpAdvtStateEnum : public Enum
{
    public:
        static const Enum::YLeaf not_applicable;
        static const Enum::YLeaf permit;
        static const Enum::YLeaf deny;

};

class MgmtLdpNsrPeerSyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_none;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_wait;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_ready;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_prep;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_app_wait;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_oper;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_tcp_phase1;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_st_tcp_phase2;

};

class LdpRoutePathFlagsEnum : public Enum
{
    public:
        static const Enum::YLeaf ip_path_no_flag;
        static const Enum::YLeaf ip_path_protected;
        static const Enum::YLeaf ip_path_backup;
        static const Enum::YLeaf ip_path_backup_remote;
        static const Enum::YLeaf ip_path_bgp_backup;

};

class LdpAfIdEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp_af_id_none;
        static const Enum::YLeaf ldp_af_id_ipv4;
        static const Enum::YLeaf ldp_af_id_ipv6;

};

class LdpIgpSyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf isync_ready;
        static const Enum::YLeaf isync_not_ready;
        static const Enum::YLeaf isync_deferred;

};

class LdpIgpSyncDownReasonEnum : public Enum
{
    public:
        static const Enum::YLeaf igp_sync_down_reason_not_applicable;
        static const Enum::YLeaf no_hello_adjacency;
        static const Enum::YLeaf no_peer_session;
        static const Enum::YLeaf initial_update_to_peer_not_done;
        static const Enum::YLeaf initial_update_from_peer_not_received;
        static const Enum::YLeaf internal_reason;

};

class LocalLabelStateEnum : public Enum
{
    public:
        static const Enum::YLeaf local_label_state_none;
        static const Enum::YLeaf local_label_state_assigned;
        static const Enum::YLeaf local_label_state_withdrawn;

};

class MgmtLdpNsrPeerLdpSyncNackRsnEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_none;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_tbl_id_mismatch;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_pp_exists;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_missing_elem;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_no_p_end_sock;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_p_end_sock_not_synced;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_adj_add;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_dhcb_add;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_enomem;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_tp_create;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_pp_create;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_addr_bind;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_rx_bad_pie;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_rx_notif;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_rx_unexp_open;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_unexp_peer_down;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_app_not_found;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_app_invalid;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_adj_grp_not_found;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_invalid_elem;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_app_data_invalid;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_invalid_per_idx;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_pfx_not_found;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_bm_size_invalid;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_adv_bm_clear;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_tcp_struct_create;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_no_ctx;

};

class MgmtLdpNsrPeerSyncErrEnum : public Enum
{
    public:
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_none;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_ldp_sync_nack;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_sync_prep;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_tcp_peer;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_tcp_gbl;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_ldp_peer;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_ldp_gbl;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_app_fail;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_sync_tcp_phase1;
        static const Enum::YLeaf mgmt_ldp_nsr_peer_sync_err_sync_tcp_phase2;

};

class L2VpnLdpPwAgiEnum : public Enum
{
    public:
        static const Enum::YLeaf rd;

};

class LabelValueEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls_label;
        static const Enum::YLeaf un_labelled;
        static const Enum::YLeaf unknown;

};

class LdpFwdUnlblRsnEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp_fwd_labelled;
        static const Enum::YLeaf ldp_fwd_un_labelled_vrf_down;
        static const Enum::YLeaf ldp_fwd_un_labelled_no_nh;
        static const Enum::YLeaf ldp_fwd_un_labelled_recursive_path;
        static const Enum::YLeaf ldp_fwd_un_labelled_intf_not_ldp;
        static const Enum::YLeaf ldp_fwd_un_labelled_no_rmt;
        static const Enum::YLeaf ldp_fwd_un_labelled_no_ldp_adj;
        static const Enum::YLeaf ldp_fwd_un_labelled_no_session;
        static const Enum::YLeaf ldp_fwd_un_labelled_unknown;

};

class LdpAdjUnionDiscrimEnum : public Enum
{
    public:
        static const Enum::YLeaf link_hello;
        static const Enum::YLeaf targeted_hello;

};

class LdpRoutePathLblOwnerEnum : public Enum
{
    public:
        static const Enum::YLeaf ip_path_lbl_owner_none;
        static const Enum::YLeaf ip_path_lbl_owner_ldp;
        static const Enum::YLeaf ip_path_lbl_owner_bgp;

};

class L2VpnLdpPwFecEnum : public Enum
{
    public:
        static const Enum::YLeaf fec128;
        static const Enum::YLeaf fec129;
        static const Enum::YLeaf fec130;
        static const Enum::YLeaf invalid;

};

class MplsLdpOperAfNameEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class LdpAfEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp_show_af_none;
        static const Enum::YLeaf ldp_show_af_ipv4;
        static const Enum::YLeaf ldp_show_af_ipv6;
        static const Enum::YLeaf ldp_show_af_ipv4_ipv6;

};

class L2VpnLdpPwAiiEnum : public Enum
{
    public:
        static const Enum::YLeaf local_id;
        static const Enum::YLeaf type2;

};

class DhcbStateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf dhcb_active;
        static const Enum::YLeaf dhcb_passive;
        static const Enum::YLeaf dhcb_active_passive;

};

class ShowNsrStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nsr_ready;
        static const Enum::YLeaf nsr_not_ready;
        static const Enum::YLeaf nsr_na;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_LDP_OPER_0_ */
