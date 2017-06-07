
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_0.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_perfmgmt_cfg {

PerfMgmt::PerfMgmt()
    :
    enable(std::make_shared<PerfMgmt::Enable>())
	,reg_exp_groups(std::make_shared<PerfMgmt::RegExpGroups>())
	,resources(std::make_shared<PerfMgmt::Resources>())
	,statistics(std::make_shared<PerfMgmt::Statistics>())
	,threshold(std::make_shared<PerfMgmt::Threshold>())
{
    enable->parent = this;

    reg_exp_groups->parent = this;

    resources->parent = this;

    statistics->parent = this;

    threshold->parent = this;

    yang_name = "perf-mgmt"; yang_parent_name = "Cisco-IOS-XR-manageability-perfmgmt-cfg";
}

PerfMgmt::~PerfMgmt()
{
}

bool PerfMgmt::has_data() const
{
    return (enable !=  nullptr && enable->has_data())
	|| (reg_exp_groups !=  nullptr && reg_exp_groups->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool PerfMgmt::has_operation() const
{
    return is_set(operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (reg_exp_groups !=  nullptr && reg_exp_groups->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string PerfMgmt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt";

    return path_buffer.str();

}

const EntityPath PerfMgmt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<PerfMgmt::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "reg-exp-groups")
    {
        if(reg_exp_groups == nullptr)
        {
            reg_exp_groups = std::make_shared<PerfMgmt::RegExpGroups>();
        }
        return reg_exp_groups;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<PerfMgmt::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<PerfMgmt::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<PerfMgmt::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(reg_exp_groups != nullptr)
    {
        children["reg-exp-groups"] = reg_exp_groups;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void PerfMgmt::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PerfMgmt::clone_ptr() const
{
    return std::make_shared<PerfMgmt>();
}

std::string PerfMgmt::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerfMgmt::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerfMgmt::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

PerfMgmt::Resources::Resources()
    :
    dump_local(std::make_shared<PerfMgmt::Resources::DumpLocal>())
	,memory_resources(std::make_shared<PerfMgmt::Resources::MemoryResources>())
	,tftp_resources(nullptr) // presence node
{
    dump_local->parent = this;

    memory_resources->parent = this;

    yang_name = "resources"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::Resources::~Resources()
{
}

bool PerfMgmt::Resources::has_data() const
{
    return (dump_local !=  nullptr && dump_local->has_data())
	|| (memory_resources !=  nullptr && memory_resources->has_data())
	|| (tftp_resources !=  nullptr && tftp_resources->has_data());
}

bool PerfMgmt::Resources::has_operation() const
{
    return is_set(operation)
	|| (dump_local !=  nullptr && dump_local->has_operation())
	|| (memory_resources !=  nullptr && memory_resources->has_operation())
	|| (tftp_resources !=  nullptr && tftp_resources->has_operation());
}

std::string PerfMgmt::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dump-local")
    {
        if(dump_local == nullptr)
        {
            dump_local = std::make_shared<PerfMgmt::Resources::DumpLocal>();
        }
        return dump_local;
    }

    if(child_yang_name == "memory-resources")
    {
        if(memory_resources == nullptr)
        {
            memory_resources = std::make_shared<PerfMgmt::Resources::MemoryResources>();
        }
        return memory_resources;
    }

    if(child_yang_name == "tftp-resources")
    {
        if(tftp_resources == nullptr)
        {
            tftp_resources = std::make_shared<PerfMgmt::Resources::TftpResources>();
        }
        return tftp_resources;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dump_local != nullptr)
    {
        children["dump-local"] = dump_local;
    }

    if(memory_resources != nullptr)
    {
        children["memory-resources"] = memory_resources;
    }

    if(tftp_resources != nullptr)
    {
        children["tftp-resources"] = tftp_resources;
    }

    return children;
}

void PerfMgmt::Resources::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Resources::TftpResources::TftpResources()
    :
    directory{YType::str, "directory"},
    server_address{YType::str, "server-address"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "tftp-resources"; yang_parent_name = "resources";
}

PerfMgmt::Resources::TftpResources::~TftpResources()
{
}

bool PerfMgmt::Resources::TftpResources::has_data() const
{
    return directory.is_set
	|| server_address.is_set
	|| vrf_name.is_set;
}

bool PerfMgmt::Resources::TftpResources::has_operation() const
{
    return is_set(operation)
	|| is_set(directory.operation)
	|| is_set(server_address.operation)
	|| is_set(vrf_name.operation);
}

std::string PerfMgmt::Resources::TftpResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-resources";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Resources::TftpResources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directory.is_set || is_set(directory.operation)) leaf_name_data.push_back(directory.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.operation)) leaf_name_data.push_back(server_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Resources::TftpResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::TftpResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Resources::TftpResources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directory")
    {
        directory = value;
    }
    if(value_path == "server-address")
    {
        server_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

PerfMgmt::Resources::DumpLocal::DumpLocal()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "dump-local"; yang_parent_name = "resources";
}

PerfMgmt::Resources::DumpLocal::~DumpLocal()
{
}

bool PerfMgmt::Resources::DumpLocal::has_data() const
{
    return enable.is_set;
}

bool PerfMgmt::Resources::DumpLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string PerfMgmt::Resources::DumpLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dump-local";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Resources::DumpLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Resources::DumpLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::DumpLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Resources::DumpLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

PerfMgmt::Resources::MemoryResources::MemoryResources()
    :
    max_limit{YType::int32, "max-limit"},
    min_reserved{YType::int32, "min-reserved"}
{
    yang_name = "memory-resources"; yang_parent_name = "resources";
}

PerfMgmt::Resources::MemoryResources::~MemoryResources()
{
}

bool PerfMgmt::Resources::MemoryResources::has_data() const
{
    return max_limit.is_set
	|| min_reserved.is_set;
}

bool PerfMgmt::Resources::MemoryResources::has_operation() const
{
    return is_set(operation)
	|| is_set(max_limit.operation)
	|| is_set(min_reserved.operation);
}

std::string PerfMgmt::Resources::MemoryResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-resources";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Resources::MemoryResources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_limit.is_set || is_set(max_limit.operation)) leaf_name_data.push_back(max_limit.get_name_leafdata());
    if (min_reserved.is_set || is_set(min_reserved.operation)) leaf_name_data.push_back(min_reserved.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Resources::MemoryResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Resources::MemoryResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Resources::MemoryResources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-limit")
    {
        max_limit = value;
    }
    if(value_path == "min-reserved")
    {
        min_reserved = value;
    }
}

PerfMgmt::Statistics::Statistics()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Statistics::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Statistics::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Statistics::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Statistics::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Statistics::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Statistics::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Statistics::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Statistics::ProcessNode>())
{
    basic_counter_interface->parent = this;

    bgp->parent = this;

    cpu_node->parent = this;

    data_rate_interface->parent = this;

    generic_counter_interface->parent = this;

    ldp_mpls->parent = this;

    memory_node->parent = this;

    ospfv2_protocol->parent = this;

    ospfv3_protocol->parent = this;

    process_node->parent = this;

    yang_name = "statistics"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::Statistics::~Statistics()
{
}

bool PerfMgmt::Statistics::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Statistics::has_operation() const
{
    return is_set(operation)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Statistics::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Statistics::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Statistics::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Statistics::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Statistics::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Statistics::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Statistics::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Statistics::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Statistics::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::GenericCounterInterface::GenericCounterInterface()
    :
    templates(std::make_shared<PerfMgmt::Statistics::GenericCounterInterface::Templates>())
{
    templates->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::GenericCounterInterface::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::GenericCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::GenericCounterInterface::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::GenericCounterInterface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "generic-counter-interface";
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::GenericCounterInterface::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::GenericCounterInterface::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/generic-counter-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::GenericCounterInterface::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::GenericCounterInterface::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::GenericCounterInterface::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/generic-counter-interface/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::GenericCounterInterface::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::ProcessNode::ProcessNode()
    :
    templates(std::make_shared<PerfMgmt::Statistics::ProcessNode::Templates>())
{
    templates->parent = this;

    yang_name = "process-node"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Statistics::ProcessNode::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::ProcessNode::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::ProcessNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::ProcessNode::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::ProcessNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::ProcessNode::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "process-node";
}

PerfMgmt::Statistics::ProcessNode::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::ProcessNode::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::ProcessNode::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::ProcessNode::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::ProcessNode::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/process-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::ProcessNode::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::ProcessNode::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::ProcessNode::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::ProcessNode::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::ProcessNode::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::ProcessNode::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::ProcessNode::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::ProcessNode::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/process-node/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::ProcessNode::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::ProcessNode::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::BasicCounterInterface::BasicCounterInterface()
    :
    templates(std::make_shared<PerfMgmt::Statistics::BasicCounterInterface::Templates>())
{
    templates->parent = this;

    yang_name = "basic-counter-interface"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::BasicCounterInterface::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::BasicCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::BasicCounterInterface::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::BasicCounterInterface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "basic-counter-interface";
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::BasicCounterInterface::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::BasicCounterInterface::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/basic-counter-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::BasicCounterInterface::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::BasicCounterInterface::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::BasicCounterInterface::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/basic-counter-interface/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::BasicCounterInterface::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::Ospfv3Protocol::Ospfv3Protocol()
    :
    templates(std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol::Templates>())
{
    templates->parent = this;

    yang_name = "ospfv3-protocol"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::Ospfv3Protocol::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Ospfv3Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv3Protocol::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "ospfv3-protocol";
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv3-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv3Protocol::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv3Protocol::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv3-protocol/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::Ospfv3Protocol::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::CpuNode::CpuNode()
    :
    templates(std::make_shared<PerfMgmt::Statistics::CpuNode::Templates>())
{
    templates->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Statistics::CpuNode::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::CpuNode::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::CpuNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::CpuNode::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::CpuNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::CpuNode::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "cpu-node";
}

PerfMgmt::Statistics::CpuNode::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::CpuNode::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::CpuNode::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::CpuNode::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::CpuNode::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/cpu-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::CpuNode::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::CpuNode::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::CpuNode::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::CpuNode::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::CpuNode::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::CpuNode::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::CpuNode::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::CpuNode::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::CpuNode::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::CpuNode::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/cpu-node/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::CpuNode::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::CpuNode::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::CpuNode::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::DataRateInterface::DataRateInterface()
    :
    templates(std::make_shared<PerfMgmt::Statistics::DataRateInterface::Templates>())
{
    templates->parent = this;

    yang_name = "data-rate-interface"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Statistics::DataRateInterface::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::DataRateInterface::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::DataRateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::DataRateInterface::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::DataRateInterface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::DataRateInterface::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "data-rate-interface";
}

PerfMgmt::Statistics::DataRateInterface::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::DataRateInterface::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::DataRateInterface::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/data-rate-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::DataRateInterface::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::DataRateInterface::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::DataRateInterface::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::DataRateInterface::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::DataRateInterface::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::DataRateInterface::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::DataRateInterface::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/data-rate-interface/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::DataRateInterface::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::DataRateInterface::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::MemoryNode::MemoryNode()
    :
    templates(std::make_shared<PerfMgmt::Statistics::MemoryNode::Templates>())
{
    templates->parent = this;

    yang_name = "memory-node"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Statistics::MemoryNode::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::MemoryNode::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::MemoryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::MemoryNode::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::MemoryNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::MemoryNode::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "memory-node";
}

PerfMgmt::Statistics::MemoryNode::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::MemoryNode::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::MemoryNode::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::MemoryNode::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::MemoryNode::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/memory-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::MemoryNode::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::MemoryNode::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::MemoryNode::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::MemoryNode::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::MemoryNode::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::MemoryNode::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::MemoryNode::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::MemoryNode::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/memory-node/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::MemoryNode::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::MemoryNode::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::LdpMpls::LdpMpls()
    :
    templates(std::make_shared<PerfMgmt::Statistics::LdpMpls::Templates>())
{
    templates->parent = this;

    yang_name = "ldp-mpls"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Statistics::LdpMpls::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::LdpMpls::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::LdpMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::LdpMpls::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::LdpMpls::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::LdpMpls::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "ldp-mpls";
}

PerfMgmt::Statistics::LdpMpls::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::LdpMpls::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::LdpMpls::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::LdpMpls::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::LdpMpls::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ldp-mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::LdpMpls::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::LdpMpls::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::LdpMpls::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::LdpMpls::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::LdpMpls::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::LdpMpls::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::LdpMpls::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::LdpMpls::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ldp-mpls/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::LdpMpls::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::LdpMpls::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::Bgp::Bgp()
    :
    templates(std::make_shared<PerfMgmt::Statistics::Bgp::Templates>())
{
    templates->parent = this;

    yang_name = "bgp"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::Bgp::~Bgp()
{
}

bool PerfMgmt::Statistics::Bgp::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::Bgp::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::Bgp::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::Bgp::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::Bgp::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "bgp";
}

PerfMgmt::Statistics::Bgp::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::Bgp::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::Bgp::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::Bgp::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Bgp::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Bgp::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::Bgp::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Bgp::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::Bgp::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::Bgp::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::Bgp::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::Bgp::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::Bgp::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::Bgp::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Bgp::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/bgp/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Bgp::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Bgp::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::Bgp::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Statistics::Ospfv2Protocol::Ospfv2Protocol()
    :
    templates(std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol::Templates>())
{
    templates->parent = this;

    yang_name = "ospfv2-protocol"; yang_parent_name = "statistics";
}

PerfMgmt::Statistics::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::has_data() const
{
    return (templates !=  nullptr && templates->has_data());
}

bool PerfMgmt::Statistics::Ospfv2Protocol::has_operation() const
{
    return is_set(operation)
	|| (templates !=  nullptr && templates->has_operation());
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Ospfv2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templates")
    {
        if(templates == nullptr)
        {
            templates = std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol::Templates>();
        }
        return templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(templates != nullptr)
    {
        children["templates"] = templates;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv2Protocol::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "ospfv2-protocol";
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::~Templates()
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv2-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv2Protocol::Templates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Statistics::Ospfv2Protocol::Templates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    history_persistent{YType::empty, "history-persistent"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_size{YType::uint32, "sample-size"},
    vrf_group{YType::str, "vrf-group"}
{
    yang_name = "template"; yang_parent_name = "templates";
}

PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::~Template_()
{
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| history_persistent.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| sample_size.is_set
	|| vrf_group.is_set;
}

bool PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(history_persistent.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_size.operation)
	|| is_set(vrf_group.operation);
}

std::string PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/statistics/ospfv2-protocol/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (history_persistent.is_set || is_set(history_persistent.operation)) leaf_name_data.push_back(history_persistent.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_size.is_set || is_set(sample_size.operation)) leaf_name_data.push_back(sample_size.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Statistics::Ospfv2Protocol::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "history-persistent")
    {
        history_persistent = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-size")
    {
        sample_size = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Enable::Enable()
    :
    monitor_enable(std::make_shared<PerfMgmt::Enable::MonitorEnable>())
	,statistics(std::make_shared<PerfMgmt::Enable::Statistics>())
	,threshold(std::make_shared<PerfMgmt::Enable::Threshold>())
{
    monitor_enable->parent = this;

    statistics->parent = this;

    threshold->parent = this;

    yang_name = "enable"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::Enable::~Enable()
{
}

bool PerfMgmt::Enable::has_data() const
{
    return (monitor_enable !=  nullptr && monitor_enable->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool PerfMgmt::Enable::has_operation() const
{
    return is_set(operation)
	|| (monitor_enable !=  nullptr && monitor_enable->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string PerfMgmt::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-enable")
    {
        if(monitor_enable == nullptr)
        {
            monitor_enable = std::make_shared<PerfMgmt::Enable::MonitorEnable>();
        }
        return monitor_enable;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<PerfMgmt::Enable::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<PerfMgmt::Enable::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor_enable != nullptr)
    {
        children["monitor-enable"] = monitor_enable;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void PerfMgmt::Enable::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::Threshold()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Enable::Threshold::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Enable::Threshold::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Enable::Threshold::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Enable::Threshold::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Enable::Threshold::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Enable::Threshold::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Enable::Threshold::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Enable::Threshold::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode>())
{
    basic_counter_interface->parent = this;

    bgp->parent = this;

    cpu_node->parent = this;

    data_rate_interface->parent = this;

    generic_counter_interface->parent = this;

    ldp_mpls->parent = this;

    memory_node->parent = this;

    ospfv2_protocol->parent = this;

    ospfv3_protocol->parent = this;

    process_node->parent = this;

    yang_name = "threshold"; yang_parent_name = "enable";
}

PerfMgmt::Enable::Threshold::~Threshold()
{
}

bool PerfMgmt::Enable::Threshold::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Enable::Threshold::has_operation() const
{
    return is_set(operation)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Enable::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Enable::Threshold::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Enable::Threshold::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Enable::Threshold::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Enable::Threshold::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Enable::Threshold::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Enable::Threshold::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Enable::Threshold::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::Ospfv3Protocol::Ospfv3Protocol()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "ospfv3-protocol"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Enable::Threshold::Ospfv3Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::Ospfv3Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::Ospfv3Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::Bgp::Bgp()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "bgp"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::Bgp::~Bgp()
{
}

bool PerfMgmt::Enable::Threshold::Bgp::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::DataRateInterface::DataRateInterface()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "data-rate-interface"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Enable::Threshold::DataRateInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::DataRateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::DataRateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::DataRateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::Ospfv2Protocol::Ospfv2Protocol()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "ospfv2-protocol"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Enable::Threshold::Ospfv2Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::Ospfv2Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::Ospfv2Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::MemoryNode::MemoryNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "memory-node"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Threshold::MemoryNode::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::MemoryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "memory-node";
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/memory-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/memory-node/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "node-all"; yang_parent_name = "memory-node";
}

PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/memory-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::MemoryNode::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::GenericCounterInterface::GenericCounterInterface()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "generic-counter-interface"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Enable::Threshold::GenericCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::GenericCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::GenericCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::GenericCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::CpuNode::CpuNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Threshold::CpuNode::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Threshold::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::CpuNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "cpu-node";
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/cpu-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/cpu-node/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::CpuNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "node-all"; yang_parent_name = "cpu-node";
}

PerfMgmt::Enable::Threshold::CpuNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Threshold::CpuNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::CpuNode::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/cpu-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::CpuNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::CpuNode::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::LdpMpls::LdpMpls()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "ldp-mpls"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Enable::Threshold::LdpMpls::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::LdpMpls::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::LdpMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::LdpMpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::ProcessNode::ProcessNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "process-node"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Threshold::ProcessNode::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::ProcessNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "process-node";
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/process-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/process-node/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "node-all"; yang_parent_name = "process-node";
}

PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/process-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::ProcessNode::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Threshold::BasicCounterInterface::BasicCounterInterface()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "basic-counter-interface"; yang_parent_name = "threshold";
}

PerfMgmt::Enable::Threshold::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Enable::Threshold::BasicCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Threshold::BasicCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Threshold::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Threshold::BasicCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Threshold::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Threshold::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Threshold::BasicCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::Statistics()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Enable::Statistics::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Enable::Statistics::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Enable::Statistics::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Enable::Statistics::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Enable::Statistics::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Enable::Statistics::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Enable::Statistics::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Enable::Statistics::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode>())
{
    basic_counter_interface->parent = this;

    bgp->parent = this;

    cpu_node->parent = this;

    data_rate_interface->parent = this;

    generic_counter_interface->parent = this;

    ldp_mpls->parent = this;

    memory_node->parent = this;

    ospfv2_protocol->parent = this;

    ospfv3_protocol->parent = this;

    process_node->parent = this;

    yang_name = "statistics"; yang_parent_name = "enable";
}

PerfMgmt::Enable::Statistics::~Statistics()
{
}

bool PerfMgmt::Enable::Statistics::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Enable::Statistics::has_operation() const
{
    return is_set(operation)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Enable::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Enable::Statistics::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Enable::Statistics::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Enable::Statistics::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Enable::Statistics::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Enable::Statistics::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Enable::Statistics::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Enable::Statistics::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::GenericCounterInterface::GenericCounterInterface()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "generic-counter-interface"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Enable::Statistics::GenericCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::GenericCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::GenericCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::GenericCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::Bgp::Bgp()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "bgp"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::Bgp::~Bgp()
{
}

bool PerfMgmt::Enable::Statistics::Bgp::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::Ospfv2Protocol::Ospfv2Protocol()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "ospfv2-protocol"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Enable::Statistics::Ospfv2Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::Ospfv2Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::Ospfv2Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::Ospfv3Protocol::Ospfv3Protocol()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "ospfv3-protocol"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Enable::Statistics::Ospfv3Protocol::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::Ospfv3Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::Ospfv3Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::CpuNode::CpuNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "cpu-node"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::CpuNode::~CpuNode()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Statistics::CpuNode::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Statistics::CpuNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::CpuNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::CpuNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "node-all"; yang_parent_name = "cpu-node";
}

PerfMgmt::Enable::Statistics::CpuNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::CpuNode::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/cpu-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "cpu-node";
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/cpu-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/cpu-node/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::CpuNode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::BasicCounterInterface::BasicCounterInterface()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "basic-counter-interface"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::BasicCounterInterface::~BasicCounterInterface()
{
}

bool PerfMgmt::Enable::Statistics::BasicCounterInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::BasicCounterInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::BasicCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::BasicCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::BasicCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::BasicCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::BasicCounterInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::ProcessNode::ProcessNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "process-node"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Statistics::ProcessNode::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::ProcessNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "node-all"; yang_parent_name = "process-node";
}

PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/process-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "process-node";
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/process-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/process-node/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::ProcessNode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::DataRateInterface::DataRateInterface()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "data-rate-interface"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::DataRateInterface::~DataRateInterface()
{
}

bool PerfMgmt::Enable::Statistics::DataRateInterface::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::DataRateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::DataRateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rate-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::DataRateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::DataRateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::DataRateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::DataRateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::MemoryNode::MemoryNode()
    :
    node_all(std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::NodeAll>())
	,nodes(std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::Nodes>())
{
    node_all->parent = this;

    nodes->parent = this;

    yang_name = "memory-node"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::MemoryNode::~MemoryNode()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::has_data() const
{
    return (node_all !=  nullptr && node_all->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::Statistics::MemoryNode::has_operation() const
{
    return is_set(operation)
	|| (node_all !=  nullptr && node_all->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-node";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::MemoryNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-all")
    {
        if(node_all == nullptr)
        {
            node_all = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::NodeAll>();
        }
        return node_all;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_all != nullptr)
    {
        children["node-all"] = node_all;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::NodeAll()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "node-all"; yang_parent_name = "memory-node";
}

PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::~NodeAll()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-all";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/memory-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::NodeAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "memory-node";
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/memory-node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/memory-node/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::MemoryNode::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::Statistics::LdpMpls::LdpMpls()
    :
    template_name{YType::str, "template-name"}
{
    yang_name = "ldp-mpls"; yang_parent_name = "statistics";
}

PerfMgmt::Enable::Statistics::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Enable::Statistics::LdpMpls::has_data() const
{
    return template_name.is_set;
}

bool PerfMgmt::Enable::Statistics::LdpMpls::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::Statistics::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::Statistics::LdpMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::Statistics::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::Statistics::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::Statistics::LdpMpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::MonitorEnable()
    :
    basic_counters(std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters>())
	,bgp(std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp>())
	,cpu(std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu>())
	,data_rates(std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates>())
	,generic_counters(std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters>())
	,ldp_mpls(std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls>())
	,memory(std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol>())
	,process(std::make_shared<PerfMgmt::Enable::MonitorEnable::Process>())
{
    basic_counters->parent = this;

    bgp->parent = this;

    cpu->parent = this;

    data_rates->parent = this;

    generic_counters->parent = this;

    ldp_mpls->parent = this;

    memory->parent = this;

    ospfv2_protocol->parent = this;

    ospfv3_protocol->parent = this;

    process->parent = this;

    yang_name = "monitor-enable"; yang_parent_name = "enable";
}

PerfMgmt::Enable::MonitorEnable::~MonitorEnable()
{
}

bool PerfMgmt::Enable::MonitorEnable::has_data() const
{
    return (basic_counters !=  nullptr && basic_counters->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu !=  nullptr && cpu->has_data())
	|| (data_rates !=  nullptr && data_rates->has_data())
	|| (generic_counters !=  nullptr && generic_counters->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process !=  nullptr && process->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::has_operation() const
{
    return is_set(operation)
	|| (basic_counters !=  nullptr && basic_counters->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (data_rates !=  nullptr && data_rates->has_operation())
	|| (generic_counters !=  nullptr && generic_counters->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process !=  nullptr && process->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-enable";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counters")
    {
        if(basic_counters == nullptr)
        {
            basic_counters = std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters>();
        }
        return basic_counters;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "data-rates")
    {
        if(data_rates == nullptr)
        {
            data_rates = std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates>();
        }
        return data_rates;
    }

    if(child_yang_name == "generic-counters")
    {
        if(generic_counters == nullptr)
        {
            generic_counters = std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters>();
        }
        return generic_counters;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process>();
        }
        return process;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counters != nullptr)
    {
        children["basic-counters"] = basic_counters;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu != nullptr)
    {
        children["cpu"] = cpu;
    }

    if(data_rates != nullptr)
    {
        children["data-rates"] = data_rates;
    }

    if(generic_counters != nullptr)
    {
        children["generic-counters"] = generic_counters;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::LdpMpls()
    :
    sessions(std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions>())
{
    sessions->parent = this;

    yang_name = "ldp-mpls"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::LdpMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "ldp-mpls";
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::~Sessions()
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ldp-mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::Session()
    :
    session{YType::str, "session"},
    template_name{YType::str, "template-name"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::~Session()
{
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::has_data() const
{
    return session.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session='" <<session <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ldp-mpls/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::LdpMpls::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session")
    {
        session = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::Ospfv3Protocol()
    :
    ospf_instances(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances>())
{
    ospf_instances->parent = this;

    yang_name = "ospfv3-protocol"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::~Ospfv3Protocol()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::has_data() const
{
    return (ospf_instances !=  nullptr && ospf_instances->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::has_operation() const
{
    return is_set(operation)
	|| (ospf_instances !=  nullptr && ospf_instances->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instances")
    {
        if(ospf_instances == nullptr)
        {
            ospf_instances = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances>();
        }
        return ospf_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf_instances != nullptr)
    {
        children["ospf-instances"] = ospf_instances;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstances()
{
    yang_name = "ospf-instances"; yang_parent_name = "ospfv3-protocol";
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::~OspfInstances()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::has_data() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::has_operation() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instances";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv3-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instance")
    {
        for(auto const & c : ospf_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance>();
        c->parent = this;
        ospf_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::OspfInstance()
    :
    instance_name{YType::str, "instance-name"},
    template_name{YType::str, "template-name"}
{
    yang_name = "ospf-instance"; yang_parent_name = "ospf-instances";
}

PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::~OspfInstance()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::has_data() const
{
    return instance_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv3-protocol/ospf-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv3Protocol::OspfInstances::OspfInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::GenericCounters()
    :
    interfaces(std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "generic-counters"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::~GenericCounters()
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counters";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::GenericCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::GenericCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::GenericCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "generic-counters";
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::~Interfaces()
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/generic-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    template_name{YType::str, "template-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::~Interface()
{
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/generic-counters/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::GenericCounters::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Process::Process()
    :
    process_nodes(std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes>())
{
    process_nodes->parent = this;

    yang_name = "process"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::Process::~Process()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::has_data() const
{
    return (process_nodes !=  nullptr && process_nodes->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Process::has_operation() const
{
    return is_set(operation)
	|| (process_nodes !=  nullptr && process_nodes->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-nodes")
    {
        if(process_nodes == nullptr)
        {
            process_nodes = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes>();
        }
        return process_nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(process_nodes != nullptr)
    {
        children["process-nodes"] = process_nodes;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNodes()
{
    yang_name = "process-nodes"; yang_parent_name = "process";
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::~ProcessNodes()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::has_data() const
{
    for (std::size_t index=0; index<process_node.size(); index++)
    {
        if(process_node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::has_operation() const
{
    for (std::size_t index=0; index<process_node.size(); index++)
    {
        if(process_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-node")
    {
        for(auto const & c : process_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode>();
        c->parent = this;
        process_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::ProcessNode()
    :
    node_id{YType::str, "node-id"}
    	,
    pids(std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids>())
{
    pids->parent = this;

    yang_name = "process-node"; yang_parent_name = "process-nodes";
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::~ProcessNode()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::has_data() const
{
    return node_id.is_set
	|| (pids !=  nullptr && pids->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (pids !=  nullptr && pids->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/process/process-nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pids")
    {
        if(pids == nullptr)
        {
            pids = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids>();
        }
        return pids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pids != nullptr)
    {
        children["pids"] = pids;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pids()
{
    yang_name = "pids"; yang_parent_name = "process-node";
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::~Pids()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::has_data() const
{
    for (std::size_t index=0; index<pid.size(); index++)
    {
        if(pid[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::has_operation() const
{
    for (std::size_t index=0; index<pid.size(); index++)
    {
        if(pid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pids";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pids' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pid")
    {
        for(auto const & c : pid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid>();
        c->parent = this;
        pid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::Pid()
    :
    pid{YType::uint32, "pid"},
    template_name{YType::str, "template-name"}
{
    yang_name = "pid"; yang_parent_name = "pids";
}

PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::~Pid()
{
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::has_data() const
{
    return pid.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::has_operation() const
{
    return is_set(operation)
	|| is_set(pid.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pid" <<"[pid='" <<pid <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pid' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Process::ProcessNodes::ProcessNode::Pids::Pid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::BasicCounters()
    :
    interfaces(std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "basic-counters"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::~BasicCounters()
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-counters";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::BasicCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::BasicCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::BasicCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "basic-counters";
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::~Interfaces()
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/basic-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    template_name{YType::str, "template-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::~Interface()
{
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/basic-counters/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::BasicCounters::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Memory::Memory()
    :
    nodes(std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory::Nodes>())
{
    nodes->parent = this;

    yang_name = "memory"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::Memory::~Memory()
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Memory::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Memory::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "memory";
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Memory::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/memory/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Memory::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::Ospfv2Protocol()
    :
    ospf_instances(std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances>())
{
    ospf_instances->parent = this;

    yang_name = "ospfv2-protocol"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::~Ospfv2Protocol()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::has_data() const
{
    return (ospf_instances !=  nullptr && ospf_instances->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::has_operation() const
{
    return is_set(operation)
	|| (ospf_instances !=  nullptr && ospf_instances->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-protocol";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instances")
    {
        if(ospf_instances == nullptr)
        {
            ospf_instances = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances>();
        }
        return ospf_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf_instances != nullptr)
    {
        children["ospf-instances"] = ospf_instances;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstances()
{
    yang_name = "ospf-instances"; yang_parent_name = "ospfv2-protocol";
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::~OspfInstances()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::has_data() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::has_operation() const
{
    for (std::size_t index=0; index<ospf_instance.size(); index++)
    {
        if(ospf_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instances";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv2-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instance")
    {
        for(auto const & c : ospf_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance>();
        c->parent = this;
        ospf_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ospf_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::OspfInstance()
    :
    instance_name{YType::str, "instance-name"},
    template_name{YType::str, "template-name"}
{
    yang_name = "ospf-instance"; yang_parent_name = "ospf-instances";
}

PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::~OspfInstance()
{
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::has_data() const
{
    return instance_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/ospfv2-protocol/ospf-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Ospfv2Protocol::OspfInstances::OspfInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Cpu::Cpu()
    :
    nodes(std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu::Nodes>())
{
    nodes->parent = this;

    yang_name = "cpu"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::Cpu::~Cpu()
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Cpu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Cpu::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "cpu";
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::~Nodes()
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/cpu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"},
    template_name{YType::str, "template-name"}
{
    yang_name = "node"; yang_parent_name = "nodes";
}

PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::~Node()
{
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/cpu/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Cpu::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::Bgp::Bgp()
    :
    neighbors(std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "bgp"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::Bgp::~Bgp()
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::has_operation() const
{
    return is_set(operation)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Bgp::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "bgp";
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::~Neighbors()
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::Neighbor()
    :
    peer_address{YType::str, "peer-address"},
    template_name{YType::str, "template-name"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::~Neighbor()
{
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::has_data() const
{
    return peer_address.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[peer-address='" <<peer_address <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/bgp/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::Bgp::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::Enable::MonitorEnable::DataRates::DataRates()
    :
    interfaces(std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "data-rates"; yang_parent_name = "monitor-enable";
}

PerfMgmt::Enable::MonitorEnable::DataRates::~DataRates()
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-rates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::DataRates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::DataRates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::DataRates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::DataRates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "data-rates";
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::~Interfaces()
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/data-rates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    template_name{YType::str, "template-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::~Interface()
{
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| template_name.is_set;
}

bool PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(template_name.operation);
}

std::string PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/enable/monitor-enable/data-rates/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Enable::MonitorEnable::DataRates::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
}

PerfMgmt::RegExpGroups::RegExpGroups()
{
    yang_name = "reg-exp-groups"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::RegExpGroups::~RegExpGroups()
{
}

bool PerfMgmt::RegExpGroups::has_data() const
{
    for (std::size_t index=0; index<reg_exp_group.size(); index++)
    {
        if(reg_exp_group[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::RegExpGroups::has_operation() const
{
    for (std::size_t index=0; index<reg_exp_group.size(); index++)
    {
        if(reg_exp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::RegExpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exp-groups";

    return path_buffer.str();

}

const EntityPath PerfMgmt::RegExpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-exp-group")
    {
        for(auto const & c : reg_exp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup>();
        c->parent = this;
        reg_exp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reg_exp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::RegExpGroups::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExpGroup()
    :
    reg_exp_group_name{YType::str, "reg-exp-group-name"}
    	,
    reg_exps(std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup::RegExps>())
{
    reg_exps->parent = this;

    yang_name = "reg-exp-group"; yang_parent_name = "reg-exp-groups";
}

PerfMgmt::RegExpGroups::RegExpGroup::~RegExpGroup()
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::has_data() const
{
    return reg_exp_group_name.is_set
	|| (reg_exps !=  nullptr && reg_exps->has_data());
}

bool PerfMgmt::RegExpGroups::RegExpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(reg_exp_group_name.operation)
	|| (reg_exps !=  nullptr && reg_exps->has_operation());
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exp-group" <<"[reg-exp-group-name='" <<reg_exp_group_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::RegExpGroups::RegExpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/reg-exp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reg_exp_group_name.is_set || is_set(reg_exp_group_name.operation)) leaf_name_data.push_back(reg_exp_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::RegExpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-exps")
    {
        if(reg_exps == nullptr)
        {
            reg_exps = std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup::RegExps>();
        }
        return reg_exps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::RegExpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reg_exps != nullptr)
    {
        children["reg-exps"] = reg_exps;
    }

    return children;
}

void PerfMgmt::RegExpGroups::RegExpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg-exp-group-name")
    {
        reg_exp_group_name = value;
    }
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExps()
{
    yang_name = "reg-exps"; yang_parent_name = "reg-exp-group";
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::~RegExps()
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::has_data() const
{
    for (std::size_t index=0; index<reg_exp.size(); index++)
    {
        if(reg_exp[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::has_operation() const
{
    for (std::size_t index=0; index<reg_exp.size(); index++)
    {
        if(reg_exp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exps";

    return path_buffer.str();

}

const EntityPath PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegExps' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reg-exp")
    {
        for(auto const & c : reg_exp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp>();
        c->parent = this;
        reg_exp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reg_exp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::RegExpGroups::RegExpGroup::RegExps::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::RegExp()
    :
    reg_exp_index{YType::uint32, "reg-exp-index"},
    reg_exp_string{YType::str, "reg-exp-string"}
{
    yang_name = "reg-exp"; yang_parent_name = "reg-exps";
}

PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::~RegExp()
{
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::has_data() const
{
    return reg_exp_index.is_set
	|| reg_exp_string.is_set;
}

bool PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::has_operation() const
{
    return is_set(operation)
	|| is_set(reg_exp_index.operation)
	|| is_set(reg_exp_string.operation);
}

std::string PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-exp" <<"[reg-exp-index='" <<reg_exp_index <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegExp' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reg_exp_index.is_set || is_set(reg_exp_index.operation)) leaf_name_data.push_back(reg_exp_index.get_name_leafdata());
    if (reg_exp_string.is_set || is_set(reg_exp_string.operation)) leaf_name_data.push_back(reg_exp_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::RegExpGroups::RegExpGroup::RegExps::RegExp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reg-exp-index")
    {
        reg_exp_index = value;
    }
    if(value_path == "reg-exp-string")
    {
        reg_exp_string = value;
    }
}

PerfMgmt::Threshold::Threshold()
    :
    basic_counter_interface(std::make_shared<PerfMgmt::Threshold::BasicCounterInterface>())
	,bgp(std::make_shared<PerfMgmt::Threshold::Bgp>())
	,cpu_node(std::make_shared<PerfMgmt::Threshold::CpuNode>())
	,data_rate_interface(std::make_shared<PerfMgmt::Threshold::DataRateInterface>())
	,generic_counter_interface(std::make_shared<PerfMgmt::Threshold::GenericCounterInterface>())
	,ldp_mpls(std::make_shared<PerfMgmt::Threshold::LdpMpls>())
	,memory_node(std::make_shared<PerfMgmt::Threshold::MemoryNode>())
	,ospfv2_protocol(std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol>())
	,ospfv3_protocol(std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol>())
	,process_node(std::make_shared<PerfMgmt::Threshold::ProcessNode>())
{
    basic_counter_interface->parent = this;

    bgp->parent = this;

    cpu_node->parent = this;

    data_rate_interface->parent = this;

    generic_counter_interface->parent = this;

    ldp_mpls->parent = this;

    memory_node->parent = this;

    ospfv2_protocol->parent = this;

    ospfv3_protocol->parent = this;

    process_node->parent = this;

    yang_name = "threshold"; yang_parent_name = "perf-mgmt";
}

PerfMgmt::Threshold::~Threshold()
{
}

bool PerfMgmt::Threshold::has_data() const
{
    return (basic_counter_interface !=  nullptr && basic_counter_interface->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (cpu_node !=  nullptr && cpu_node->has_data())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_data())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_data())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_data())
	|| (memory_node !=  nullptr && memory_node->has_data())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_data())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_data())
	|| (process_node !=  nullptr && process_node->has_data());
}

bool PerfMgmt::Threshold::has_operation() const
{
    return is_set(operation)
	|| (basic_counter_interface !=  nullptr && basic_counter_interface->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (cpu_node !=  nullptr && cpu_node->has_operation())
	|| (data_rate_interface !=  nullptr && data_rate_interface->has_operation())
	|| (generic_counter_interface !=  nullptr && generic_counter_interface->has_operation())
	|| (ldp_mpls !=  nullptr && ldp_mpls->has_operation())
	|| (memory_node !=  nullptr && memory_node->has_operation())
	|| (ospfv2_protocol !=  nullptr && ospfv2_protocol->has_operation())
	|| (ospfv3_protocol !=  nullptr && ospfv3_protocol->has_operation())
	|| (process_node !=  nullptr && process_node->has_operation());
}

std::string PerfMgmt::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-counter-interface")
    {
        if(basic_counter_interface == nullptr)
        {
            basic_counter_interface = std::make_shared<PerfMgmt::Threshold::BasicCounterInterface>();
        }
        return basic_counter_interface;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<PerfMgmt::Threshold::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "cpu-node")
    {
        if(cpu_node == nullptr)
        {
            cpu_node = std::make_shared<PerfMgmt::Threshold::CpuNode>();
        }
        return cpu_node;
    }

    if(child_yang_name == "data-rate-interface")
    {
        if(data_rate_interface == nullptr)
        {
            data_rate_interface = std::make_shared<PerfMgmt::Threshold::DataRateInterface>();
        }
        return data_rate_interface;
    }

    if(child_yang_name == "generic-counter-interface")
    {
        if(generic_counter_interface == nullptr)
        {
            generic_counter_interface = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface>();
        }
        return generic_counter_interface;
    }

    if(child_yang_name == "ldp-mpls")
    {
        if(ldp_mpls == nullptr)
        {
            ldp_mpls = std::make_shared<PerfMgmt::Threshold::LdpMpls>();
        }
        return ldp_mpls;
    }

    if(child_yang_name == "memory-node")
    {
        if(memory_node == nullptr)
        {
            memory_node = std::make_shared<PerfMgmt::Threshold::MemoryNode>();
        }
        return memory_node;
    }

    if(child_yang_name == "ospfv2-protocol")
    {
        if(ospfv2_protocol == nullptr)
        {
            ospfv2_protocol = std::make_shared<PerfMgmt::Threshold::Ospfv2Protocol>();
        }
        return ospfv2_protocol;
    }

    if(child_yang_name == "ospfv3-protocol")
    {
        if(ospfv3_protocol == nullptr)
        {
            ospfv3_protocol = std::make_shared<PerfMgmt::Threshold::Ospfv3Protocol>();
        }
        return ospfv3_protocol;
    }

    if(child_yang_name == "process-node")
    {
        if(process_node == nullptr)
        {
            process_node = std::make_shared<PerfMgmt::Threshold::ProcessNode>();
        }
        return process_node;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_counter_interface != nullptr)
    {
        children["basic-counter-interface"] = basic_counter_interface;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(cpu_node != nullptr)
    {
        children["cpu-node"] = cpu_node;
    }

    if(data_rate_interface != nullptr)
    {
        children["data-rate-interface"] = data_rate_interface;
    }

    if(generic_counter_interface != nullptr)
    {
        children["generic-counter-interface"] = generic_counter_interface;
    }

    if(ldp_mpls != nullptr)
    {
        children["ldp-mpls"] = ldp_mpls;
    }

    if(memory_node != nullptr)
    {
        children["memory-node"] = memory_node;
    }

    if(ospfv2_protocol != nullptr)
    {
        children["ospfv2-protocol"] = ospfv2_protocol;
    }

    if(ospfv3_protocol != nullptr)
    {
        children["ospfv3-protocol"] = ospfv3_protocol;
    }

    if(process_node != nullptr)
    {
        children["process-node"] = process_node;
    }

    return children;
}

void PerfMgmt::Threshold::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterface()
    :
    generic_counter_interface_templates(std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates>())
{
    generic_counter_interface_templates->parent = this;

    yang_name = "generic-counter-interface"; yang_parent_name = "threshold";
}

PerfMgmt::Threshold::GenericCounterInterface::~GenericCounterInterface()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::has_data() const
{
    return (generic_counter_interface_templates !=  nullptr && generic_counter_interface_templates->has_data());
}

bool PerfMgmt::Threshold::GenericCounterInterface::has_operation() const
{
    return is_set(operation)
	|| (generic_counter_interface_templates !=  nullptr && generic_counter_interface_templates->has_operation());
}

std::string PerfMgmt::Threshold::GenericCounterInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface-templates")
    {
        if(generic_counter_interface_templates == nullptr)
        {
            generic_counter_interface_templates = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates>();
        }
        return generic_counter_interface_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(generic_counter_interface_templates != nullptr)
    {
        children["generic-counter-interface-templates"] = generic_counter_interface_templates;
    }

    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplates()
{
    yang_name = "generic-counter-interface-templates"; yang_parent_name = "generic-counter-interface";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::~GenericCounterInterfaceTemplates()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::has_data() const
{
    for (std::size_t index=0; index<generic_counter_interface_template.size(); index++)
    {
        if(generic_counter_interface_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::has_operation() const
{
    for (std::size_t index=0; index<generic_counter_interface_template.size(); index++)
    {
        if(generic_counter_interface_template[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface-templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/generic-counter-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-counter-interface-template")
    {
        for(auto const & c : generic_counter_interface_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate>();
        c->parent = this;
        generic_counter_interface_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_counter_interface_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::GenericCounterInterfaceTemplate()
    :
    template_name{YType::str, "template-name"},
    reg_exp_group{YType::str, "reg-exp-group"},
    sample_interval{YType::uint32, "sample-interval"},
    vrf_group{YType::str, "vrf-group"}
    	,
    in_broadcast_pkts(nullptr) // presence node
	,in_multicast_pkts(nullptr) // presence node
	,in_octets(nullptr) // presence node
	,in_packets(nullptr) // presence node
	,in_ucast_pkts(nullptr) // presence node
	,input_crc(nullptr) // presence node
	,input_frame(nullptr) // presence node
	,input_overrun(nullptr) // presence node
	,input_queue_drops(nullptr) // presence node
	,input_total_drops(nullptr) // presence node
	,input_total_errors(nullptr) // presence node
	,input_unknown_proto(nullptr) // presence node
	,out_broadcast_pkts(nullptr) // presence node
	,out_multicast_pkts(nullptr) // presence node
	,out_octets(nullptr) // presence node
	,out_packets(nullptr) // presence node
	,out_ucast_pkts(nullptr) // presence node
	,output_total_drops(nullptr) // presence node
	,output_total_errors(nullptr) // presence node
	,output_underrun(nullptr) // presence node
{
    yang_name = "generic-counter-interface-template"; yang_parent_name = "generic-counter-interface-templates";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::~GenericCounterInterfaceTemplate()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::has_data() const
{
    return template_name.is_set
	|| reg_exp_group.is_set
	|| sample_interval.is_set
	|| vrf_group.is_set
	|| (in_broadcast_pkts !=  nullptr && in_broadcast_pkts->has_data())
	|| (in_multicast_pkts !=  nullptr && in_multicast_pkts->has_data())
	|| (in_octets !=  nullptr && in_octets->has_data())
	|| (in_packets !=  nullptr && in_packets->has_data())
	|| (in_ucast_pkts !=  nullptr && in_ucast_pkts->has_data())
	|| (input_crc !=  nullptr && input_crc->has_data())
	|| (input_frame !=  nullptr && input_frame->has_data())
	|| (input_overrun !=  nullptr && input_overrun->has_data())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_data())
	|| (input_total_drops !=  nullptr && input_total_drops->has_data())
	|| (input_total_errors !=  nullptr && input_total_errors->has_data())
	|| (input_unknown_proto !=  nullptr && input_unknown_proto->has_data())
	|| (out_broadcast_pkts !=  nullptr && out_broadcast_pkts->has_data())
	|| (out_multicast_pkts !=  nullptr && out_multicast_pkts->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_packets !=  nullptr && out_packets->has_data())
	|| (out_ucast_pkts !=  nullptr && out_ucast_pkts->has_data())
	|| (output_total_drops !=  nullptr && output_total_drops->has_data())
	|| (output_total_errors !=  nullptr && output_total_errors->has_data())
	|| (output_underrun !=  nullptr && output_underrun->has_data());
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(reg_exp_group.operation)
	|| is_set(sample_interval.operation)
	|| is_set(vrf_group.operation)
	|| (in_broadcast_pkts !=  nullptr && in_broadcast_pkts->has_operation())
	|| (in_multicast_pkts !=  nullptr && in_multicast_pkts->has_operation())
	|| (in_octets !=  nullptr && in_octets->has_operation())
	|| (in_packets !=  nullptr && in_packets->has_operation())
	|| (in_ucast_pkts !=  nullptr && in_ucast_pkts->has_operation())
	|| (input_crc !=  nullptr && input_crc->has_operation())
	|| (input_frame !=  nullptr && input_frame->has_operation())
	|| (input_overrun !=  nullptr && input_overrun->has_operation())
	|| (input_queue_drops !=  nullptr && input_queue_drops->has_operation())
	|| (input_total_drops !=  nullptr && input_total_drops->has_operation())
	|| (input_total_errors !=  nullptr && input_total_errors->has_operation())
	|| (input_unknown_proto !=  nullptr && input_unknown_proto->has_operation())
	|| (out_broadcast_pkts !=  nullptr && out_broadcast_pkts->has_operation())
	|| (out_multicast_pkts !=  nullptr && out_multicast_pkts->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_packets !=  nullptr && out_packets->has_operation())
	|| (out_ucast_pkts !=  nullptr && out_ucast_pkts->has_operation())
	|| (output_total_drops !=  nullptr && output_total_drops->has_operation())
	|| (output_total_errors !=  nullptr && output_total_errors->has_operation())
	|| (output_underrun !=  nullptr && output_underrun->has_operation());
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-counter-interface-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/generic-counter-interface/generic-counter-interface-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (reg_exp_group.is_set || is_set(reg_exp_group.operation)) leaf_name_data.push_back(reg_exp_group.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (vrf_group.is_set || is_set(vrf_group.operation)) leaf_name_data.push_back(vrf_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-broadcast-pkts")
    {
        if(in_broadcast_pkts == nullptr)
        {
            in_broadcast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts>();
        }
        return in_broadcast_pkts;
    }

    if(child_yang_name == "in-multicast-pkts")
    {
        if(in_multicast_pkts == nullptr)
        {
            in_multicast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts>();
        }
        return in_multicast_pkts;
    }

    if(child_yang_name == "in-octets")
    {
        if(in_octets == nullptr)
        {
            in_octets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets>();
        }
        return in_octets;
    }

    if(child_yang_name == "in-packets")
    {
        if(in_packets == nullptr)
        {
            in_packets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets>();
        }
        return in_packets;
    }

    if(child_yang_name == "in-ucast-pkts")
    {
        if(in_ucast_pkts == nullptr)
        {
            in_ucast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts>();
        }
        return in_ucast_pkts;
    }

    if(child_yang_name == "input-crc")
    {
        if(input_crc == nullptr)
        {
            input_crc = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc>();
        }
        return input_crc;
    }

    if(child_yang_name == "input-frame")
    {
        if(input_frame == nullptr)
        {
            input_frame = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame>();
        }
        return input_frame;
    }

    if(child_yang_name == "input-overrun")
    {
        if(input_overrun == nullptr)
        {
            input_overrun = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun>();
        }
        return input_overrun;
    }

    if(child_yang_name == "input-queue-drops")
    {
        if(input_queue_drops == nullptr)
        {
            input_queue_drops = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops>();
        }
        return input_queue_drops;
    }

    if(child_yang_name == "input-total-drops")
    {
        if(input_total_drops == nullptr)
        {
            input_total_drops = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops>();
        }
        return input_total_drops;
    }

    if(child_yang_name == "input-total-errors")
    {
        if(input_total_errors == nullptr)
        {
            input_total_errors = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors>();
        }
        return input_total_errors;
    }

    if(child_yang_name == "input-unknown-proto")
    {
        if(input_unknown_proto == nullptr)
        {
            input_unknown_proto = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto>();
        }
        return input_unknown_proto;
    }

    if(child_yang_name == "out-broadcast-pkts")
    {
        if(out_broadcast_pkts == nullptr)
        {
            out_broadcast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts>();
        }
        return out_broadcast_pkts;
    }

    if(child_yang_name == "out-multicast-pkts")
    {
        if(out_multicast_pkts == nullptr)
        {
            out_multicast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts>();
        }
        return out_multicast_pkts;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-packets")
    {
        if(out_packets == nullptr)
        {
            out_packets = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets>();
        }
        return out_packets;
    }

    if(child_yang_name == "out-ucast-pkts")
    {
        if(out_ucast_pkts == nullptr)
        {
            out_ucast_pkts = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts>();
        }
        return out_ucast_pkts;
    }

    if(child_yang_name == "output-total-drops")
    {
        if(output_total_drops == nullptr)
        {
            output_total_drops = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops>();
        }
        return output_total_drops;
    }

    if(child_yang_name == "output-total-errors")
    {
        if(output_total_errors == nullptr)
        {
            output_total_errors = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors>();
        }
        return output_total_errors;
    }

    if(child_yang_name == "output-underrun")
    {
        if(output_underrun == nullptr)
        {
            output_underrun = std::make_shared<PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun>();
        }
        return output_underrun;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_broadcast_pkts != nullptr)
    {
        children["in-broadcast-pkts"] = in_broadcast_pkts;
    }

    if(in_multicast_pkts != nullptr)
    {
        children["in-multicast-pkts"] = in_multicast_pkts;
    }

    if(in_octets != nullptr)
    {
        children["in-octets"] = in_octets;
    }

    if(in_packets != nullptr)
    {
        children["in-packets"] = in_packets;
    }

    if(in_ucast_pkts != nullptr)
    {
        children["in-ucast-pkts"] = in_ucast_pkts;
    }

    if(input_crc != nullptr)
    {
        children["input-crc"] = input_crc;
    }

    if(input_frame != nullptr)
    {
        children["input-frame"] = input_frame;
    }

    if(input_overrun != nullptr)
    {
        children["input-overrun"] = input_overrun;
    }

    if(input_queue_drops != nullptr)
    {
        children["input-queue-drops"] = input_queue_drops;
    }

    if(input_total_drops != nullptr)
    {
        children["input-total-drops"] = input_total_drops;
    }

    if(input_total_errors != nullptr)
    {
        children["input-total-errors"] = input_total_errors;
    }

    if(input_unknown_proto != nullptr)
    {
        children["input-unknown-proto"] = input_unknown_proto;
    }

    if(out_broadcast_pkts != nullptr)
    {
        children["out-broadcast-pkts"] = out_broadcast_pkts;
    }

    if(out_multicast_pkts != nullptr)
    {
        children["out-multicast-pkts"] = out_multicast_pkts;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(out_packets != nullptr)
    {
        children["out-packets"] = out_packets;
    }

    if(out_ucast_pkts != nullptr)
    {
        children["out-ucast-pkts"] = out_ucast_pkts;
    }

    if(output_total_drops != nullptr)
    {
        children["output-total-drops"] = output_total_drops;
    }

    if(output_total_errors != nullptr)
    {
        children["output-total-errors"] = output_total_errors;
    }

    if(output_underrun != nullptr)
    {
        children["output-underrun"] = output_underrun;
    }

    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "reg-exp-group")
    {
        reg_exp_group = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "vrf-group")
    {
        vrf_group = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::InOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-octets"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::~InOctets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InOctets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::InUcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-ucast-pkts"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::~InUcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkts";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InUcastPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InUcastPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::OutUcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-ucast-pkts"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::~OutUcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkts";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutUcastPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutUcastPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::OutBroadcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-broadcast-pkts"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::~OutBroadcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-broadcast-pkts";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutBroadcastPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutBroadcastPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::OutMulticastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-multicast-pkts"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::~OutMulticastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-multicast-pkts";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutMulticastPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutMulticastPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::InputOverrun()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-overrun"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::~InputOverrun()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-overrun";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputOverrun' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputOverrun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::OutOctets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-octets"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::~OutOctets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutOctets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutOctets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::OutputUnderrun()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-underrun"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::~OutputUnderrun()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-underrun";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputUnderrun' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputUnderrun::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::InputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-total-errors"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::~InputTotalErrors()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-errors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputTotalErrors' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::OutputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-total-drops"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::~OutputTotalDrops()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-drops";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputTotalDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::InputCrc()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-crc"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::~InputCrc()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-crc";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputCrc' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputCrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::InBroadcastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-broadcast-pkts"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::~InBroadcastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-broadcast-pkts";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InBroadcastPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InBroadcastPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::InMulticastPkts()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-multicast-pkts"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::~InMulticastPkts()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-multicast-pkts";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMulticastPkts' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InMulticastPkts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::OutPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "out-packets"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::~OutPackets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-packets";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::OutputTotalErrors()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "output-total-errors"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::~OutputTotalErrors()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-total-errors";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutputTotalErrors' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::OutputTotalErrors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::InPackets()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "in-packets"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::~InPackets()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-packets";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPackets' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InPackets::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::InputUnknownProto()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-unknown-proto"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::~InputUnknownProto()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-unknown-proto";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputUnknownProto' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputUnknownProto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::InputQueueDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-queue-drops"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::~InputQueueDrops()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-queue-drops";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputQueueDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputQueueDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::InputTotalDrops()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-total-drops"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::~InputTotalDrops()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-total-drops";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputTotalDrops' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputTotalDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::InputFrame()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "input-frame"; yang_parent_name = "generic-counter-interface-template";
}

PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::~InputFrame()
{
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-frame";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InputFrame' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::GenericCounterInterface::GenericCounterInterfaceTemplates::GenericCounterInterfaceTemplate::InputFrame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMpls()
    :
    ldp_mpls_templates(std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates>())
{
    ldp_mpls_templates->parent = this;

    yang_name = "ldp-mpls"; yang_parent_name = "threshold";
}

PerfMgmt::Threshold::LdpMpls::~LdpMpls()
{
}

bool PerfMgmt::Threshold::LdpMpls::has_data() const
{
    return (ldp_mpls_templates !=  nullptr && ldp_mpls_templates->has_data());
}

bool PerfMgmt::Threshold::LdpMpls::has_operation() const
{
    return is_set(operation)
	|| (ldp_mpls_templates !=  nullptr && ldp_mpls_templates->has_operation());
}

std::string PerfMgmt::Threshold::LdpMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-mpls-templates")
    {
        if(ldp_mpls_templates == nullptr)
        {
            ldp_mpls_templates = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates>();
        }
        return ldp_mpls_templates;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ldp_mpls_templates != nullptr)
    {
        children["ldp-mpls-templates"] = ldp_mpls_templates;
    }

    return children;
}

void PerfMgmt::Threshold::LdpMpls::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplates()
{
    yang_name = "ldp-mpls-templates"; yang_parent_name = "ldp-mpls";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::~LdpMplsTemplates()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::has_data() const
{
    for (std::size_t index=0; index<ldp_mpls_template.size(); index++)
    {
        if(ldp_mpls_template[index]->has_data())
            return true;
    }
    return false;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::has_operation() const
{
    for (std::size_t index=0; index<ldp_mpls_template.size(); index++)
    {
        if(ldp_mpls_template[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls-templates";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ldp-mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-mpls-template")
    {
        for(auto const & c : ldp_mpls_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate>();
        c->parent = this;
        ldp_mpls_template.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ldp_mpls_template)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::set_value(const std::string & value_path, std::string value)
{
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LdpMplsTemplate()
    :
    template_name{YType::str, "template-name"},
    sample_interval{YType::uint32, "sample-interval"}
    	,
    address_msgs_rcvd(nullptr) // presence node
	,address_msgs_sent(nullptr) // presence node
	,address_withdraw_msgs_rcvd(nullptr) // presence node
	,address_withdraw_msgs_sent(nullptr) // presence node
	,init_msgs_rcvd(nullptr) // presence node
	,init_msgs_sent(nullptr) // presence node
	,keepalive_msgs_rcvd(nullptr) // presence node
	,keepalive_msgs_sent(nullptr) // presence node
	,label_mapping_msgs_rcvd(nullptr) // presence node
	,label_mapping_msgs_sent(nullptr) // presence node
	,label_release_msgs_rcvd(nullptr) // presence node
	,label_release_msgs_sent(nullptr) // presence node
	,label_withdraw_msgs_rcvd(nullptr) // presence node
	,label_withdraw_msgs_sent(nullptr) // presence node
	,notification_msgs_rcvd(nullptr) // presence node
	,notification_msgs_sent(nullptr) // presence node
	,total_msgs_rcvd(nullptr) // presence node
	,total_msgs_sent(nullptr) // presence node
{
    yang_name = "ldp-mpls-template"; yang_parent_name = "ldp-mpls-templates";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::~LdpMplsTemplate()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::has_data() const
{
    return template_name.is_set
	|| sample_interval.is_set
	|| (address_msgs_rcvd !=  nullptr && address_msgs_rcvd->has_data())
	|| (address_msgs_sent !=  nullptr && address_msgs_sent->has_data())
	|| (address_withdraw_msgs_rcvd !=  nullptr && address_withdraw_msgs_rcvd->has_data())
	|| (address_withdraw_msgs_sent !=  nullptr && address_withdraw_msgs_sent->has_data())
	|| (init_msgs_rcvd !=  nullptr && init_msgs_rcvd->has_data())
	|| (init_msgs_sent !=  nullptr && init_msgs_sent->has_data())
	|| (keepalive_msgs_rcvd !=  nullptr && keepalive_msgs_rcvd->has_data())
	|| (keepalive_msgs_sent !=  nullptr && keepalive_msgs_sent->has_data())
	|| (label_mapping_msgs_rcvd !=  nullptr && label_mapping_msgs_rcvd->has_data())
	|| (label_mapping_msgs_sent !=  nullptr && label_mapping_msgs_sent->has_data())
	|| (label_release_msgs_rcvd !=  nullptr && label_release_msgs_rcvd->has_data())
	|| (label_release_msgs_sent !=  nullptr && label_release_msgs_sent->has_data())
	|| (label_withdraw_msgs_rcvd !=  nullptr && label_withdraw_msgs_rcvd->has_data())
	|| (label_withdraw_msgs_sent !=  nullptr && label_withdraw_msgs_sent->has_data())
	|| (notification_msgs_rcvd !=  nullptr && notification_msgs_rcvd->has_data())
	|| (notification_msgs_sent !=  nullptr && notification_msgs_sent->has_data())
	|| (total_msgs_rcvd !=  nullptr && total_msgs_rcvd->has_data())
	|| (total_msgs_sent !=  nullptr && total_msgs_sent->has_data());
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(sample_interval.operation)
	|| (address_msgs_rcvd !=  nullptr && address_msgs_rcvd->has_operation())
	|| (address_msgs_sent !=  nullptr && address_msgs_sent->has_operation())
	|| (address_withdraw_msgs_rcvd !=  nullptr && address_withdraw_msgs_rcvd->has_operation())
	|| (address_withdraw_msgs_sent !=  nullptr && address_withdraw_msgs_sent->has_operation())
	|| (init_msgs_rcvd !=  nullptr && init_msgs_rcvd->has_operation())
	|| (init_msgs_sent !=  nullptr && init_msgs_sent->has_operation())
	|| (keepalive_msgs_rcvd !=  nullptr && keepalive_msgs_rcvd->has_operation())
	|| (keepalive_msgs_sent !=  nullptr && keepalive_msgs_sent->has_operation())
	|| (label_mapping_msgs_rcvd !=  nullptr && label_mapping_msgs_rcvd->has_operation())
	|| (label_mapping_msgs_sent !=  nullptr && label_mapping_msgs_sent->has_operation())
	|| (label_release_msgs_rcvd !=  nullptr && label_release_msgs_rcvd->has_operation())
	|| (label_release_msgs_sent !=  nullptr && label_release_msgs_sent->has_operation())
	|| (label_withdraw_msgs_rcvd !=  nullptr && label_withdraw_msgs_rcvd->has_operation())
	|| (label_withdraw_msgs_sent !=  nullptr && label_withdraw_msgs_sent->has_operation())
	|| (notification_msgs_rcvd !=  nullptr && notification_msgs_rcvd->has_operation())
	|| (notification_msgs_sent !=  nullptr && notification_msgs_sent->has_operation())
	|| (total_msgs_rcvd !=  nullptr && total_msgs_rcvd->has_operation())
	|| (total_msgs_sent !=  nullptr && total_msgs_sent->has_operation());
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-mpls-template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt/threshold/ldp-mpls/ldp-mpls-templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-msgs-rcvd")
    {
        if(address_msgs_rcvd == nullptr)
        {
            address_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsRcvd>();
        }
        return address_msgs_rcvd;
    }

    if(child_yang_name == "address-msgs-sent")
    {
        if(address_msgs_sent == nullptr)
        {
            address_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressMsgsSent>();
        }
        return address_msgs_sent;
    }

    if(child_yang_name == "address-withdraw-msgs-rcvd")
    {
        if(address_withdraw_msgs_rcvd == nullptr)
        {
            address_withdraw_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd>();
        }
        return address_withdraw_msgs_rcvd;
    }

    if(child_yang_name == "address-withdraw-msgs-sent")
    {
        if(address_withdraw_msgs_sent == nullptr)
        {
            address_withdraw_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent>();
        }
        return address_withdraw_msgs_sent;
    }

    if(child_yang_name == "init-msgs-rcvd")
    {
        if(init_msgs_rcvd == nullptr)
        {
            init_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsRcvd>();
        }
        return init_msgs_rcvd;
    }

    if(child_yang_name == "init-msgs-sent")
    {
        if(init_msgs_sent == nullptr)
        {
            init_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::InitMsgsSent>();
        }
        return init_msgs_sent;
    }

    if(child_yang_name == "keepalive-msgs-rcvd")
    {
        if(keepalive_msgs_rcvd == nullptr)
        {
            keepalive_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsRcvd>();
        }
        return keepalive_msgs_rcvd;
    }

    if(child_yang_name == "keepalive-msgs-sent")
    {
        if(keepalive_msgs_sent == nullptr)
        {
            keepalive_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::KeepaliveMsgsSent>();
        }
        return keepalive_msgs_sent;
    }

    if(child_yang_name == "label-mapping-msgs-rcvd")
    {
        if(label_mapping_msgs_rcvd == nullptr)
        {
            label_mapping_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsRcvd>();
        }
        return label_mapping_msgs_rcvd;
    }

    if(child_yang_name == "label-mapping-msgs-sent")
    {
        if(label_mapping_msgs_sent == nullptr)
        {
            label_mapping_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelMappingMsgsSent>();
        }
        return label_mapping_msgs_sent;
    }

    if(child_yang_name == "label-release-msgs-rcvd")
    {
        if(label_release_msgs_rcvd == nullptr)
        {
            label_release_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd>();
        }
        return label_release_msgs_rcvd;
    }

    if(child_yang_name == "label-release-msgs-sent")
    {
        if(label_release_msgs_sent == nullptr)
        {
            label_release_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsSent>();
        }
        return label_release_msgs_sent;
    }

    if(child_yang_name == "label-withdraw-msgs-rcvd")
    {
        if(label_withdraw_msgs_rcvd == nullptr)
        {
            label_withdraw_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd>();
        }
        return label_withdraw_msgs_rcvd;
    }

    if(child_yang_name == "label-withdraw-msgs-sent")
    {
        if(label_withdraw_msgs_sent == nullptr)
        {
            label_withdraw_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent>();
        }
        return label_withdraw_msgs_sent;
    }

    if(child_yang_name == "notification-msgs-rcvd")
    {
        if(notification_msgs_rcvd == nullptr)
        {
            notification_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd>();
        }
        return notification_msgs_rcvd;
    }

    if(child_yang_name == "notification-msgs-sent")
    {
        if(notification_msgs_sent == nullptr)
        {
            notification_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent>();
        }
        return notification_msgs_sent;
    }

    if(child_yang_name == "total-msgs-rcvd")
    {
        if(total_msgs_rcvd == nullptr)
        {
            total_msgs_rcvd = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd>();
        }
        return total_msgs_rcvd;
    }

    if(child_yang_name == "total-msgs-sent")
    {
        if(total_msgs_sent == nullptr)
        {
            total_msgs_sent = std::make_shared<PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent>();
        }
        return total_msgs_sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_msgs_rcvd != nullptr)
    {
        children["address-msgs-rcvd"] = address_msgs_rcvd;
    }

    if(address_msgs_sent != nullptr)
    {
        children["address-msgs-sent"] = address_msgs_sent;
    }

    if(address_withdraw_msgs_rcvd != nullptr)
    {
        children["address-withdraw-msgs-rcvd"] = address_withdraw_msgs_rcvd;
    }

    if(address_withdraw_msgs_sent != nullptr)
    {
        children["address-withdraw-msgs-sent"] = address_withdraw_msgs_sent;
    }

    if(init_msgs_rcvd != nullptr)
    {
        children["init-msgs-rcvd"] = init_msgs_rcvd;
    }

    if(init_msgs_sent != nullptr)
    {
        children["init-msgs-sent"] = init_msgs_sent;
    }

    if(keepalive_msgs_rcvd != nullptr)
    {
        children["keepalive-msgs-rcvd"] = keepalive_msgs_rcvd;
    }

    if(keepalive_msgs_sent != nullptr)
    {
        children["keepalive-msgs-sent"] = keepalive_msgs_sent;
    }

    if(label_mapping_msgs_rcvd != nullptr)
    {
        children["label-mapping-msgs-rcvd"] = label_mapping_msgs_rcvd;
    }

    if(label_mapping_msgs_sent != nullptr)
    {
        children["label-mapping-msgs-sent"] = label_mapping_msgs_sent;
    }

    if(label_release_msgs_rcvd != nullptr)
    {
        children["label-release-msgs-rcvd"] = label_release_msgs_rcvd;
    }

    if(label_release_msgs_sent != nullptr)
    {
        children["label-release-msgs-sent"] = label_release_msgs_sent;
    }

    if(label_withdraw_msgs_rcvd != nullptr)
    {
        children["label-withdraw-msgs-rcvd"] = label_withdraw_msgs_rcvd;
    }

    if(label_withdraw_msgs_sent != nullptr)
    {
        children["label-withdraw-msgs-sent"] = label_withdraw_msgs_sent;
    }

    if(notification_msgs_rcvd != nullptr)
    {
        children["notification-msgs-rcvd"] = notification_msgs_rcvd;
    }

    if(notification_msgs_sent != nullptr)
    {
        children["notification-msgs-sent"] = notification_msgs_sent;
    }

    if(total_msgs_rcvd != nullptr)
    {
        children["total-msgs-rcvd"] = total_msgs_rcvd;
    }

    if(total_msgs_sent != nullptr)
    {
        children["total-msgs-sent"] = total_msgs_sent;
    }

    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::AddressWithdrawMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "address-withdraw-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::~AddressWithdrawMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-withdraw-msgs-rcvd";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressWithdrawMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::LabelWithdrawMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "label-withdraw-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::~LabelWithdrawMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-withdraw-msgs-rcvd";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelWithdrawMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::AddressWithdrawMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "address-withdraw-msgs-sent"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::~AddressWithdrawMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-withdraw-msgs-sent";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressWithdrawMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::AddressWithdrawMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::LabelWithdrawMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "label-withdraw-msgs-sent"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::~LabelWithdrawMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-withdraw-msgs-sent";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelWithdrawMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelWithdrawMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::NotificationMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "notification-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::~NotificationMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-msgs-rcvd";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NotificationMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::TotalMsgsRcvd()
    :
    end_range_value{YType::uint32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::uint32, "value"}
{
    yang_name = "total-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::~TotalMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-msgs-rcvd";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::NotificationMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "notification-msgs-sent"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::~NotificationMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-msgs-sent";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NotificationMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::NotificationMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::TotalMsgsSent()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "total-msgs-sent"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::~TotalMsgsSent()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-msgs-sent";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalMsgsSent' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::TotalMsgsSent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::LabelReleaseMsgsRcvd()
    :
    end_range_value{YType::int32, "end-range-value"},
    operator_{YType::enumeration, "operator"},
    percent{YType::boolean, "percent"},
    rearm_type{YType::enumeration, "rearm-type"},
    rearm_window{YType::uint32, "rearm-window"},
    value_{YType::int32, "value"}
{
    yang_name = "label-release-msgs-rcvd"; yang_parent_name = "ldp-mpls-template";
}

PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::~LabelReleaseMsgsRcvd()
{
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::has_data() const
{
    return end_range_value.is_set
	|| operator_.is_set
	|| percent.is_set
	|| rearm_type.is_set
	|| rearm_window.is_set
	|| value_.is_set;
}

bool PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::has_operation() const
{
    return is_set(operation)
	|| is_set(end_range_value.operation)
	|| is_set(operator_.operation)
	|| is_set(percent.operation)
	|| is_set(rearm_type.operation)
	|| is_set(rearm_window.operation)
	|| is_set(value_.operation);
}

std::string PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-release-msgs-rcvd";

    return path_buffer.str();

}

const EntityPath PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelReleaseMsgsRcvd' in Cisco_IOS_XR_manageability_perfmgmt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_range_value.is_set || is_set(end_range_value.operation)) leaf_name_data.push_back(end_range_value.get_name_leafdata());
    if (operator_.is_set || is_set(operator_.operation)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (rearm_type.is_set || is_set(rearm_type.operation)) leaf_name_data.push_back(rearm_type.get_name_leafdata());
    if (rearm_window.is_set || is_set(rearm_window.operation)) leaf_name_data.push_back(rearm_window.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerfMgmt::Threshold::LdpMpls::LdpMplsTemplates::LdpMplsTemplate::LabelReleaseMsgsRcvd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-range-value")
    {
        end_range_value = value;
    }
    if(value_path == "operator")
    {
        operator_ = value;
    }
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "rearm-type")
    {
        rearm_type = value;
    }
    if(value_path == "rearm-window")
    {
        rearm_window = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

const Enum::YLeaf PmThresholdOpEnum::eq {1, "eq"};
const Enum::YLeaf PmThresholdOpEnum::ne {2, "ne"};
const Enum::YLeaf PmThresholdOpEnum::lt {3, "lt"};
const Enum::YLeaf PmThresholdOpEnum::le {4, "le"};
const Enum::YLeaf PmThresholdOpEnum::gt {5, "gt"};
const Enum::YLeaf PmThresholdOpEnum::ge {6, "ge"};
const Enum::YLeaf PmThresholdOpEnum::rg {7, "rg"};

const Enum::YLeaf PmThresholdRearmEnum::always {0, "always"};
const Enum::YLeaf PmThresholdRearmEnum::window {1, "window"};
const Enum::YLeaf PmThresholdRearmEnum::toggle {2, "toggle"};


}
}

