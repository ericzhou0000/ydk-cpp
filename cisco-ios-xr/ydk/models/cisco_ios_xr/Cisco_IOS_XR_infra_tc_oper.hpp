#ifndef _CISCO_IOS_XR_INFRA_TC_OPER_
#define _CISCO_IOS_XR_INFRA_TC_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_tc_oper {

class TrafficCollector : public Entity
{
    public:
        TrafficCollector();
        ~TrafficCollector();

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

        class ExternalInterfaces; //type: TrafficCollector::ExternalInterfaces
        class Summary; //type: TrafficCollector::Summary
        class VrfTable; //type: TrafficCollector::VrfTable
        class Afs; //type: TrafficCollector::Afs

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs> afs;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::ExternalInterfaces> external_interfaces;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable> vrf_table;
        
}; // TrafficCollector


class TrafficCollector::ExternalInterfaces : public Entity
{
    public:
        ExternalInterfaces();
        ~ExternalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExternalInterface; //type: TrafficCollector::ExternalInterfaces::ExternalInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::ExternalInterfaces::ExternalInterface> > external_interface;
        
}; // TrafficCollector::ExternalInterfaces


class TrafficCollector::ExternalInterfaces::ExternalInterface : public Entity
{
    public:
        ExternalInterface();
        ~ExternalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_handle; //type: uint32
        YLeaf vrfid; //type: uint32
        YLeaf is_interface_enabled; //type: boolean

}; // TrafficCollector::ExternalInterfaces::ExternalInterface


class TrafficCollector::Summary : public Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf collection_interval; //type: uint8
        YLeaf collection_timer_is_running; //type: boolean
        YLeaf timeout_interval; //type: uint16
        YLeaf timeout_timer_is_running; //type: boolean
        YLeaf history_size; //type: uint8
        class DatabaseStatisticsExternalInterface; //type: TrafficCollector::Summary::DatabaseStatisticsExternalInterface
        class VrfStatistic; //type: TrafficCollector::Summary::VrfStatistic
        class CollectionMessageStatistic; //type: TrafficCollector::Summary::CollectionMessageStatistic
        class CheckpointMessageStatistic; //type: TrafficCollector::Summary::CheckpointMessageStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::CheckpointMessageStatistic> > checkpoint_message_statistic;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::CollectionMessageStatistic> > collection_message_statistic;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::DatabaseStatisticsExternalInterface> database_statistics_external_interface;
        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::VrfStatistic> > vrf_statistic;
        
}; // TrafficCollector::Summary


class TrafficCollector::Summary::DatabaseStatisticsExternalInterface : public Entity
{
    public:
        DatabaseStatisticsExternalInterface();
        ~DatabaseStatisticsExternalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_entries; //type: uint32
        YLeaf number_of_stale_entries; //type: uint32
        YLeaf number_of_add_o_perations; //type: uint64
        YLeaf number_of_delete_o_perations; //type: uint64

}; // TrafficCollector::Summary::DatabaseStatisticsExternalInterface


class TrafficCollector::Summary::VrfStatistic : public Entity
{
    public:
        VrfStatistic();
        ~VrfStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class DatabaseStatisticsIpv4; //type: TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4
        class DatabaseStatisticsTunnel; //type: TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4> database_statistics_ipv4;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel> database_statistics_tunnel;
        
}; // TrafficCollector::Summary::VrfStatistic


class TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4 : public Entity
{
    public:
        DatabaseStatisticsIpv4();
        ~DatabaseStatisticsIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_entries; //type: uint32
        YLeaf number_of_stale_entries; //type: uint32
        YLeaf number_of_add_o_perations; //type: uint64
        YLeaf number_of_delete_o_perations; //type: uint64

}; // TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsIpv4


class TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel : public Entity
{
    public:
        DatabaseStatisticsTunnel();
        ~DatabaseStatisticsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number_of_entries; //type: uint32
        YLeaf number_of_stale_entries; //type: uint32
        YLeaf number_of_add_o_perations; //type: uint64
        YLeaf number_of_delete_o_perations; //type: uint64

}; // TrafficCollector::Summary::VrfStatistic::DatabaseStatisticsTunnel


class TrafficCollector::Summary::CollectionMessageStatistic : public Entity
{
    public:
        CollectionMessageStatistic();
        ~CollectionMessageStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_sent; //type: uint64
        YLeaf byte_sent; //type: uint64
        YLeaf packet_received; //type: uint64
        YLeaf byte_received; //type: uint64
        YLeaf maximum_roundtrip_latency; //type: uint32
        YLeaf maimum_latency_timestamp; //type: uint64

}; // TrafficCollector::Summary::CollectionMessageStatistic


class TrafficCollector::Summary::CheckpointMessageStatistic : public Entity
{
    public:
        CheckpointMessageStatistic();
        ~CheckpointMessageStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_sent; //type: uint64
        YLeaf byte_sent; //type: uint64
        YLeaf packet_received; //type: uint64
        YLeaf byte_received; //type: uint64
        YLeaf maximum_roundtrip_latency; //type: uint32
        YLeaf maimum_latency_timestamp; //type: uint64

}; // TrafficCollector::Summary::CheckpointMessageStatistic


class TrafficCollector::VrfTable : public Entity
{
    public:
        VrfTable();
        ~VrfTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultVrf; //type: TrafficCollector::VrfTable::DefaultVrf

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf> default_vrf;
        
}; // TrafficCollector::VrfTable


class TrafficCollector::VrfTable::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Afs; //type: TrafficCollector::VrfTable::DefaultVrf::Afs

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs> afs;
        
}; // TrafficCollector::VrfTable::DefaultVrf


class TrafficCollector::VrfTable::DefaultVrf::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Af; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af> > af;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af : public Entity
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

        YLeaf af_name; //type: TcOperAfNameEnum
        class Counters; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters> counters;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefixes; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes
        class Tunnels; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes> prefixes;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels> tunnels;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefix; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix> > prefix;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix : public Entity
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

        YLeaf ipaddr; //type: string
        YLeaf mask; //type: string
        YLeaf label; //type: uint32
        YLeaf prefix; //type: string
        YLeaf label_xr; //type: uint32
        YLeaf is_active; //type: boolean
        class BaseCounterStatistics; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics
        class TrafficMatrixCounterStatistics; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics> base_counter_statistics;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics> traffic_matrix_counter_statistics;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics : public Entity
{
    public:
        BaseCounterStatistics();
        ~BaseCounterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets_per_second_switched; //type: uint64
        YLeaf transmit_bytes_per_second_switched; //type: uint64
        class CountHistory; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory> > count_history;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory : public Entity
{
    public:
        CountHistory();
        ~CountHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_start_timestamp; //type: uint64
        YLeaf event_end_timestamp; //type: uint64
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf is_valid; //type: boolean

}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics : public Entity
{
    public:
        TrafficMatrixCounterStatistics();
        ~TrafficMatrixCounterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets_per_second_switched; //type: uint64
        YLeaf transmit_bytes_per_second_switched; //type: uint64
        class CountHistory; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory> > count_history;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory : public Entity
{
    public:
        CountHistory();
        ~CountHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_start_timestamp; //type: uint64
        YLeaf event_end_timestamp; //type: uint64
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf is_valid; //type: boolean

}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnel; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel> > tunnel;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_handle; //type: uint32
        YLeaf vrfid; //type: uint32
        YLeaf is_active; //type: boolean
        class BaseCounterStatistics; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics> base_counter_statistics;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics : public Entity
{
    public:
        BaseCounterStatistics();
        ~BaseCounterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets_per_second_switched; //type: uint64
        YLeaf transmit_bytes_per_second_switched; //type: uint64
        class CountHistory; //type: TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory> > count_history;
        
}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics


class TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory : public Entity
{
    public:
        CountHistory();
        ~CountHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_start_timestamp; //type: uint64
        YLeaf event_end_timestamp; //type: uint64
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf is_valid; //type: boolean

}; // TrafficCollector::VrfTable::DefaultVrf::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory


class TrafficCollector::Afs : public Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Af; //type: TrafficCollector::Afs::Af

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af> > af;
        
}; // TrafficCollector::Afs


class TrafficCollector::Afs::Af : public Entity
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

        YLeaf af_name; //type: TcOperAfNameEnum
        class Counters; //type: TrafficCollector::Afs::Af::Counters

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters> counters;
        
}; // TrafficCollector::Afs::Af


class TrafficCollector::Afs::Af::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefixes; //type: TrafficCollector::Afs::Af::Counters::Prefixes
        class Tunnels; //type: TrafficCollector::Afs::Af::Counters::Tunnels

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes> prefixes;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels> tunnels;
        
}; // TrafficCollector::Afs::Af::Counters


class TrafficCollector::Afs::Af::Counters::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefix; //type: TrafficCollector::Afs::Af::Counters::Prefixes::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix> > prefix;
        
}; // TrafficCollector::Afs::Af::Counters::Prefixes


class TrafficCollector::Afs::Af::Counters::Prefixes::Prefix : public Entity
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

        YLeaf ipaddr; //type: string
        YLeaf mask; //type: string
        YLeaf label; //type: uint32
        YLeaf prefix; //type: string
        YLeaf label_xr; //type: uint32
        YLeaf is_active; //type: boolean
        class BaseCounterStatistics; //type: TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics
        class TrafficMatrixCounterStatistics; //type: TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics> base_counter_statistics;
        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics> traffic_matrix_counter_statistics;
        
}; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix


class TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics : public Entity
{
    public:
        BaseCounterStatistics();
        ~BaseCounterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets_per_second_switched; //type: uint64
        YLeaf transmit_bytes_per_second_switched; //type: uint64
        class CountHistory; //type: TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory> > count_history;
        
}; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics


class TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory : public Entity
{
    public:
        CountHistory();
        ~CountHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_start_timestamp; //type: uint64
        YLeaf event_end_timestamp; //type: uint64
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf is_valid; //type: boolean

}; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::BaseCounterStatistics::CountHistory


class TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics : public Entity
{
    public:
        TrafficMatrixCounterStatistics();
        ~TrafficMatrixCounterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets_per_second_switched; //type: uint64
        YLeaf transmit_bytes_per_second_switched; //type: uint64
        class CountHistory; //type: TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory> > count_history;
        
}; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics


class TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory : public Entity
{
    public:
        CountHistory();
        ~CountHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_start_timestamp; //type: uint64
        YLeaf event_end_timestamp; //type: uint64
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf is_valid; //type: boolean

}; // TrafficCollector::Afs::Af::Counters::Prefixes::Prefix::TrafficMatrixCounterStatistics::CountHistory


class TrafficCollector::Afs::Af::Counters::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnel; //type: TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel> > tunnel;
        
}; // TrafficCollector::Afs::Af::Counters::Tunnels


class TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_handle; //type: uint32
        YLeaf vrfid; //type: uint32
        YLeaf is_active; //type: boolean
        class BaseCounterStatistics; //type: TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics

        std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics> base_counter_statistics;
        
}; // TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel


class TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics : public Entity
{
    public:
        BaseCounterStatistics();
        ~BaseCounterStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_packets_per_second_switched; //type: uint64
        YLeaf transmit_bytes_per_second_switched; //type: uint64
        class CountHistory; //type: TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_tc_oper::TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory> > count_history;
        
}; // TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics


class TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory : public Entity
{
    public:
        CountHistory();
        ~CountHistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_start_timestamp; //type: uint64
        YLeaf event_end_timestamp; //type: uint64
        YLeaf transmit_number_of_packets_switched; //type: uint64
        YLeaf transmit_number_of_bytes_switched; //type: uint64
        YLeaf is_valid; //type: boolean

}; // TrafficCollector::Afs::Af::Counters::Tunnels::Tunnel::BaseCounterStatistics::CountHistory

class TcOperAfNameEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_TC_OPER_ */

