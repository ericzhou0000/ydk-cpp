
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_84.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_78.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_77.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_75.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_71.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_72.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_74.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_69.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_83.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_81.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_86.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_68.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_85.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_79.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlSendDropArray' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NumRecvDrop()
{
    yang_name = "num-recv-drop"; yang_parent_name = "npl-priority-statistic";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::~NumRecvDrop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NumRecvDrop' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nsr-pl-recv-drop-array")
    {
        for(auto const & c : nsr_pl_recv_drop_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(std::move(c));
        children[segment_path] = nsr_pl_recv_drop_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::get_children()
{
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPlRecvDropArray' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplPriorityStatistic::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::NplEndpoint()
    :
    endpoint_active_flag{YType::boolean, "endpoint-active-flag"},
    endpoint_handle{YType::uint64, "endpoint-handle"},
    endpoint_issu_role{YType::str, "endpoint-issu-role"},
    endpoint_name{YType::str, "endpoint-name"},
    endpoint_stale_flag{YType::boolean, "endpoint-stale-flag"},
    expected_sequence_num{YType::uint32, "expected-sequence-num"},
    msg_size{YType::uint32, "msg-size"},
    node_id{YType::str, "node-id"},
    sync_group_name{YType::str, "sync-group-name"},
    wheel_id{YType::uint32, "wheel-id"}
{
    yang_name = "npl-endpoint"; yang_parent_name = "ds-npl";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::~NplEndpoint()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_data() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_data())
            return true;
    }
    return endpoint_active_flag.is_set
	|| endpoint_handle.is_set
	|| endpoint_issu_role.is_set
	|| endpoint_name.is_set
	|| endpoint_stale_flag.is_set
	|| expected_sequence_num.is_set
	|| msg_size.is_set
	|| node_id.is_set
	|| sync_group_name.is_set
	|| wheel_id.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::has_operation() const
{
    for (std::size_t index=0; index<endpoint.size(); index++)
    {
        if(endpoint[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(endpoint_active_flag.operation)
	|| is_set(endpoint_handle.operation)
	|| is_set(endpoint_issu_role.operation)
	|| is_set(endpoint_name.operation)
	|| is_set(endpoint_stale_flag.operation)
	|| is_set(expected_sequence_num.operation)
	|| is_set(msg_size.operation)
	|| is_set(node_id.operation)
	|| is_set(sync_group_name.operation)
	|| is_set(wheel_id.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npl-endpoint";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NplEndpoint' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_active_flag.is_set || is_set(endpoint_active_flag.operation)) leaf_name_data.push_back(endpoint_active_flag.get_name_leafdata());
    if (endpoint_handle.is_set || is_set(endpoint_handle.operation)) leaf_name_data.push_back(endpoint_handle.get_name_leafdata());
    if (endpoint_issu_role.is_set || is_set(endpoint_issu_role.operation)) leaf_name_data.push_back(endpoint_issu_role.get_name_leafdata());
    if (endpoint_name.is_set || is_set(endpoint_name.operation)) leaf_name_data.push_back(endpoint_name.get_name_leafdata());
    if (endpoint_stale_flag.is_set || is_set(endpoint_stale_flag.operation)) leaf_name_data.push_back(endpoint_stale_flag.get_name_leafdata());
    if (expected_sequence_num.is_set || is_set(expected_sequence_num.operation)) leaf_name_data.push_back(expected_sequence_num.get_name_leafdata());
    if (msg_size.is_set || is_set(msg_size.operation)) leaf_name_data.push_back(msg_size.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (sync_group_name.is_set || is_set(sync_group_name.operation)) leaf_name_data.push_back(sync_group_name.get_name_leafdata());
    if (wheel_id.is_set || is_set(wheel_id.operation)) leaf_name_data.push_back(wheel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "endpoint")
    {
        for(auto const & c : endpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint>();
        c->parent = this;
        endpoint.push_back(std::move(c));
        children[segment_path] = endpoint.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::get_children()
{
    for (auto const & c : endpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "endpoint-active-flag")
    {
        endpoint_active_flag = value;
    }
    if(value_path == "endpoint-handle")
    {
        endpoint_handle = value;
    }
    if(value_path == "endpoint-issu-role")
    {
        endpoint_issu_role = value;
    }
    if(value_path == "endpoint-name")
    {
        endpoint_name = value;
    }
    if(value_path == "endpoint-stale-flag")
    {
        endpoint_stale_flag = value;
    }
    if(value_path == "expected-sequence-num")
    {
        expected_sequence_num = value;
    }
    if(value_path == "msg-size")
    {
        msg_size = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "sync-group-name")
    {
        sync_group_name = value;
    }
    if(value_path == "wheel-id")
    {
        wheel_id = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::Endpoint()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "endpoint"; yang_parent_name = "npl-endpoint";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::~Endpoint()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "endpoint";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Endpoint' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::DsNpl::NplEndpoint::Endpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::ActiveNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "active-nsr-mode-enter-time"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::~ActiveNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-nsr-mode-enter-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveNsrModeEnterTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrModeEnterTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::StandbyNsrModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "standby-nsr-mode-enter-time"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::~StandbyNsrModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-nsr-mode-enter-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbyNsrModeEnterTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::StandbyNsrModeEnterTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::ActiveNsrfoTime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "active-nsrfo-time"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::~ActiveNsrfoTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-nsrfo-time";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveNsrfoTime' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::ActiveNsrfoTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::PostitCountInfo()
    :
    postit_count{YType::uint32, "postit-count"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "postit-count-info"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::~PostitCountInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_data() const
{
    return postit_count.is_set
	|| vrf_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(postit_count.operation)
	|| is_set(vrf_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-count-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostitCountInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (postit_count.is_set || is_set(postit_count.operation)) leaf_name_data.push_back(postit_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "postit-count")
    {
        postit_count = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "postit-count-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::PostitCountInfo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::IssuMilestone()
    :
    milestone_met_timestamp{YType::uint32, "milestone-met-timestamp"},
    milestone_name{YType::str, "milestone-name"},
    milestone_start_timestamp{YType::uint32, "milestone-start-timestamp"}
{
    yang_name = "issu-milestone"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::~IssuMilestone()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_data() const
{
    return milestone_met_timestamp.is_set
	|| milestone_name.is_set
	|| milestone_start_timestamp.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::has_operation() const
{
    return is_set(operation)
	|| is_set(milestone_met_timestamp.operation)
	|| is_set(milestone_name.operation)
	|| is_set(milestone_start_timestamp.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-milestone";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuMilestone' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milestone_met_timestamp.is_set || is_set(milestone_met_timestamp.operation)) leaf_name_data.push_back(milestone_met_timestamp.get_name_leafdata());
    if (milestone_name.is_set || is_set(milestone_name.operation)) leaf_name_data.push_back(milestone_name.get_name_leafdata());
    if (milestone_start_timestamp.is_set || is_set(milestone_start_timestamp.operation)) leaf_name_data.push_back(milestone_start_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Global::IssuMilestone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milestone-met-timestamp")
    {
        milestone_met_timestamp = value;
    }
    if(value_path == "milestone-name")
    {
        milestone_name = value;
    }
    if(value_path == "milestone-start-timestamp")
    {
        milestone_start_timestamp = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::Vrf_()
    :
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    high_throttled_read_count{YType::uint32, "high-throttled-read-count"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    low_throttled_read_count{YType::uint32, "low-throttled-read-count"},
    lpts_calls{YType::uint32, "lpts-calls"},
    lpts_set_up_time{YType::uint32, "lpts-set-up-time"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles_count{YType::uint32, "read-throttles-count"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{
    yang_name = "vrf"; yang_parent_name = "performance-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_data() const
{
    return data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| high_throttled_read_count.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| low_throttled_read_count.is_set
	|| lpts_calls.is_set
	|| lpts_set_up_time.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles_count.is_set
	|| subgroup_list_time.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(data_bytes_read.operation)
	|| is_set(data_bytes_written.operation)
	|| is_set(high_throttled_read_count.operation)
	|| is_set(inbound_update_messages.operation)
	|| is_set(inbound_update_messages_time.operation)
	|| is_set(io_read_time.operation)
	|| is_set(io_write_time.operation)
	|| is_set(low_throttled_read_count.operation)
	|| is_set(lpts_calls.operation)
	|| is_set(lpts_set_up_time.operation)
	|| is_set(read_calls_count.operation)
	|| is_set(read_messages_count.operation)
	|| is_set(read_throttles_count.operation)
	|| is_set(subgroup_list_time.operation)
	|| is_set(write_calls_count.operation)
	|| is_set(write_queue_calls_count.operation)
	|| is_set(write_queue_messages_count.operation)
	|| is_set(write_queue_time.operation)
	|| is_set(write_subgroup_calls_count.operation)
	|| is_set(write_subgroup_messages_count.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_bytes_read.is_set || is_set(data_bytes_read.operation)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.operation)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (high_throttled_read_count.is_set || is_set(high_throttled_read_count.operation)) leaf_name_data.push_back(high_throttled_read_count.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.operation)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.operation)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.operation)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.operation)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (low_throttled_read_count.is_set || is_set(low_throttled_read_count.operation)) leaf_name_data.push_back(low_throttled_read_count.get_name_leafdata());
    if (lpts_calls.is_set || is_set(lpts_calls.operation)) leaf_name_data.push_back(lpts_calls.get_name_leafdata());
    if (lpts_set_up_time.is_set || is_set(lpts_set_up_time.operation)) leaf_name_data.push_back(lpts_set_up_time.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.operation)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.operation)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles_count.is_set || is_set(read_throttles_count.operation)) leaf_name_data.push_back(read_throttles_count.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.operation)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.operation)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.operation)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.operation)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.operation)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.operation)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.operation)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo::PerformanceStatistics::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
    }
    if(value_path == "high-throttled-read-count")
    {
        high_throttled_read_count = value;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
    }
    if(value_path == "low-throttled-read-count")
    {
        low_throttled_read_count = value;
    }
    if(value_path == "lpts-calls")
    {
        lpts_calls = value;
    }
    if(value_path == "lpts-set-up-time")
    {
        lpts_set_up_time = value;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
    }
    if(value_path == "read-throttles-count")
    {
        read_throttles_count = value;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::~Sessions()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::Session()
    :
    neighbor_address{YType::str, "neighbor-address"},
    connection_state{YType::enumeration, "connection-state"},
    description{YType::str, "description"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    local_as{YType::uint32, "local-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    postit_pending{YType::boolean, "postit-pending"},
    remote_as{YType::uint32, "remote-as"},
    speaker_id{YType::uint8, "speaker-id"},
    vrf_name{YType::str, "vrf-name"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress>())
{
    connection_local_address->parent = this;
    children["connection-local-address"] = connection_local_address;

    connection_remote_address->parent = this;
    children["connection-remote-address"] = connection_remote_address;

    yang_name = "session"; yang_parent_name = "sessions";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::~Session()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::has_data() const
{
    return neighbor_address.is_set
	|| connection_state.is_set
	|| description.is_set
	|| is_local_address_configured.is_set
	|| local_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| postit_pending.is_set
	|| remote_as.is_set
	|| speaker_id.is_set
	|| vrf_name.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(connection_state.operation)
	|| is_set(description.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(local_as.operation)
	|| is_set(messages_queued_in.operation)
	|| is_set(messages_queued_out.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_state.operation)
	|| is_set(postit_pending.operation)
	|| is_set(remote_as.operation)
	|| is_set(speaker_id.operation)
	|| is_set(vrf_name.operation)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.operation)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.operation)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (postit_pending.is_set || is_set(postit_pending.operation)) leaf_name_data.push_back(postit_pending.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
        else
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress>();
            connection_local_address->parent = this;
            children["connection-local-address"] = connection_local_address;
        }
        return children.at("connection-local-address");
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
        else
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress>();
            connection_remote_address->parent = this;
            children["connection-remote-address"] = connection_remote_address;
        }
        return children.at("connection-remote-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::get_children()
{
    if(children.find("connection-local-address") == children.end())
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
    }

    if(children.find("connection-remote-address") == children.end())
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "postit-pending")
    {
        postit_pending = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-local-address"; yang_parent_name = "session";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-remote-address"; yang_parent_name = "session";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions::Session::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    active_bmp_servers{YType::uint8, "active-bmp-servers"},
    actual_last_write_bytes{YType::uint32, "actual-last-write-bytes"},
    actual_last_write_reset_bytes{YType::uint32, "actual-last-write-reset-bytes"},
    actual_second_last_write_bytes{YType::uint32, "actual-second-last-write-bytes"},
    actual_second_last_write_reset_bytes{YType::uint32, "actual-second-last-write-reset-bytes"},
    attempted_last_write_bytes{YType::uint32, "attempted-last-write-bytes"},
    attempted_last_write_reset_bytes{YType::uint32, "attempted-last-write-reset-bytes"},
    attempted_second_last_write_bytes{YType::uint32, "attempted-second-last-write-bytes"},
    attempted_second_last_write_reset_bytes{YType::uint32, "attempted-second-last-write-reset-bytes"},
    bfd_minintervalval{YType::uint32, "bfd-minintervalval"},
    bfd_multiplierval{YType::uint32, "bfd-multiplierval"},
    bfd_session_created_state{YType::enumeration, "bfd-session-created-state"},
    bfd_session_enable_mode{YType::enumeration, "bfd-session-enable-mode"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_state_ts{YType::uint64, "bfd-state-ts"},
    bytes_read{YType::uint32, "bytes-read"},
    bytes_written{YType::uint32, "bytes-written"},
    configured_hold_time{YType::uint16, "configured-hold-time"},
    configured_keepalive{YType::uint16, "configured-keepalive"},
    configured_min_acc_hold_time{YType::uint16, "configured-min-acc-hold-time"},
    connect_retry_interval{YType::uint16, "connect-retry-interval"},
    connection_admin_status{YType::uint32, "connection-admin-status"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_established_time{YType::uint32, "connection-established-time"},
    connection_local_port{YType::uint32, "connection-local-port"},
    connection_remote_port{YType::uint32, "connection-remote-port"},
    connection_state{YType::enumeration, "connection-state"},
    connection_up_count{YType::uint32, "connection-up-count"},
    count_last_write{YType::uint32, "count-last-write"},
    description{YType::str, "description"},
    discard_as4_path{YType::uint32, "discard-as4-path"},
    discard_data_bytes{YType::uint32, "discard-data-bytes"},
    dmz_link_bandwidth{YType::uint32, "dmz-link-bandwidth"},
    dynamic_neighbor{YType::boolean, "dynamic-neighbor"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_mode{YType::enumeration, "ebgp-send-dmz-mode"},
    ebgp_time_to_live{YType::uint32, "ebgp-time-to-live"},
    egress_peer_engineering_enabled{YType::boolean, "egress-peer-engineering-enabled"},
    error_notifies_received{YType::uint32, "error-notifies-received"},
    error_notifies_sent{YType::uint32, "error-notifies-sent"},
    fpbsn_offset{YType::uint32, "fpbsn-offset"},
    fssn_offset{YType::uint32, "fssn-offset"},
    gr_restart_time{YType::uint32, "gr-restart-time"},
    gr_stale_path_time{YType::uint32, "gr-stale-path-time"},
    graceful_restart_enabled_nbr{YType::boolean, "graceful-restart-enabled-nbr"},
    has_internal_link{YType::boolean, "has-internal-link"},
    hold_time{YType::uint16, "hold-time"},
    ignore_connected{YType::boolean, "ignore-connected"},
    internal_vpn_client{YType::boolean, "internal-vpn-client"},
    io_armed{YType::boolean, "io-armed"},
    is4_byte_as_capability_received{YType::boolean, "is4-byte-as-capability-received"},
    is4_byte_as_capability_sent{YType::boolean, "is4-byte-as-capability-sent"},
    is_administratively_shut_down{YType::boolean, "is-administratively-shut-down"},
    is_capability_negotiation_performed{YType::boolean, "is-capability-negotiation-performed"},
    is_capability_negotiation_suppressed{YType::boolean, "is-capability-negotiation-suppressed"},
    is_ebgp_multihop_bgpmpls_forwarding_disabled{YType::boolean, "is-ebgp-multihop-bgpmpls-forwarding-disabled"},
    is_ebgp_peer_as_league{YType::boolean, "is-ebgp-peer-as-league"},
    is_ebgp_peer_common_admin{YType::boolean, "is-ebgp-peer-common-admin"},
    is_external_neighbor_not_directly_connected{YType::boolean, "is-external-neighbor-not-directly-connected"},
    is_gr_aware{YType::boolean, "is-gr-aware"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    is_neighbor_max_prefix_shutdown{YType::boolean, "is-neighbor-max-prefix-shutdown"},
    is_out_of_memory_forced_up{YType::boolean, "is-out-of-memory-forced-up"},
    is_out_of_memory_shutdown{YType::boolean, "is-out-of-memory-shutdown"},
    is_passive_close{YType::boolean, "is-passive-close"},
    is_read_disabled{YType::boolean, "is-read-disabled"},
    is_route_refresh_capability_received{YType::boolean, "is-route-refresh-capability-received"},
    is_route_refresh_old_capability_received{YType::boolean, "is-route-refresh-old-capability-received"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    last_ackd_seq_no{YType::uint32, "last-ackd-seq-no"},
    last_k_aerror_reset{YType::uint32, "last-k-aerror-reset"},
    last_k_aexpiry_reset{YType::uint32, "last-k-aexpiry-reset"},
    last_k_anotsent_reset{YType::uint32, "last-k-anotsent-reset"},
    last_k_astart_reset{YType::uint32, "last-k-astart-reset"},
    last_notify_error_code{YType::uint8, "last-notify-error-code"},
    last_notify_error_subcode{YType::uint8, "last-notify-error-subcode"},
    last_write_event{YType::uint32, "last-write-event"},
    local_as{YType::uint32, "local-as"},
    local_as_dual_as{YType::boolean, "local-as-dual-as"},
    local_as_dual_as_mode_native{YType::boolean, "local-as-dual-as-mode-native"},
    local_as_no_prepend{YType::boolean, "local-as-no-prepend"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    messages_received{YType::uint32, "messages-received"},
    messages_sent{YType::uint32, "messages-sent"},
    min_advertise_interval{YType::uint32, "min-advertise-interval"},
    min_advertise_interval_msecs{YType::uint32, "min-advertise-interval-msecs"},
    min_origination_interval{YType::uint16, "min-origination-interval"},
    msg_log_in{YType::uint32, "msg-log-in"},
    msg_log_out{YType::uint32, "msg-log-out"},
    multi_protocol_capability_received{YType::boolean, "multi-protocol-capability-received"},
    nbr_cluster_id{YType::uint32, "nbr-cluster-id"},
    nbr_enforce_first_as{YType::boolean, "nbr-enforce-first-as"},
    nbr_in_cluster{YType::uint8, "nbr-in-cluster"},
    negotiated_protocol_version{YType::uint16, "negotiated-protocol-version"},
    neighbor_interface_handle{YType::uint32, "neighbor-interface-handle"},
    neighbor_local_as{YType::uint32, "neighbor-local-as"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    open_check_error_code{YType::enumeration, "open-check-error-code"},
    peer_error_code{YType::uint32, "peer-error-code"},
    peer_reset_reason{YType::enumeration, "peer-reset-reason"},
    previous_connection_state{YType::uint32, "previous-connection-state"},
    read_armed{YType::boolean, "read-armed"},
    remote_as{YType::uint32, "remote-as"},
    remote_as_number{YType::uint32, "remote-as-number"},
    reset_notification_sent{YType::boolean, "reset-notification-sent"},
    reset_reason{YType::enumeration, "reset-reason"},
    router_id{YType::str, "router-id"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_disable{YType::boolean, "rpki-disable"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    second_last_k_aexpiry_reset{YType::uint32, "second-last-k-aexpiry-reset"},
    second_last_k_astart_reset{YType::uint32, "second-last-k-astart-reset"},
    second_last_write_event{YType::uint32, "second-last-write-event"},
    socket_read_bytes{YType::uint32, "socket-read-bytes"},
    speaker_id{YType::uint8, "speaker-id"},
    standby_rp{YType::boolean, "standby-rp"},
    suppress4_byte_as{YType::boolean, "suppress4-byte-as"},
    tcp_session_open_mode{YType::enumeration, "tcp-session-open-mode"},
    tcpmss{YType::uint32, "tcpmss"},
    time_last_cb{YType::uint64, "time-last-cb"},
    time_last_cb_reset{YType::uint32, "time-last-cb-reset"},
    time_last_fb{YType::uint64, "time-last-fb"},
    time_since_connection_last_dropped{YType::uint32, "time-since-connection-last-dropped"},
    time_since_last_read{YType::uint32, "time-since-last-read"},
    time_since_last_read_reset{YType::uint32, "time-since-last-read-reset"},
    time_since_last_update{YType::uint32, "time-since-last-update"},
    time_since_last_write{YType::uint32, "time-since-last-write"},
    time_since_last_write_reset{YType::uint32, "time-since-last-write-reset"},
    time_since_second_last_write{YType::uint32, "time-since-second-last-write"},
    time_since_second_last_write_reset{YType::uint32, "time-since-second-last-write-reset"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    update_bytes_read{YType::uint32, "update-bytes-read"},
    update_messages_in{YType::uint32, "update-messages-in"},
    update_messages_out{YType::uint32, "update-messages-out"},
    vrf_name{YType::str, "vrf-name"},
    write_armed{YType::boolean, "write-armed"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress>())
	,graceful_maintenance(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance>())
	,message_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics>())
	,received_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo>())
	,send_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo>())
	,tcp_init_sync_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec>())
	,tcp_init_sync_phase_two_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec>())
	,tcp_init_sync_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec>())
{
    connection_local_address->parent = this;
    children["connection-local-address"] = connection_local_address;

    connection_remote_address->parent = this;
    children["connection-remote-address"] = connection_remote_address;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    message_statistics->parent = this;
    children["message-statistics"] = message_statistics;

    performance_statistics->parent = this;
    children["performance-statistics"] = performance_statistics;

    received_notification_info->parent = this;
    children["received-notification-info"] = received_notification_info;

    send_notification_info->parent = this;
    children["send-notification-info"] = send_notification_info;

    tcp_init_sync_done_time_spec->parent = this;
    children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;

    tcp_init_sync_phase_two_time_spec->parent = this;
    children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;

    tcp_init_sync_time_spec->parent = this;
    children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| active_bmp_servers.is_set
	|| actual_last_write_bytes.is_set
	|| actual_last_write_reset_bytes.is_set
	|| actual_second_last_write_bytes.is_set
	|| actual_second_last_write_reset_bytes.is_set
	|| attempted_last_write_bytes.is_set
	|| attempted_last_write_reset_bytes.is_set
	|| attempted_second_last_write_bytes.is_set
	|| attempted_second_last_write_reset_bytes.is_set
	|| bfd_minintervalval.is_set
	|| bfd_multiplierval.is_set
	|| bfd_session_created_state.is_set
	|| bfd_session_enable_mode.is_set
	|| bfd_session_state.is_set
	|| bfd_state_ts.is_set
	|| bytes_read.is_set
	|| bytes_written.is_set
	|| configured_hold_time.is_set
	|| configured_keepalive.is_set
	|| configured_min_acc_hold_time.is_set
	|| connect_retry_interval.is_set
	|| connection_admin_status.is_set
	|| connection_down_count.is_set
	|| connection_established_time.is_set
	|| connection_local_port.is_set
	|| connection_remote_port.is_set
	|| connection_state.is_set
	|| connection_up_count.is_set
	|| count_last_write.is_set
	|| description.is_set
	|| discard_as4_path.is_set
	|| discard_data_bytes.is_set
	|| dmz_link_bandwidth.is_set
	|| dynamic_neighbor.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_mode.is_set
	|| ebgp_time_to_live.is_set
	|| egress_peer_engineering_enabled.is_set
	|| error_notifies_received.is_set
	|| error_notifies_sent.is_set
	|| fpbsn_offset.is_set
	|| fssn_offset.is_set
	|| gr_restart_time.is_set
	|| gr_stale_path_time.is_set
	|| graceful_restart_enabled_nbr.is_set
	|| has_internal_link.is_set
	|| hold_time.is_set
	|| ignore_connected.is_set
	|| internal_vpn_client.is_set
	|| io_armed.is_set
	|| is4_byte_as_capability_received.is_set
	|| is4_byte_as_capability_sent.is_set
	|| is_administratively_shut_down.is_set
	|| is_capability_negotiation_performed.is_set
	|| is_capability_negotiation_suppressed.is_set
	|| is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set
	|| is_ebgp_peer_as_league.is_set
	|| is_ebgp_peer_common_admin.is_set
	|| is_external_neighbor_not_directly_connected.is_set
	|| is_gr_aware.is_set
	|| is_local_address_configured.is_set
	|| is_neighbor_max_prefix_shutdown.is_set
	|| is_out_of_memory_forced_up.is_set
	|| is_out_of_memory_shutdown.is_set
	|| is_passive_close.is_set
	|| is_read_disabled.is_set
	|| is_route_refresh_capability_received.is_set
	|| is_route_refresh_old_capability_received.is_set
	|| keep_alive_time.is_set
	|| last_ackd_seq_no.is_set
	|| last_k_aerror_reset.is_set
	|| last_k_aexpiry_reset.is_set
	|| last_k_anotsent_reset.is_set
	|| last_k_astart_reset.is_set
	|| last_notify_error_code.is_set
	|| last_notify_error_subcode.is_set
	|| last_write_event.is_set
	|| local_as.is_set
	|| local_as_dual_as.is_set
	|| local_as_dual_as_mode_native.is_set
	|| local_as_no_prepend.is_set
	|| local_as_replace_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| min_advertise_interval.is_set
	|| min_advertise_interval_msecs.is_set
	|| min_origination_interval.is_set
	|| msg_log_in.is_set
	|| msg_log_out.is_set
	|| multi_protocol_capability_received.is_set
	|| nbr_cluster_id.is_set
	|| nbr_enforce_first_as.is_set
	|| nbr_in_cluster.is_set
	|| negotiated_protocol_version.is_set
	|| neighbor_interface_handle.is_set
	|| neighbor_local_as.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| open_check_error_code.is_set
	|| peer_error_code.is_set
	|| peer_reset_reason.is_set
	|| previous_connection_state.is_set
	|| read_armed.is_set
	|| remote_as.is_set
	|| remote_as_number.is_set
	|| reset_notification_sent.is_set
	|| reset_reason.is_set
	|| router_id.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_disable.is_set
	|| rpki_signal_ibgp.is_set
	|| rpki_use_validity.is_set
	|| second_last_k_aexpiry_reset.is_set
	|| second_last_k_astart_reset.is_set
	|| second_last_write_event.is_set
	|| socket_read_bytes.is_set
	|| speaker_id.is_set
	|| standby_rp.is_set
	|| suppress4_byte_as.is_set
	|| tcp_session_open_mode.is_set
	|| tcpmss.is_set
	|| time_last_cb.is_set
	|| time_last_cb_reset.is_set
	|| time_last_fb.is_set
	|| time_since_connection_last_dropped.is_set
	|| time_since_last_read.is_set
	|| time_since_last_read_reset.is_set
	|| time_since_last_update.is_set
	|| time_since_last_write.is_set
	|| time_since_last_write_reset.is_set
	|| time_since_second_last_write.is_set
	|| time_since_second_last_write_reset.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| ttl_security_enabled.is_set
	|| update_bytes_read.is_set
	|| update_messages_in.is_set
	|| update_messages_out.is_set
	|| vrf_name.is_set
	|| write_armed.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (message_statistics !=  nullptr && message_statistics->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (received_notification_info !=  nullptr && received_notification_info->has_data())
	|| (send_notification_info !=  nullptr && send_notification_info->has_data())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_data())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_data())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(active_bmp_servers.operation)
	|| is_set(actual_last_write_bytes.operation)
	|| is_set(actual_last_write_reset_bytes.operation)
	|| is_set(actual_second_last_write_bytes.operation)
	|| is_set(actual_second_last_write_reset_bytes.operation)
	|| is_set(attempted_last_write_bytes.operation)
	|| is_set(attempted_last_write_reset_bytes.operation)
	|| is_set(attempted_second_last_write_bytes.operation)
	|| is_set(attempted_second_last_write_reset_bytes.operation)
	|| is_set(bfd_minintervalval.operation)
	|| is_set(bfd_multiplierval.operation)
	|| is_set(bfd_session_created_state.operation)
	|| is_set(bfd_session_enable_mode.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(bfd_state_ts.operation)
	|| is_set(bytes_read.operation)
	|| is_set(bytes_written.operation)
	|| is_set(configured_hold_time.operation)
	|| is_set(configured_keepalive.operation)
	|| is_set(configured_min_acc_hold_time.operation)
	|| is_set(connect_retry_interval.operation)
	|| is_set(connection_admin_status.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_established_time.operation)
	|| is_set(connection_local_port.operation)
	|| is_set(connection_remote_port.operation)
	|| is_set(connection_state.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(count_last_write.operation)
	|| is_set(description.operation)
	|| is_set(discard_as4_path.operation)
	|| is_set(discard_data_bytes.operation)
	|| is_set(dmz_link_bandwidth.operation)
	|| is_set(dynamic_neighbor.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_mode.operation)
	|| is_set(ebgp_time_to_live.operation)
	|| is_set(egress_peer_engineering_enabled.operation)
	|| is_set(error_notifies_received.operation)
	|| is_set(error_notifies_sent.operation)
	|| is_set(fpbsn_offset.operation)
	|| is_set(fssn_offset.operation)
	|| is_set(gr_restart_time.operation)
	|| is_set(gr_stale_path_time.operation)
	|| is_set(graceful_restart_enabled_nbr.operation)
	|| is_set(has_internal_link.operation)
	|| is_set(hold_time.operation)
	|| is_set(ignore_connected.operation)
	|| is_set(internal_vpn_client.operation)
	|| is_set(io_armed.operation)
	|| is_set(is4_byte_as_capability_received.operation)
	|| is_set(is4_byte_as_capability_sent.operation)
	|| is_set(is_administratively_shut_down.operation)
	|| is_set(is_capability_negotiation_performed.operation)
	|| is_set(is_capability_negotiation_suppressed.operation)
	|| is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)
	|| is_set(is_ebgp_peer_as_league.operation)
	|| is_set(is_ebgp_peer_common_admin.operation)
	|| is_set(is_external_neighbor_not_directly_connected.operation)
	|| is_set(is_gr_aware.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(is_neighbor_max_prefix_shutdown.operation)
	|| is_set(is_out_of_memory_forced_up.operation)
	|| is_set(is_out_of_memory_shutdown.operation)
	|| is_set(is_passive_close.operation)
	|| is_set(is_read_disabled.operation)
	|| is_set(is_route_refresh_capability_received.operation)
	|| is_set(is_route_refresh_old_capability_received.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(last_ackd_seq_no.operation)
	|| is_set(last_k_aerror_reset.operation)
	|| is_set(last_k_aexpiry_reset.operation)
	|| is_set(last_k_anotsent_reset.operation)
	|| is_set(last_k_astart_reset.operation)
	|| is_set(last_notify_error_code.operation)
	|| is_set(last_notify_error_subcode.operation)
	|| is_set(last_write_event.operation)
	|| is_set(local_as.operation)
	|| is_set(local_as_dual_as.operation)
	|| is_set(local_as_dual_as_mode_native.operation)
	|| is_set(local_as_no_prepend.operation)
	|| is_set(local_as_replace_as.operation)
	|| is_set(messages_queued_in.operation)
	|| is_set(messages_queued_out.operation)
	|| is_set(messages_received.operation)
	|| is_set(messages_sent.operation)
	|| is_set(min_advertise_interval.operation)
	|| is_set(min_advertise_interval_msecs.operation)
	|| is_set(min_origination_interval.operation)
	|| is_set(msg_log_in.operation)
	|| is_set(msg_log_out.operation)
	|| is_set(multi_protocol_capability_received.operation)
	|| is_set(nbr_cluster_id.operation)
	|| is_set(nbr_enforce_first_as.operation)
	|| is_set(nbr_in_cluster.operation)
	|| is_set(negotiated_protocol_version.operation)
	|| is_set(neighbor_interface_handle.operation)
	|| is_set(neighbor_local_as.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_state.operation)
	|| is_set(open_check_error_code.operation)
	|| is_set(peer_error_code.operation)
	|| is_set(peer_reset_reason.operation)
	|| is_set(previous_connection_state.operation)
	|| is_set(read_armed.operation)
	|| is_set(remote_as.operation)
	|| is_set(remote_as_number.operation)
	|| is_set(reset_notification_sent.operation)
	|| is_set(reset_reason.operation)
	|| is_set(router_id.operation)
	|| is_set(rpki_allow_invalid.operation)
	|| is_set(rpki_disable.operation)
	|| is_set(rpki_signal_ibgp.operation)
	|| is_set(rpki_use_validity.operation)
	|| is_set(second_last_k_aexpiry_reset.operation)
	|| is_set(second_last_k_astart_reset.operation)
	|| is_set(second_last_write_event.operation)
	|| is_set(socket_read_bytes.operation)
	|| is_set(speaker_id.operation)
	|| is_set(standby_rp.operation)
	|| is_set(suppress4_byte_as.operation)
	|| is_set(tcp_session_open_mode.operation)
	|| is_set(tcpmss.operation)
	|| is_set(time_last_cb.operation)
	|| is_set(time_last_cb_reset.operation)
	|| is_set(time_last_fb.operation)
	|| is_set(time_since_connection_last_dropped.operation)
	|| is_set(time_since_last_read.operation)
	|| is_set(time_since_last_read_reset.operation)
	|| is_set(time_since_last_update.operation)
	|| is_set(time_since_last_write.operation)
	|| is_set(time_since_last_write_reset.operation)
	|| is_set(time_since_second_last_write.operation)
	|| is_set(time_since_second_last_write_reset.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(update_bytes_read.operation)
	|| is_set(update_messages_in.operation)
	|| is_set(update_messages_out.operation)
	|| is_set(vrf_name.operation)
	|| is_set(write_armed.operation)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (message_statistics !=  nullptr && message_statistics->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (received_notification_info !=  nullptr && received_notification_info->has_operation())
	|| (send_notification_info !=  nullptr && send_notification_info->has_operation())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_operation())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_operation())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (active_bmp_servers.is_set || is_set(active_bmp_servers.operation)) leaf_name_data.push_back(active_bmp_servers.get_name_leafdata());
    if (actual_last_write_bytes.is_set || is_set(actual_last_write_bytes.operation)) leaf_name_data.push_back(actual_last_write_bytes.get_name_leafdata());
    if (actual_last_write_reset_bytes.is_set || is_set(actual_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_last_write_reset_bytes.get_name_leafdata());
    if (actual_second_last_write_bytes.is_set || is_set(actual_second_last_write_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_bytes.get_name_leafdata());
    if (actual_second_last_write_reset_bytes.is_set || is_set(actual_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_reset_bytes.get_name_leafdata());
    if (attempted_last_write_bytes.is_set || is_set(attempted_last_write_bytes.operation)) leaf_name_data.push_back(attempted_last_write_bytes.get_name_leafdata());
    if (attempted_last_write_reset_bytes.is_set || is_set(attempted_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_last_write_reset_bytes.get_name_leafdata());
    if (attempted_second_last_write_bytes.is_set || is_set(attempted_second_last_write_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_bytes.get_name_leafdata());
    if (attempted_second_last_write_reset_bytes.is_set || is_set(attempted_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_reset_bytes.get_name_leafdata());
    if (bfd_minintervalval.is_set || is_set(bfd_minintervalval.operation)) leaf_name_data.push_back(bfd_minintervalval.get_name_leafdata());
    if (bfd_multiplierval.is_set || is_set(bfd_multiplierval.operation)) leaf_name_data.push_back(bfd_multiplierval.get_name_leafdata());
    if (bfd_session_created_state.is_set || is_set(bfd_session_created_state.operation)) leaf_name_data.push_back(bfd_session_created_state.get_name_leafdata());
    if (bfd_session_enable_mode.is_set || is_set(bfd_session_enable_mode.operation)) leaf_name_data.push_back(bfd_session_enable_mode.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_state_ts.is_set || is_set(bfd_state_ts.operation)) leaf_name_data.push_back(bfd_state_ts.get_name_leafdata());
    if (bytes_read.is_set || is_set(bytes_read.operation)) leaf_name_data.push_back(bytes_read.get_name_leafdata());
    if (bytes_written.is_set || is_set(bytes_written.operation)) leaf_name_data.push_back(bytes_written.get_name_leafdata());
    if (configured_hold_time.is_set || is_set(configured_hold_time.operation)) leaf_name_data.push_back(configured_hold_time.get_name_leafdata());
    if (configured_keepalive.is_set || is_set(configured_keepalive.operation)) leaf_name_data.push_back(configured_keepalive.get_name_leafdata());
    if (configured_min_acc_hold_time.is_set || is_set(configured_min_acc_hold_time.operation)) leaf_name_data.push_back(configured_min_acc_hold_time.get_name_leafdata());
    if (connect_retry_interval.is_set || is_set(connect_retry_interval.operation)) leaf_name_data.push_back(connect_retry_interval.get_name_leafdata());
    if (connection_admin_status.is_set || is_set(connection_admin_status.operation)) leaf_name_data.push_back(connection_admin_status.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_established_time.is_set || is_set(connection_established_time.operation)) leaf_name_data.push_back(connection_established_time.get_name_leafdata());
    if (connection_local_port.is_set || is_set(connection_local_port.operation)) leaf_name_data.push_back(connection_local_port.get_name_leafdata());
    if (connection_remote_port.is_set || is_set(connection_remote_port.operation)) leaf_name_data.push_back(connection_remote_port.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (count_last_write.is_set || is_set(count_last_write.operation)) leaf_name_data.push_back(count_last_write.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (discard_as4_path.is_set || is_set(discard_as4_path.operation)) leaf_name_data.push_back(discard_as4_path.get_name_leafdata());
    if (discard_data_bytes.is_set || is_set(discard_data_bytes.operation)) leaf_name_data.push_back(discard_data_bytes.get_name_leafdata());
    if (dmz_link_bandwidth.is_set || is_set(dmz_link_bandwidth.operation)) leaf_name_data.push_back(dmz_link_bandwidth.get_name_leafdata());
    if (dynamic_neighbor.is_set || is_set(dynamic_neighbor.operation)) leaf_name_data.push_back(dynamic_neighbor.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_mode.is_set || is_set(ebgp_send_dmz_mode.operation)) leaf_name_data.push_back(ebgp_send_dmz_mode.get_name_leafdata());
    if (ebgp_time_to_live.is_set || is_set(ebgp_time_to_live.operation)) leaf_name_data.push_back(ebgp_time_to_live.get_name_leafdata());
    if (egress_peer_engineering_enabled.is_set || is_set(egress_peer_engineering_enabled.operation)) leaf_name_data.push_back(egress_peer_engineering_enabled.get_name_leafdata());
    if (error_notifies_received.is_set || is_set(error_notifies_received.operation)) leaf_name_data.push_back(error_notifies_received.get_name_leafdata());
    if (error_notifies_sent.is_set || is_set(error_notifies_sent.operation)) leaf_name_data.push_back(error_notifies_sent.get_name_leafdata());
    if (fpbsn_offset.is_set || is_set(fpbsn_offset.operation)) leaf_name_data.push_back(fpbsn_offset.get_name_leafdata());
    if (fssn_offset.is_set || is_set(fssn_offset.operation)) leaf_name_data.push_back(fssn_offset.get_name_leafdata());
    if (gr_restart_time.is_set || is_set(gr_restart_time.operation)) leaf_name_data.push_back(gr_restart_time.get_name_leafdata());
    if (gr_stale_path_time.is_set || is_set(gr_stale_path_time.operation)) leaf_name_data.push_back(gr_stale_path_time.get_name_leafdata());
    if (graceful_restart_enabled_nbr.is_set || is_set(graceful_restart_enabled_nbr.operation)) leaf_name_data.push_back(graceful_restart_enabled_nbr.get_name_leafdata());
    if (has_internal_link.is_set || is_set(has_internal_link.operation)) leaf_name_data.push_back(has_internal_link.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (ignore_connected.is_set || is_set(ignore_connected.operation)) leaf_name_data.push_back(ignore_connected.get_name_leafdata());
    if (internal_vpn_client.is_set || is_set(internal_vpn_client.operation)) leaf_name_data.push_back(internal_vpn_client.get_name_leafdata());
    if (io_armed.is_set || is_set(io_armed.operation)) leaf_name_data.push_back(io_armed.get_name_leafdata());
    if (is4_byte_as_capability_received.is_set || is_set(is4_byte_as_capability_received.operation)) leaf_name_data.push_back(is4_byte_as_capability_received.get_name_leafdata());
    if (is4_byte_as_capability_sent.is_set || is_set(is4_byte_as_capability_sent.operation)) leaf_name_data.push_back(is4_byte_as_capability_sent.get_name_leafdata());
    if (is_administratively_shut_down.is_set || is_set(is_administratively_shut_down.operation)) leaf_name_data.push_back(is_administratively_shut_down.get_name_leafdata());
    if (is_capability_negotiation_performed.is_set || is_set(is_capability_negotiation_performed.operation)) leaf_name_data.push_back(is_capability_negotiation_performed.get_name_leafdata());
    if (is_capability_negotiation_suppressed.is_set || is_set(is_capability_negotiation_suppressed.operation)) leaf_name_data.push_back(is_capability_negotiation_suppressed.get_name_leafdata());
    if (is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set || is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)) leaf_name_data.push_back(is_ebgp_multihop_bgpmpls_forwarding_disabled.get_name_leafdata());
    if (is_ebgp_peer_as_league.is_set || is_set(is_ebgp_peer_as_league.operation)) leaf_name_data.push_back(is_ebgp_peer_as_league.get_name_leafdata());
    if (is_ebgp_peer_common_admin.is_set || is_set(is_ebgp_peer_common_admin.operation)) leaf_name_data.push_back(is_ebgp_peer_common_admin.get_name_leafdata());
    if (is_external_neighbor_not_directly_connected.is_set || is_set(is_external_neighbor_not_directly_connected.operation)) leaf_name_data.push_back(is_external_neighbor_not_directly_connected.get_name_leafdata());
    if (is_gr_aware.is_set || is_set(is_gr_aware.operation)) leaf_name_data.push_back(is_gr_aware.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (is_neighbor_max_prefix_shutdown.is_set || is_set(is_neighbor_max_prefix_shutdown.operation)) leaf_name_data.push_back(is_neighbor_max_prefix_shutdown.get_name_leafdata());
    if (is_out_of_memory_forced_up.is_set || is_set(is_out_of_memory_forced_up.operation)) leaf_name_data.push_back(is_out_of_memory_forced_up.get_name_leafdata());
    if (is_out_of_memory_shutdown.is_set || is_set(is_out_of_memory_shutdown.operation)) leaf_name_data.push_back(is_out_of_memory_shutdown.get_name_leafdata());
    if (is_passive_close.is_set || is_set(is_passive_close.operation)) leaf_name_data.push_back(is_passive_close.get_name_leafdata());
    if (is_read_disabled.is_set || is_set(is_read_disabled.operation)) leaf_name_data.push_back(is_read_disabled.get_name_leafdata());
    if (is_route_refresh_capability_received.is_set || is_set(is_route_refresh_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_capability_received.get_name_leafdata());
    if (is_route_refresh_old_capability_received.is_set || is_set(is_route_refresh_old_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_old_capability_received.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (last_ackd_seq_no.is_set || is_set(last_ackd_seq_no.operation)) leaf_name_data.push_back(last_ackd_seq_no.get_name_leafdata());
    if (last_k_aerror_reset.is_set || is_set(last_k_aerror_reset.operation)) leaf_name_data.push_back(last_k_aerror_reset.get_name_leafdata());
    if (last_k_aexpiry_reset.is_set || is_set(last_k_aexpiry_reset.operation)) leaf_name_data.push_back(last_k_aexpiry_reset.get_name_leafdata());
    if (last_k_anotsent_reset.is_set || is_set(last_k_anotsent_reset.operation)) leaf_name_data.push_back(last_k_anotsent_reset.get_name_leafdata());
    if (last_k_astart_reset.is_set || is_set(last_k_astart_reset.operation)) leaf_name_data.push_back(last_k_astart_reset.get_name_leafdata());
    if (last_notify_error_code.is_set || is_set(last_notify_error_code.operation)) leaf_name_data.push_back(last_notify_error_code.get_name_leafdata());
    if (last_notify_error_subcode.is_set || is_set(last_notify_error_subcode.operation)) leaf_name_data.push_back(last_notify_error_subcode.get_name_leafdata());
    if (last_write_event.is_set || is_set(last_write_event.operation)) leaf_name_data.push_back(last_write_event.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (local_as_dual_as.is_set || is_set(local_as_dual_as.operation)) leaf_name_data.push_back(local_as_dual_as.get_name_leafdata());
    if (local_as_dual_as_mode_native.is_set || is_set(local_as_dual_as_mode_native.operation)) leaf_name_data.push_back(local_as_dual_as_mode_native.get_name_leafdata());
    if (local_as_no_prepend.is_set || is_set(local_as_no_prepend.operation)) leaf_name_data.push_back(local_as_no_prepend.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.operation)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.operation)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.operation)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.operation)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.operation)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (min_advertise_interval.is_set || is_set(min_advertise_interval.operation)) leaf_name_data.push_back(min_advertise_interval.get_name_leafdata());
    if (min_advertise_interval_msecs.is_set || is_set(min_advertise_interval_msecs.operation)) leaf_name_data.push_back(min_advertise_interval_msecs.get_name_leafdata());
    if (min_origination_interval.is_set || is_set(min_origination_interval.operation)) leaf_name_data.push_back(min_origination_interval.get_name_leafdata());
    if (msg_log_in.is_set || is_set(msg_log_in.operation)) leaf_name_data.push_back(msg_log_in.get_name_leafdata());
    if (msg_log_out.is_set || is_set(msg_log_out.operation)) leaf_name_data.push_back(msg_log_out.get_name_leafdata());
    if (multi_protocol_capability_received.is_set || is_set(multi_protocol_capability_received.operation)) leaf_name_data.push_back(multi_protocol_capability_received.get_name_leafdata());
    if (nbr_cluster_id.is_set || is_set(nbr_cluster_id.operation)) leaf_name_data.push_back(nbr_cluster_id.get_name_leafdata());
    if (nbr_enforce_first_as.is_set || is_set(nbr_enforce_first_as.operation)) leaf_name_data.push_back(nbr_enforce_first_as.get_name_leafdata());
    if (nbr_in_cluster.is_set || is_set(nbr_in_cluster.operation)) leaf_name_data.push_back(nbr_in_cluster.get_name_leafdata());
    if (negotiated_protocol_version.is_set || is_set(negotiated_protocol_version.operation)) leaf_name_data.push_back(negotiated_protocol_version.get_name_leafdata());
    if (neighbor_interface_handle.is_set || is_set(neighbor_interface_handle.operation)) leaf_name_data.push_back(neighbor_interface_handle.get_name_leafdata());
    if (neighbor_local_as.is_set || is_set(neighbor_local_as.operation)) leaf_name_data.push_back(neighbor_local_as.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (open_check_error_code.is_set || is_set(open_check_error_code.operation)) leaf_name_data.push_back(open_check_error_code.get_name_leafdata());
    if (peer_error_code.is_set || is_set(peer_error_code.operation)) leaf_name_data.push_back(peer_error_code.get_name_leafdata());
    if (peer_reset_reason.is_set || is_set(peer_reset_reason.operation)) leaf_name_data.push_back(peer_reset_reason.get_name_leafdata());
    if (previous_connection_state.is_set || is_set(previous_connection_state.operation)) leaf_name_data.push_back(previous_connection_state.get_name_leafdata());
    if (read_armed.is_set || is_set(read_armed.operation)) leaf_name_data.push_back(read_armed.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remote_as_number.is_set || is_set(remote_as_number.operation)) leaf_name_data.push_back(remote_as_number.get_name_leafdata());
    if (reset_notification_sent.is_set || is_set(reset_notification_sent.operation)) leaf_name_data.push_back(reset_notification_sent.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.operation)) leaf_name_data.push_back(reset_reason.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.operation)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_disable.is_set || is_set(rpki_disable.operation)) leaf_name_data.push_back(rpki_disable.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.operation)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.operation)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (second_last_k_aexpiry_reset.is_set || is_set(second_last_k_aexpiry_reset.operation)) leaf_name_data.push_back(second_last_k_aexpiry_reset.get_name_leafdata());
    if (second_last_k_astart_reset.is_set || is_set(second_last_k_astart_reset.operation)) leaf_name_data.push_back(second_last_k_astart_reset.get_name_leafdata());
    if (second_last_write_event.is_set || is_set(second_last_write_event.operation)) leaf_name_data.push_back(second_last_write_event.get_name_leafdata());
    if (socket_read_bytes.is_set || is_set(socket_read_bytes.operation)) leaf_name_data.push_back(socket_read_bytes.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (standby_rp.is_set || is_set(standby_rp.operation)) leaf_name_data.push_back(standby_rp.get_name_leafdata());
    if (suppress4_byte_as.is_set || is_set(suppress4_byte_as.operation)) leaf_name_data.push_back(suppress4_byte_as.get_name_leafdata());
    if (tcp_session_open_mode.is_set || is_set(tcp_session_open_mode.operation)) leaf_name_data.push_back(tcp_session_open_mode.get_name_leafdata());
    if (tcpmss.is_set || is_set(tcpmss.operation)) leaf_name_data.push_back(tcpmss.get_name_leafdata());
    if (time_last_cb.is_set || is_set(time_last_cb.operation)) leaf_name_data.push_back(time_last_cb.get_name_leafdata());
    if (time_last_cb_reset.is_set || is_set(time_last_cb_reset.operation)) leaf_name_data.push_back(time_last_cb_reset.get_name_leafdata());
    if (time_last_fb.is_set || is_set(time_last_fb.operation)) leaf_name_data.push_back(time_last_fb.get_name_leafdata());
    if (time_since_connection_last_dropped.is_set || is_set(time_since_connection_last_dropped.operation)) leaf_name_data.push_back(time_since_connection_last_dropped.get_name_leafdata());
    if (time_since_last_read.is_set || is_set(time_since_last_read.operation)) leaf_name_data.push_back(time_since_last_read.get_name_leafdata());
    if (time_since_last_read_reset.is_set || is_set(time_since_last_read_reset.operation)) leaf_name_data.push_back(time_since_last_read_reset.get_name_leafdata());
    if (time_since_last_update.is_set || is_set(time_since_last_update.operation)) leaf_name_data.push_back(time_since_last_update.get_name_leafdata());
    if (time_since_last_write.is_set || is_set(time_since_last_write.operation)) leaf_name_data.push_back(time_since_last_write.get_name_leafdata());
    if (time_since_last_write_reset.is_set || is_set(time_since_last_write_reset.operation)) leaf_name_data.push_back(time_since_last_write_reset.get_name_leafdata());
    if (time_since_second_last_write.is_set || is_set(time_since_second_last_write.operation)) leaf_name_data.push_back(time_since_second_last_write.get_name_leafdata());
    if (time_since_second_last_write_reset.is_set || is_set(time_since_second_last_write_reset.operation)) leaf_name_data.push_back(time_since_second_last_write_reset.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (update_bytes_read.is_set || is_set(update_bytes_read.operation)) leaf_name_data.push_back(update_bytes_read.get_name_leafdata());
    if (update_messages_in.is_set || is_set(update_messages_in.operation)) leaf_name_data.push_back(update_messages_in.get_name_leafdata());
    if (update_messages_out.is_set || is_set(update_messages_out.operation)) leaf_name_data.push_back(update_messages_out.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (write_armed.is_set || is_set(write_armed.operation)) leaf_name_data.push_back(write_armed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-data")
    {
        for(auto const & c : af_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData>();
        c->parent = this;
        af_data.push_back(std::move(c));
        children[segment_path] = af_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
        else
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress>();
            connection_local_address->parent = this;
            children["connection-local-address"] = connection_local_address;
        }
        return children.at("connection-local-address");
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
        else
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress>();
            connection_remote_address->parent = this;
            children["connection-remote-address"] = connection_remote_address;
        }
        return children.at("connection-remote-address");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "message-statistics")
    {
        if(message_statistics != nullptr)
        {
            children["message-statistics"] = message_statistics;
        }
        else
        {
            message_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics>();
            message_statistics->parent = this;
            children["message-statistics"] = message_statistics;
        }
        return children.at("message-statistics");
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
        else
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics>();
            performance_statistics->parent = this;
            children["performance-statistics"] = performance_statistics;
        }
        return children.at("performance-statistics");
    }

    if(child_yang_name == "received-notification-info")
    {
        if(received_notification_info != nullptr)
        {
            children["received-notification-info"] = received_notification_info;
        }
        else
        {
            received_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo>();
            received_notification_info->parent = this;
            children["received-notification-info"] = received_notification_info;
        }
        return children.at("received-notification-info");
    }

    if(child_yang_name == "send-notification-info")
    {
        if(send_notification_info != nullptr)
        {
            children["send-notification-info"] = send_notification_info;
        }
        else
        {
            send_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo>();
            send_notification_info->parent = this;
            children["send-notification-info"] = send_notification_info;
        }
        return children.at("send-notification-info");
    }

    if(child_yang_name == "tcp-init-sync-done-time-spec")
    {
        if(tcp_init_sync_done_time_spec != nullptr)
        {
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
        else
        {
            tcp_init_sync_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec>();
            tcp_init_sync_done_time_spec->parent = this;
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
        return children.at("tcp-init-sync-done-time-spec");
    }

    if(child_yang_name == "tcp-init-sync-phase-two-time-spec")
    {
        if(tcp_init_sync_phase_two_time_spec != nullptr)
        {
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
        else
        {
            tcp_init_sync_phase_two_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec>();
            tcp_init_sync_phase_two_time_spec->parent = this;
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
        return children.at("tcp-init-sync-phase-two-time-spec");
    }

    if(child_yang_name == "tcp-init-sync-time-spec")
    {
        if(tcp_init_sync_time_spec != nullptr)
        {
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
        else
        {
            tcp_init_sync_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec>();
            tcp_init_sync_time_spec->parent = this;
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
        return children.at("tcp-init-sync-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::get_children()
{
    for (auto const & c : af_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connection-local-address") == children.end())
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
    }

    if(children.find("connection-remote-address") == children.end())
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("message-statistics") == children.end())
    {
        if(message_statistics != nullptr)
        {
            children["message-statistics"] = message_statistics;
        }
    }

    if(children.find("performance-statistics") == children.end())
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
    }

    if(children.find("received-notification-info") == children.end())
    {
        if(received_notification_info != nullptr)
        {
            children["received-notification-info"] = received_notification_info;
        }
    }

    if(children.find("send-notification-info") == children.end())
    {
        if(send_notification_info != nullptr)
        {
            children["send-notification-info"] = send_notification_info;
        }
    }

    if(children.find("tcp-init-sync-done-time-spec") == children.end())
    {
        if(tcp_init_sync_done_time_spec != nullptr)
        {
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
    }

    if(children.find("tcp-init-sync-phase-two-time-spec") == children.end())
    {
        if(tcp_init_sync_phase_two_time_spec != nullptr)
        {
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
    }

    if(children.find("tcp-init-sync-time-spec") == children.end())
    {
        if(tcp_init_sync_time_spec != nullptr)
        {
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers = value;
    }
    if(value_path == "actual-last-write-bytes")
    {
        actual_last_write_bytes = value;
    }
    if(value_path == "actual-last-write-reset-bytes")
    {
        actual_last_write_reset_bytes = value;
    }
    if(value_path == "actual-second-last-write-bytes")
    {
        actual_second_last_write_bytes = value;
    }
    if(value_path == "actual-second-last-write-reset-bytes")
    {
        actual_second_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-last-write-bytes")
    {
        attempted_last_write_bytes = value;
    }
    if(value_path == "attempted-last-write-reset-bytes")
    {
        attempted_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-second-last-write-bytes")
    {
        attempted_second_last_write_bytes = value;
    }
    if(value_path == "attempted-second-last-write-reset-bytes")
    {
        attempted_second_last_write_reset_bytes = value;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval = value;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval = value;
    }
    if(value_path == "bfd-session-created-state")
    {
        bfd_session_created_state = value;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "bfd-state-ts")
    {
        bfd_state_ts = value;
    }
    if(value_path == "bytes-read")
    {
        bytes_read = value;
    }
    if(value_path == "bytes-written")
    {
        bytes_written = value;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time = value;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive = value;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time = value;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval = value;
    }
    if(value_path == "connection-admin-status")
    {
        connection_admin_status = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-established-time")
    {
        connection_established_time = value;
    }
    if(value_path == "connection-local-port")
    {
        connection_local_port = value;
    }
    if(value_path == "connection-remote-port")
    {
        connection_remote_port = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "count-last-write")
    {
        count_last_write = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path = value;
    }
    if(value_path == "discard-data-bytes")
    {
        discard_data_bytes = value;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth = value;
    }
    if(value_path == "dynamic-neighbor")
    {
        dynamic_neighbor = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode = value;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live = value;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled = value;
    }
    if(value_path == "error-notifies-received")
    {
        error_notifies_received = value;
    }
    if(value_path == "error-notifies-sent")
    {
        error_notifies_sent = value;
    }
    if(value_path == "fpbsn-offset")
    {
        fpbsn_offset = value;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset = value;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time = value;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time = value;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr = value;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected = value;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client = value;
    }
    if(value_path == "io-armed")
    {
        io_armed = value;
    }
    if(value_path == "is4-byte-as-capability-received")
    {
        is4_byte_as_capability_received = value;
    }
    if(value_path == "is4-byte-as-capability-sent")
    {
        is4_byte_as_capability_sent = value;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down = value;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed = value;
    }
    if(value_path == "is-capability-negotiation-suppressed")
    {
        is_capability_negotiation_suppressed = value;
    }
    if(value_path == "is-ebgp-multihop-bgpmpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgpmpls_forwarding_disabled = value;
    }
    if(value_path == "is-ebgp-peer-as-league")
    {
        is_ebgp_peer_as_league = value;
    }
    if(value_path == "is-ebgp-peer-common-admin")
    {
        is_ebgp_peer_common_admin = value;
    }
    if(value_path == "is-external-neighbor-not-directly-connected")
    {
        is_external_neighbor_not_directly_connected = value;
    }
    if(value_path == "is-gr-aware")
    {
        is_gr_aware = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown = value;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up = value;
    }
    if(value_path == "is-out-of-memory-shutdown")
    {
        is_out_of_memory_shutdown = value;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close = value;
    }
    if(value_path == "is-read-disabled")
    {
        is_read_disabled = value;
    }
    if(value_path == "is-route-refresh-capability-received")
    {
        is_route_refresh_capability_received = value;
    }
    if(value_path == "is-route-refresh-old-capability-received")
    {
        is_route_refresh_old_capability_received = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "last-ackd-seq-no")
    {
        last_ackd_seq_no = value;
    }
    if(value_path == "last-k-aerror-reset")
    {
        last_k_aerror_reset = value;
    }
    if(value_path == "last-k-aexpiry-reset")
    {
        last_k_aexpiry_reset = value;
    }
    if(value_path == "last-k-anotsent-reset")
    {
        last_k_anotsent_reset = value;
    }
    if(value_path == "last-k-astart-reset")
    {
        last_k_astart_reset = value;
    }
    if(value_path == "last-notify-error-code")
    {
        last_notify_error_code = value;
    }
    if(value_path == "last-notify-error-subcode")
    {
        last_notify_error_subcode = value;
    }
    if(value_path == "last-write-event")
    {
        last_write_event = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as = value;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native = value;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend = value;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval = value;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs = value;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval = value;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in = value;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out = value;
    }
    if(value_path == "multi-protocol-capability-received")
    {
        multi_protocol_capability_received = value;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id = value;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as = value;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster = value;
    }
    if(value_path == "negotiated-protocol-version")
    {
        negotiated_protocol_version = value;
    }
    if(value_path == "neighbor-interface-handle")
    {
        neighbor_interface_handle = value;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "open-check-error-code")
    {
        open_check_error_code = value;
    }
    if(value_path == "peer-error-code")
    {
        peer_error_code = value;
    }
    if(value_path == "peer-reset-reason")
    {
        peer_reset_reason = value;
    }
    if(value_path == "previous-connection-state")
    {
        previous_connection_state = value;
    }
    if(value_path == "read-armed")
    {
        read_armed = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number = value;
    }
    if(value_path == "reset-notification-sent")
    {
        reset_notification_sent = value;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable = value;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
    }
    if(value_path == "second-last-k-aexpiry-reset")
    {
        second_last_k_aexpiry_reset = value;
    }
    if(value_path == "second-last-k-astart-reset")
    {
        second_last_k_astart_reset = value;
    }
    if(value_path == "second-last-write-event")
    {
        second_last_write_event = value;
    }
    if(value_path == "socket-read-bytes")
    {
        socket_read_bytes = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "standby-rp")
    {
        standby_rp = value;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as = value;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode = value;
    }
    if(value_path == "tcpmss")
    {
        tcpmss = value;
    }
    if(value_path == "time-last-cb")
    {
        time_last_cb = value;
    }
    if(value_path == "time-last-cb-reset")
    {
        time_last_cb_reset = value;
    }
    if(value_path == "time-last-fb")
    {
        time_last_fb = value;
    }
    if(value_path == "time-since-connection-last-dropped")
    {
        time_since_connection_last_dropped = value;
    }
    if(value_path == "time-since-last-read")
    {
        time_since_last_read = value;
    }
    if(value_path == "time-since-last-read-reset")
    {
        time_since_last_read_reset = value;
    }
    if(value_path == "time-since-last-update")
    {
        time_since_last_update = value;
    }
    if(value_path == "time-since-last-write")
    {
        time_since_last_write = value;
    }
    if(value_path == "time-since-last-write-reset")
    {
        time_since_last_write_reset = value;
    }
    if(value_path == "time-since-second-last-write")
    {
        time_since_second_last_write = value;
    }
    if(value_path == "time-since-second-last-write-reset")
    {
        time_since_second_last_write_reset = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "update-bytes-read")
    {
        update_bytes_read = value;
    }
    if(value_path == "update-messages-in")
    {
        update_messages_in = value;
    }
    if(value_path == "update-messages-out")
    {
        update_messages_out = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "write-armed")
    {
        write_armed = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-local-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-remote-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::SendNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "send-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::~SendNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-notification-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::get_children()
{
    for (auto const & c : last_notification_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "send-notification-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::SendNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::ReceivedNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "received-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::~ReceivedNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-notification-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::get_children()
{
    for (auto const & c : last_notification_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "received-notification-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::ReceivedNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::PerformanceStatistics()
    :
    active_collision{YType::uint32, "active-collision"},
    actives{YType::uint32, "actives"},
    control_to_read_thread_trigger{YType::uint32, "control-to-read-thread-trigger"},
    control_to_write_thread_trigger{YType::uint32, "control-to-write-thread-trigger"},
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    failed_post_actives{YType::uint32, "failed-post-actives"},
    high_throttled_read{YType::uint32, "high-throttled-read"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    last_nsr_scoped_sync{YType::uint32, "last-nsr-scoped-sync"},
    last_sent_seq_no{YType::uint32, "last-sent-seq-no"},
    low_throttled_read{YType::uint32, "low-throttled-read"},
    maximum_read_size{YType::uint32, "maximum-read-size"},
    nbr_fd{YType::int32, "nbr-fd"},
    nbr_flags{YType::uint32, "nbr-flags"},
    network_status{YType::uint32, "network-status"},
    nsr_oper_down_count{YType::uint32, "nsr-oper-down-count"},
    passive_collision{YType::uint32, "passive-collision"},
    passives{YType::uint32, "passives"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles{YType::uint32, "read-throttles"},
    rejected_passives{YType::uint32, "rejected-passives"},
    reset_flags{YType::uint32, "reset-flags"},
    reset_retries{YType::uint8, "reset-retries"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    sync_flags{YType::uint32, "sync-flags"},
    time_since_last_throttled_read{YType::uint32, "time-since-last-throttled-read"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{
    yang_name = "performance-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::has_data() const
{
    return active_collision.is_set
	|| actives.is_set
	|| control_to_read_thread_trigger.is_set
	|| control_to_write_thread_trigger.is_set
	|| data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| failed_post_actives.is_set
	|| high_throttled_read.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| last_nsr_scoped_sync.is_set
	|| last_sent_seq_no.is_set
	|| low_throttled_read.is_set
	|| maximum_read_size.is_set
	|| nbr_fd.is_set
	|| nbr_flags.is_set
	|| network_status.is_set
	|| nsr_oper_down_count.is_set
	|| passive_collision.is_set
	|| passives.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles.is_set
	|| rejected_passives.is_set
	|| reset_flags.is_set
	|| reset_retries.is_set
	|| subgroup_list_time.is_set
	|| sync_flags.is_set
	|| time_since_last_throttled_read.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_collision.operation)
	|| is_set(actives.operation)
	|| is_set(control_to_read_thread_trigger.operation)
	|| is_set(control_to_write_thread_trigger.operation)
	|| is_set(data_bytes_read.operation)
	|| is_set(data_bytes_written.operation)
	|| is_set(failed_post_actives.operation)
	|| is_set(high_throttled_read.operation)
	|| is_set(inbound_update_messages.operation)
	|| is_set(inbound_update_messages_time.operation)
	|| is_set(io_read_time.operation)
	|| is_set(io_write_time.operation)
	|| is_set(last_nsr_scoped_sync.operation)
	|| is_set(last_sent_seq_no.operation)
	|| is_set(low_throttled_read.operation)
	|| is_set(maximum_read_size.operation)
	|| is_set(nbr_fd.operation)
	|| is_set(nbr_flags.operation)
	|| is_set(network_status.operation)
	|| is_set(nsr_oper_down_count.operation)
	|| is_set(passive_collision.operation)
	|| is_set(passives.operation)
	|| is_set(read_calls_count.operation)
	|| is_set(read_messages_count.operation)
	|| is_set(read_throttles.operation)
	|| is_set(rejected_passives.operation)
	|| is_set(reset_flags.operation)
	|| is_set(reset_retries.operation)
	|| is_set(subgroup_list_time.operation)
	|| is_set(sync_flags.operation)
	|| is_set(time_since_last_throttled_read.operation)
	|| is_set(write_calls_count.operation)
	|| is_set(write_queue_calls_count.operation)
	|| is_set(write_queue_messages_count.operation)
	|| is_set(write_queue_time.operation)
	|| is_set(write_subgroup_calls_count.operation)
	|| is_set(write_subgroup_messages_count.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_collision.is_set || is_set(active_collision.operation)) leaf_name_data.push_back(active_collision.get_name_leafdata());
    if (actives.is_set || is_set(actives.operation)) leaf_name_data.push_back(actives.get_name_leafdata());
    if (control_to_read_thread_trigger.is_set || is_set(control_to_read_thread_trigger.operation)) leaf_name_data.push_back(control_to_read_thread_trigger.get_name_leafdata());
    if (control_to_write_thread_trigger.is_set || is_set(control_to_write_thread_trigger.operation)) leaf_name_data.push_back(control_to_write_thread_trigger.get_name_leafdata());
    if (data_bytes_read.is_set || is_set(data_bytes_read.operation)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.operation)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (failed_post_actives.is_set || is_set(failed_post_actives.operation)) leaf_name_data.push_back(failed_post_actives.get_name_leafdata());
    if (high_throttled_read.is_set || is_set(high_throttled_read.operation)) leaf_name_data.push_back(high_throttled_read.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.operation)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.operation)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.operation)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.operation)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (last_nsr_scoped_sync.is_set || is_set(last_nsr_scoped_sync.operation)) leaf_name_data.push_back(last_nsr_scoped_sync.get_name_leafdata());
    if (last_sent_seq_no.is_set || is_set(last_sent_seq_no.operation)) leaf_name_data.push_back(last_sent_seq_no.get_name_leafdata());
    if (low_throttled_read.is_set || is_set(low_throttled_read.operation)) leaf_name_data.push_back(low_throttled_read.get_name_leafdata());
    if (maximum_read_size.is_set || is_set(maximum_read_size.operation)) leaf_name_data.push_back(maximum_read_size.get_name_leafdata());
    if (nbr_fd.is_set || is_set(nbr_fd.operation)) leaf_name_data.push_back(nbr_fd.get_name_leafdata());
    if (nbr_flags.is_set || is_set(nbr_flags.operation)) leaf_name_data.push_back(nbr_flags.get_name_leafdata());
    if (network_status.is_set || is_set(network_status.operation)) leaf_name_data.push_back(network_status.get_name_leafdata());
    if (nsr_oper_down_count.is_set || is_set(nsr_oper_down_count.operation)) leaf_name_data.push_back(nsr_oper_down_count.get_name_leafdata());
    if (passive_collision.is_set || is_set(passive_collision.operation)) leaf_name_data.push_back(passive_collision.get_name_leafdata());
    if (passives.is_set || is_set(passives.operation)) leaf_name_data.push_back(passives.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.operation)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.operation)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles.is_set || is_set(read_throttles.operation)) leaf_name_data.push_back(read_throttles.get_name_leafdata());
    if (rejected_passives.is_set || is_set(rejected_passives.operation)) leaf_name_data.push_back(rejected_passives.get_name_leafdata());
    if (reset_flags.is_set || is_set(reset_flags.operation)) leaf_name_data.push_back(reset_flags.get_name_leafdata());
    if (reset_retries.is_set || is_set(reset_retries.operation)) leaf_name_data.push_back(reset_retries.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.operation)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.operation)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (time_since_last_throttled_read.is_set || is_set(time_since_last_throttled_read.operation)) leaf_name_data.push_back(time_since_last_throttled_read.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.operation)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.operation)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.operation)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.operation)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.operation)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.operation)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::PerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-collision")
    {
        active_collision = value;
    }
    if(value_path == "actives")
    {
        actives = value;
    }
    if(value_path == "control-to-read-thread-trigger")
    {
        control_to_read_thread_trigger = value;
    }
    if(value_path == "control-to-write-thread-trigger")
    {
        control_to_write_thread_trigger = value;
    }
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
    }
    if(value_path == "failed-post-actives")
    {
        failed_post_actives = value;
    }
    if(value_path == "high-throttled-read")
    {
        high_throttled_read = value;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
    }
    if(value_path == "last-nsr-scoped-sync")
    {
        last_nsr_scoped_sync = value;
    }
    if(value_path == "last-sent-seq-no")
    {
        last_sent_seq_no = value;
    }
    if(value_path == "low-throttled-read")
    {
        low_throttled_read = value;
    }
    if(value_path == "maximum-read-size")
    {
        maximum_read_size = value;
    }
    if(value_path == "nbr-fd")
    {
        nbr_fd = value;
    }
    if(value_path == "nbr-flags")
    {
        nbr_flags = value;
    }
    if(value_path == "network-status")
    {
        network_status = value;
    }
    if(value_path == "nsr-oper-down-count")
    {
        nsr_oper_down_count = value;
    }
    if(value_path == "passive-collision")
    {
        passive_collision = value;
    }
    if(value_path == "passives")
    {
        passives = value;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
    }
    if(value_path == "read-throttles")
    {
        read_throttles = value;
    }
    if(value_path == "rejected-passives")
    {
        rejected_passives = value;
    }
    if(value_path == "reset-flags")
    {
        reset_flags = value;
    }
    if(value_path == "reset-retries")
    {
        reset_retries = value;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
    }
    if(value_path == "time-since-last-throttled-read")
    {
        time_since_last_throttled_read = value;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::MessageStatistics()
    :
    keepalive(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive>())
	,notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification>())
	,open(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open>())
	,route_refresh(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh>())
	,total(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total>())
	,update(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update>())
{
    keepalive->parent = this;
    children["keepalive"] = keepalive;

    notification->parent = this;
    children["notification"] = notification;

    open->parent = this;
    children["open"] = open;

    route_refresh->parent = this;
    children["route-refresh"] = route_refresh;

    total->parent = this;
    children["total"] = total;

    update->parent = this;
    children["update"] = update;

    yang_name = "message-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::~MessageStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (open !=  nullptr && open->has_data())
	|| (route_refresh !=  nullptr && route_refresh->has_data())
	|| (total !=  nullptr && total->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (open !=  nullptr && open->has_operation())
	|| (route_refresh !=  nullptr && route_refresh->has_operation())
	|| (total !=  nullptr && total->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
        else
        {
            keepalive = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive>();
            keepalive->parent = this;
            children["keepalive"] = keepalive;
        }
        return children.at("keepalive");
    }

    if(child_yang_name == "notification")
    {
        if(notification != nullptr)
        {
            children["notification"] = notification;
        }
        else
        {
            notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification>();
            notification->parent = this;
            children["notification"] = notification;
        }
        return children.at("notification");
    }

    if(child_yang_name == "open")
    {
        if(open != nullptr)
        {
            children["open"] = open;
        }
        else
        {
            open = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open>();
            open->parent = this;
            children["open"] = open;
        }
        return children.at("open");
    }

    if(child_yang_name == "route-refresh")
    {
        if(route_refresh != nullptr)
        {
            children["route-refresh"] = route_refresh;
        }
        else
        {
            route_refresh = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh>();
            route_refresh->parent = this;
            children["route-refresh"] = route_refresh;
        }
        return children.at("route-refresh");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    if(child_yang_name == "update")
    {
        if(update != nullptr)
        {
            children["update"] = update;
        }
        else
        {
            update = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update>();
            update->parent = this;
            children["update"] = update;
        }
        return children.at("update");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::get_children()
{
    if(children.find("keepalive") == children.end())
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
    }

    if(children.find("notification") == children.end())
    {
        if(notification != nullptr)
        {
            children["notification"] = notification;
        }
    }

    if(children.find("open") == children.end())
    {
        if(open != nullptr)
        {
            children["open"] = open;
        }
    }

    if(children.find("route-refresh") == children.end())
    {
        if(route_refresh != nullptr)
        {
            children["route-refresh"] = route_refresh;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    if(children.find("update") == children.end())
    {
        if(update != nullptr)
        {
            children["update"] = update;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Open()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "open"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::~Open()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Open' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Notification()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "notification"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::~Notification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Notification' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Update()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "update"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::~Update()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Keepalive()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "keepalive"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::~Keepalive()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::RouteRefresh()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "route-refresh"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::~RouteRefresh()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-refresh";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteRefresh' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Total()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "total"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::~Total()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::TcpInitSyncTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::~TcpInitSyncTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::TcpInitSyncPhaseTwoTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-phase-two-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::~TcpInitSyncPhaseTwoTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-phase-two-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncPhaseTwoTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncPhaseTwoTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::TcpInitSyncDoneTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "tcp-init-sync-done-time-spec"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::~TcpInitSyncDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-init-sync-done-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInitSyncDoneTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::TcpInitSyncDoneTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenance()
    :
    gshut_active{YType::boolean, "gshut-active"},
    gshut_exists{YType::boolean, "gshut-exists"},
    gshut_local_active{YType::boolean, "gshut-local-active"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_prepends{YType::uint8, "gshut-prepends"}
{
    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::has_data() const
{
    return gshut_active.is_set
	|| gshut_exists.is_set
	|| gshut_local_active.is_set
	|| gshut_locpref.is_set
	|| gshut_locpref_set.is_set
	|| gshut_prepends.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_active.operation)
	|| is_set(gshut_exists.operation)
	|| is_set(gshut_local_active.operation)
	|| is_set(gshut_locpref.operation)
	|| is_set(gshut_locpref_set.operation)
	|| is_set(gshut_prepends.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_active.is_set || is_set(gshut_active.operation)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_exists.is_set || is_set(gshut_exists.operation)) leaf_name_data.push_back(gshut_exists.get_name_leafdata());
    if (gshut_local_active.is_set || is_set(gshut_local_active.operation)) leaf_name_data.push_back(gshut_local_active.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.operation)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.operation)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.operation)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-active")
    {
        gshut_active = value;
    }
    if(value_path == "gshut-exists")
    {
        gshut_exists = value;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active = value;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::AfData()
    :
    accept_own_enabled{YType::boolean, "accept-own-enabled"},
    acked_version{YType::uint32, "acked-version"},
    address_family_long_lived_time{YType::uint32, "address-family-long-lived-time"},
    advertise_afi{YType::boolean, "advertise-afi"},
    advertise_afi_def_vrf_imp_disable{YType::boolean, "advertise-afi-def-vrf-imp-disable"},
    advertise_afi_disable{YType::boolean, "advertise-afi-disable"},
    advertise_afi_eo_r_ready{YType::boolean, "advertise-afi-eo-r-ready"},
    advertise_afi_reorg{YType::boolean, "advertise-afi-reorg"},
    advertise_afi_vrf_re_imp_disable{YType::boolean, "advertise-afi-vrf-re-imp-disable"},
    advertise_evp_nv4afi_def_vrf_imp_disable{YType::boolean, "advertise-evp-nv4afi-def-vrf-imp-disable"},
    advertise_evp_nv4afi_vrf_re_imp_disable{YType::boolean, "advertise-evp-nv4afi-vrf-re-imp-disable"},
    advertise_evp_nv6afi_def_vrf_imp_disable{YType::boolean, "advertise-evp-nv6afi-def-vrf-imp-disable"},
    advertise_evp_nv6afi_vrf_re_imp_disable{YType::boolean, "advertise-evp-nv6afi-vrf-re-imp-disable"},
    advertise_local_labeled_route_unicast{YType::boolean, "advertise-local-labeled-route-unicast"},
    advertise_rt_type{YType::uint8, "advertise-rt-type"},
    advertise_v4_flags{YType::uint32, "advertise-v4-flags"},
    advertise_v6_flags{YType::uint32, "advertise-v6-flags"},
    af_name{YType::enumeration, "af-name"},
    afrpki_allow_invalid{YType::boolean, "afrpki-allow-invalid"},
    afrpki_disable{YType::boolean, "afrpki-disable"},
    afrpki_signal_ibgp{YType::boolean, "afrpki-signal-ibgp"},
    afrpki_use_validity{YType::boolean, "afrpki-use-validity"},
    allow_as_in_count{YType::uint32, "allow-as-in-count"},
    always_use_next_hop_local{YType::boolean, "always-use-next-hop-local"},
    encapsulation_type{YType::uint32, "encapsulation-type"},
    eo_r_received_in_read_only{YType::boolean, "eo-r-received-in-read-only"},
    filter_group_index{YType::uint32, "filter-group-index"},
    flowspec_redirect_validation_d_isable{YType::boolean, "flowspec-redirect-validation-d-isable"},
    flowspec_validation_d_isable{YType::boolean, "flowspec-validation-d-isable"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"},
    is_add_path_receive_capability_advertised{YType::boolean, "is-add-path-receive-capability-advertised"},
    is_add_path_receive_capability_received{YType::boolean, "is-add-path-receive-capability-received"},
    is_add_path_send_capability_advertised{YType::boolean, "is-add-path-send-capability-advertised"},
    is_add_path_send_capability_received{YType::boolean, "is-add-path-send-capability-received"},
    is_addpath_receive_operational{YType::boolean, "is-addpath-receive-operational"},
    is_addpath_send_operational{YType::boolean, "is-addpath-send-operational"},
    is_advertise_permanent_network{YType::boolean, "is-advertise-permanent-network"},
    is_advertised_graceful_restart{YType::boolean, "is-advertised-graceful-restart"},
    is_advertised_orf_receive{YType::boolean, "is-advertised-orf-receive"},
    is_advertised_orf_send{YType::boolean, "is-advertised-orf-send"},
    is_aigp_set{YType::boolean, "is-aigp-set"},
    is_allow_as_in_set{YType::boolean, "is-allow-as-in-set"},
    is_as_override_set{YType::boolean, "is-as-override-set"},
    is_default_originate_sent{YType::boolean, "is-default-originate-sent"},
    is_ext_nh_encoding_capability_received{YType::boolean, "is-ext-nh-encoding-capability-received"},
    is_ext_nh_encoding_capability_sent{YType::boolean, "is-ext-nh-encoding-capability-sent"},
    is_graceful_restart_state_flag{YType::boolean, "is-graceful-restart-state-flag"},
    is_legacy_pe_rt{YType::boolean, "is-legacy-pe-rt"},
    is_neighbor_af_capable{YType::boolean, "is-neighbor-af-capable"},
    is_neighbor_ebgp_without_inbound_policy{YType::boolean, "is-neighbor-ebgp-without-inbound-policy"},
    is_neighbor_ebgp_without_outbound_policy{YType::boolean, "is-neighbor-ebgp-without-outbound-policy"},
    is_neighbor_route_reflector_client{YType::boolean, "is-neighbor-route-reflector-client"},
    is_orf_send_scheduled{YType::boolean, "is-orf-send-scheduled"},
    is_orf_sent{YType::boolean, "is-orf-sent"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    is_peer_orf_capable{YType::boolean, "is-peer-orf-capable"},
    is_prefix_orf_present{YType::boolean, "is-prefix-orf-present"},
    is_received_graceful_restart_capable{YType::boolean, "is-received-graceful-restart-capable"},
    is_received_orf_receive_capable{YType::boolean, "is-received-orf-receive-capable"},
    is_received_orf_send_capable{YType::boolean, "is-received-orf-send-capable"},
    is_rt_present{YType::boolean, "is-rt-present"},
    is_rt_present_standby{YType::boolean, "is-rt-present-standby"},
    is_send_mcast_attr{YType::boolean, "is-send-mcast-attr"},
    is_soft_reconfiguration_inbound_allowed{YType::boolean, "is-soft-reconfiguration-inbound-allowed"},
    is_update_deferred{YType::boolean, "is-update-deferred"},
    is_update_leaving{YType::boolean, "is-update-leaving"},
    is_update_throttled{YType::boolean, "is-update-throttled"},
    is_use_soft_reconfiguration_always_on{YType::boolean, "is-use-soft-reconfiguration-always-on"},
    local_restart_time{YType::uint32, "local-restart-time"},
    long_lived_graceful_restart_capability_received{YType::boolean, "long-lived-graceful-restart-capability-received"},
    long_lived_graceful_restart_stale_time_accept{YType::uint32, "long-lived-graceful-restart-stale-time-accept"},
    long_lived_graceful_restart_stale_time_configured{YType::boolean, "long-lived-graceful-restart-stale-time-configured"},
    long_lived_graceful_restart_stale_time_received{YType::uint32, "long-lived-graceful-restart-stale-time-received"},
    long_lived_graceful_restart_stale_time_sent{YType::uint32, "long-lived-graceful-restart-stale-time-sent"},
    max_prefix_discard_extra_paths{YType::boolean, "max-prefix-discard-extra-paths"},
    max_prefix_exceed_discard_paths{YType::boolean, "max-prefix-exceed-discard-paths"},
    max_prefix_limit{YType::uint32, "max-prefix-limit"},
    max_prefix_restart_time{YType::uint16, "max-prefix-restart-time"},
    max_prefix_threshold_percent{YType::uint8, "max-prefix-threshold-percent"},
    neighbor_default_originate{YType::boolean, "neighbor-default-originate"},
    neighbor_long_lived_graceful_restart_capable{YType::boolean, "neighbor-long-lived-graceful-restart-capable"},
    neighbor_long_lived_graceful_restart_time_remaining{YType::uint32, "neighbor-long-lived-graceful-restart-time-remaining"},
    neighbor_preserved_forwarding_state{YType::boolean, "neighbor-preserved-forwarding-state"},
    neighbor_preserved_long_lived_forwarding_state{YType::boolean, "neighbor-preserved-long-lived-forwarding-state"},
    neighbor_version{YType::uint32, "neighbor-version"},
    number_of_best_externalpaths{YType::uint32, "number-of-best-externalpaths"},
    number_of_bestpaths{YType::uint32, "number-of-bestpaths"},
    orf_entries_received{YType::uint32, "orf-entries-received"},
    orr_group_index{YType::uint32, "orr-group-index"},
    orr_group_name{YType::str, "orr-group-name"},
    outstanding_version{YType::uint32, "outstanding-version"},
    outstanding_version_max{YType::uint32, "outstanding-version-max"},
    prefixes_accepted{YType::uint32, "prefixes-accepted"},
    prefixes_advertised{YType::uint32, "prefixes-advertised"},
    prefixes_be_advertised{YType::uint32, "prefixes-be-advertised"},
    prefixes_denied{YType::uint32, "prefixes-denied"},
    prefixes_denied_no_policy{YType::uint32, "prefixes-denied-no-policy"},
    prefixes_denied_non_cumulative{YType::uint32, "prefixes-denied-non-cumulative"},
    prefixes_denied_orf_policy{YType::uint32, "prefixes-denied-orf-policy"},
    prefixes_denied_policy{YType::uint32, "prefixes-denied-policy"},
    prefixes_denied_rt_permit{YType::uint32, "prefixes-denied-rt-permit"},
    prefixes_suppressed{YType::uint32, "prefixes-suppressed"},
    prefixes_synced{YType::uint32, "prefixes-synced"},
    prefixes_withdrawn{YType::uint32, "prefixes-withdrawn"},
    prefixes_withdrawn_not_found{YType::uint32, "prefixes-withdrawn-not-found"},
    refresh_acked_version{YType::uint32, "refresh-acked-version"},
    refresh_target_version{YType::uint32, "refresh-target-version"},
    refresh_version{YType::uint32, "refresh-version"},
    remove_private_as_entire_aspath_from_inbound_updates{YType::boolean, "remove-private-as-entire-aspath-from-inbound-updates"},
    remove_private_as_entire_aspath_from_updates{YType::boolean, "remove-private-as-entire-aspath-from-updates"},
    remove_private_as_from_inbound_updates{YType::boolean, "remove-private-as-from-inbound-updates"},
    remove_private_as_from_updates{YType::boolean, "remove-private-as-from-updates"},
    restart_time{YType::uint32, "restart-time"},
    rib_purge_timeout_value{YType::uint32, "rib-purge-timeout-value"},
    route_policy_default_originate{YType::str, "route-policy-default-originate"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_policy_prefix_orf{YType::str, "route-policy-prefix-orf"},
    route_refreshes_received{YType::uint32, "route-refreshes-received"},
    route_refreshes_sent{YType::uint32, "route-refreshes-sent"},
    selective_multipath_eligible{YType::boolean, "selective-multipath-eligible"},
    sent_community_to_neighbor{YType::boolean, "sent-community-to-neighbor"},
    sent_extended_community_to_neighbor{YType::boolean, "sent-extended-community-to-neighbor"},
    sent_gshut_community_to_neighbor{YType::boolean, "sent-gshut-community-to-neighbor"},
    stale_path_timeout{YType::uint32, "stale-path-timeout"},
    synced_acked_version{YType::uint32, "synced-acked-version"},
    update_group_number{YType::uint32, "update-group-number"},
    use_max_prefix_warning_only{YType::boolean, "use-max-prefix-warning-only"},
    vpn_update_gen_enabled{YType::boolean, "vpn-update-gen-enabled"},
    vpn_update_gen_trigger_enabled{YType::boolean, "vpn-update-gen-trigger-enabled"},
    weight{YType::uint32, "weight"}
    	,
    neighbor_af_performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics>())
{
    neighbor_af_performance_statistics->parent = this;
    children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;

    yang_name = "af-data"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::~AfData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::has_data() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_data())
            return true;
    }
    return accept_own_enabled.is_set
	|| acked_version.is_set
	|| address_family_long_lived_time.is_set
	|| advertise_afi.is_set
	|| advertise_afi_def_vrf_imp_disable.is_set
	|| advertise_afi_disable.is_set
	|| advertise_afi_eo_r_ready.is_set
	|| advertise_afi_reorg.is_set
	|| advertise_afi_vrf_re_imp_disable.is_set
	|| advertise_evp_nv4afi_def_vrf_imp_disable.is_set
	|| advertise_evp_nv4afi_vrf_re_imp_disable.is_set
	|| advertise_evp_nv6afi_def_vrf_imp_disable.is_set
	|| advertise_evp_nv6afi_vrf_re_imp_disable.is_set
	|| advertise_local_labeled_route_unicast.is_set
	|| advertise_rt_type.is_set
	|| advertise_v4_flags.is_set
	|| advertise_v6_flags.is_set
	|| af_name.is_set
	|| afrpki_allow_invalid.is_set
	|| afrpki_disable.is_set
	|| afrpki_signal_ibgp.is_set
	|| afrpki_use_validity.is_set
	|| allow_as_in_count.is_set
	|| always_use_next_hop_local.is_set
	|| encapsulation_type.is_set
	|| eo_r_received_in_read_only.is_set
	|| filter_group_index.is_set
	|| flowspec_redirect_validation_d_isable.is_set
	|| flowspec_validation_d_isable.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set
	|| is_add_path_receive_capability_advertised.is_set
	|| is_add_path_receive_capability_received.is_set
	|| is_add_path_send_capability_advertised.is_set
	|| is_add_path_send_capability_received.is_set
	|| is_addpath_receive_operational.is_set
	|| is_addpath_send_operational.is_set
	|| is_advertise_permanent_network.is_set
	|| is_advertised_graceful_restart.is_set
	|| is_advertised_orf_receive.is_set
	|| is_advertised_orf_send.is_set
	|| is_aigp_set.is_set
	|| is_allow_as_in_set.is_set
	|| is_as_override_set.is_set
	|| is_default_originate_sent.is_set
	|| is_ext_nh_encoding_capability_received.is_set
	|| is_ext_nh_encoding_capability_sent.is_set
	|| is_graceful_restart_state_flag.is_set
	|| is_legacy_pe_rt.is_set
	|| is_neighbor_af_capable.is_set
	|| is_neighbor_ebgp_without_inbound_policy.is_set
	|| is_neighbor_ebgp_without_outbound_policy.is_set
	|| is_neighbor_route_reflector_client.is_set
	|| is_orf_send_scheduled.is_set
	|| is_orf_sent.is_set
	|| is_orr_root_address_configured.is_set
	|| is_peer_orf_capable.is_set
	|| is_prefix_orf_present.is_set
	|| is_received_graceful_restart_capable.is_set
	|| is_received_orf_receive_capable.is_set
	|| is_received_orf_send_capable.is_set
	|| is_rt_present.is_set
	|| is_rt_present_standby.is_set
	|| is_send_mcast_attr.is_set
	|| is_soft_reconfiguration_inbound_allowed.is_set
	|| is_update_deferred.is_set
	|| is_update_leaving.is_set
	|| is_update_throttled.is_set
	|| is_use_soft_reconfiguration_always_on.is_set
	|| local_restart_time.is_set
	|| long_lived_graceful_restart_capability_received.is_set
	|| long_lived_graceful_restart_stale_time_accept.is_set
	|| long_lived_graceful_restart_stale_time_configured.is_set
	|| long_lived_graceful_restart_stale_time_received.is_set
	|| long_lived_graceful_restart_stale_time_sent.is_set
	|| max_prefix_discard_extra_paths.is_set
	|| max_prefix_exceed_discard_paths.is_set
	|| max_prefix_limit.is_set
	|| max_prefix_restart_time.is_set
	|| max_prefix_threshold_percent.is_set
	|| neighbor_default_originate.is_set
	|| neighbor_long_lived_graceful_restart_capable.is_set
	|| neighbor_long_lived_graceful_restart_time_remaining.is_set
	|| neighbor_preserved_forwarding_state.is_set
	|| neighbor_preserved_long_lived_forwarding_state.is_set
	|| neighbor_version.is_set
	|| number_of_best_externalpaths.is_set
	|| number_of_bestpaths.is_set
	|| orf_entries_received.is_set
	|| orr_group_index.is_set
	|| orr_group_name.is_set
	|| outstanding_version.is_set
	|| outstanding_version_max.is_set
	|| prefixes_accepted.is_set
	|| prefixes_advertised.is_set
	|| prefixes_be_advertised.is_set
	|| prefixes_denied.is_set
	|| prefixes_denied_no_policy.is_set
	|| prefixes_denied_non_cumulative.is_set
	|| prefixes_denied_orf_policy.is_set
	|| prefixes_denied_policy.is_set
	|| prefixes_denied_rt_permit.is_set
	|| prefixes_suppressed.is_set
	|| prefixes_synced.is_set
	|| prefixes_withdrawn.is_set
	|| prefixes_withdrawn_not_found.is_set
	|| refresh_acked_version.is_set
	|| refresh_target_version.is_set
	|| refresh_version.is_set
	|| remove_private_as_entire_aspath_from_inbound_updates.is_set
	|| remove_private_as_entire_aspath_from_updates.is_set
	|| remove_private_as_from_inbound_updates.is_set
	|| remove_private_as_from_updates.is_set
	|| restart_time.is_set
	|| rib_purge_timeout_value.is_set
	|| route_policy_default_originate.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_policy_prefix_orf.is_set
	|| route_refreshes_received.is_set
	|| route_refreshes_sent.is_set
	|| selective_multipath_eligible.is_set
	|| sent_community_to_neighbor.is_set
	|| sent_extended_community_to_neighbor.is_set
	|| sent_gshut_community_to_neighbor.is_set
	|| stale_path_timeout.is_set
	|| synced_acked_version.is_set
	|| update_group_number.is_set
	|| use_max_prefix_warning_only.is_set
	|| vpn_update_gen_enabled.is_set
	|| vpn_update_gen_trigger_enabled.is_set
	|| weight.is_set
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::has_operation() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(accept_own_enabled.operation)
	|| is_set(acked_version.operation)
	|| is_set(address_family_long_lived_time.operation)
	|| is_set(advertise_afi.operation)
	|| is_set(advertise_afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_afi_disable.operation)
	|| is_set(advertise_afi_eo_r_ready.operation)
	|| is_set(advertise_afi_reorg.operation)
	|| is_set(advertise_afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_evp_nv4afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_evp_nv4afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_evp_nv6afi_def_vrf_imp_disable.operation)
	|| is_set(advertise_evp_nv6afi_vrf_re_imp_disable.operation)
	|| is_set(advertise_local_labeled_route_unicast.operation)
	|| is_set(advertise_rt_type.operation)
	|| is_set(advertise_v4_flags.operation)
	|| is_set(advertise_v6_flags.operation)
	|| is_set(af_name.operation)
	|| is_set(afrpki_allow_invalid.operation)
	|| is_set(afrpki_disable.operation)
	|| is_set(afrpki_signal_ibgp.operation)
	|| is_set(afrpki_use_validity.operation)
	|| is_set(allow_as_in_count.operation)
	|| is_set(always_use_next_hop_local.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(eo_r_received_in_read_only.operation)
	|| is_set(filter_group_index.operation)
	|| is_set(flowspec_redirect_validation_d_isable.operation)
	|| is_set(flowspec_validation_d_isable.operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation)
	|| is_set(is_add_path_receive_capability_advertised.operation)
	|| is_set(is_add_path_receive_capability_received.operation)
	|| is_set(is_add_path_send_capability_advertised.operation)
	|| is_set(is_add_path_send_capability_received.operation)
	|| is_set(is_addpath_receive_operational.operation)
	|| is_set(is_addpath_send_operational.operation)
	|| is_set(is_advertise_permanent_network.operation)
	|| is_set(is_advertised_graceful_restart.operation)
	|| is_set(is_advertised_orf_receive.operation)
	|| is_set(is_advertised_orf_send.operation)
	|| is_set(is_aigp_set.operation)
	|| is_set(is_allow_as_in_set.operation)
	|| is_set(is_as_override_set.operation)
	|| is_set(is_default_originate_sent.operation)
	|| is_set(is_ext_nh_encoding_capability_received.operation)
	|| is_set(is_ext_nh_encoding_capability_sent.operation)
	|| is_set(is_graceful_restart_state_flag.operation)
	|| is_set(is_legacy_pe_rt.operation)
	|| is_set(is_neighbor_af_capable.operation)
	|| is_set(is_neighbor_ebgp_without_inbound_policy.operation)
	|| is_set(is_neighbor_ebgp_without_outbound_policy.operation)
	|| is_set(is_neighbor_route_reflector_client.operation)
	|| is_set(is_orf_send_scheduled.operation)
	|| is_set(is_orf_sent.operation)
	|| is_set(is_orr_root_address_configured.operation)
	|| is_set(is_peer_orf_capable.operation)
	|| is_set(is_prefix_orf_present.operation)
	|| is_set(is_received_graceful_restart_capable.operation)
	|| is_set(is_received_orf_receive_capable.operation)
	|| is_set(is_received_orf_send_capable.operation)
	|| is_set(is_rt_present.operation)
	|| is_set(is_rt_present_standby.operation)
	|| is_set(is_send_mcast_attr.operation)
	|| is_set(is_soft_reconfiguration_inbound_allowed.operation)
	|| is_set(is_update_deferred.operation)
	|| is_set(is_update_leaving.operation)
	|| is_set(is_update_throttled.operation)
	|| is_set(is_use_soft_reconfiguration_always_on.operation)
	|| is_set(local_restart_time.operation)
	|| is_set(long_lived_graceful_restart_capability_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_accept.operation)
	|| is_set(long_lived_graceful_restart_stale_time_configured.operation)
	|| is_set(long_lived_graceful_restart_stale_time_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_sent.operation)
	|| is_set(max_prefix_discard_extra_paths.operation)
	|| is_set(max_prefix_exceed_discard_paths.operation)
	|| is_set(max_prefix_limit.operation)
	|| is_set(max_prefix_restart_time.operation)
	|| is_set(max_prefix_threshold_percent.operation)
	|| is_set(neighbor_default_originate.operation)
	|| is_set(neighbor_long_lived_graceful_restart_capable.operation)
	|| is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)
	|| is_set(neighbor_preserved_forwarding_state.operation)
	|| is_set(neighbor_preserved_long_lived_forwarding_state.operation)
	|| is_set(neighbor_version.operation)
	|| is_set(number_of_best_externalpaths.operation)
	|| is_set(number_of_bestpaths.operation)
	|| is_set(orf_entries_received.operation)
	|| is_set(orr_group_index.operation)
	|| is_set(orr_group_name.operation)
	|| is_set(outstanding_version.operation)
	|| is_set(outstanding_version_max.operation)
	|| is_set(prefixes_accepted.operation)
	|| is_set(prefixes_advertised.operation)
	|| is_set(prefixes_be_advertised.operation)
	|| is_set(prefixes_denied.operation)
	|| is_set(prefixes_denied_no_policy.operation)
	|| is_set(prefixes_denied_non_cumulative.operation)
	|| is_set(prefixes_denied_orf_policy.operation)
	|| is_set(prefixes_denied_policy.operation)
	|| is_set(prefixes_denied_rt_permit.operation)
	|| is_set(prefixes_suppressed.operation)
	|| is_set(prefixes_synced.operation)
	|| is_set(prefixes_withdrawn.operation)
	|| is_set(prefixes_withdrawn_not_found.operation)
	|| is_set(refresh_acked_version.operation)
	|| is_set(refresh_target_version.operation)
	|| is_set(refresh_version.operation)
	|| is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)
	|| is_set(remove_private_as_entire_aspath_from_updates.operation)
	|| is_set(remove_private_as_from_inbound_updates.operation)
	|| is_set(remove_private_as_from_updates.operation)
	|| is_set(restart_time.operation)
	|| is_set(rib_purge_timeout_value.operation)
	|| is_set(route_policy_default_originate.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_policy_prefix_orf.operation)
	|| is_set(route_refreshes_received.operation)
	|| is_set(route_refreshes_sent.operation)
	|| is_set(selective_multipath_eligible.operation)
	|| is_set(sent_community_to_neighbor.operation)
	|| is_set(sent_extended_community_to_neighbor.operation)
	|| is_set(sent_gshut_community_to_neighbor.operation)
	|| is_set(stale_path_timeout.operation)
	|| is_set(synced_acked_version.operation)
	|| is_set(update_group_number.operation)
	|| is_set(use_max_prefix_warning_only.operation)
	|| is_set(vpn_update_gen_enabled.operation)
	|| is_set(vpn_update_gen_trigger_enabled.operation)
	|| is_set(weight.operation)
	|| (neighbor_af_performance_statistics !=  nullptr && neighbor_af_performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_own_enabled.is_set || is_set(accept_own_enabled.operation)) leaf_name_data.push_back(accept_own_enabled.get_name_leafdata());
    if (acked_version.is_set || is_set(acked_version.operation)) leaf_name_data.push_back(acked_version.get_name_leafdata());
    if (address_family_long_lived_time.is_set || is_set(address_family_long_lived_time.operation)) leaf_name_data.push_back(address_family_long_lived_time.get_name_leafdata());
    if (advertise_afi.is_set || is_set(advertise_afi.operation)) leaf_name_data.push_back(advertise_afi.get_name_leafdata());
    if (advertise_afi_def_vrf_imp_disable.is_set || is_set(advertise_afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_afi_disable.is_set || is_set(advertise_afi_disable.operation)) leaf_name_data.push_back(advertise_afi_disable.get_name_leafdata());
    if (advertise_afi_eo_r_ready.is_set || is_set(advertise_afi_eo_r_ready.operation)) leaf_name_data.push_back(advertise_afi_eo_r_ready.get_name_leafdata());
    if (advertise_afi_reorg.is_set || is_set(advertise_afi_reorg.operation)) leaf_name_data.push_back(advertise_afi_reorg.get_name_leafdata());
    if (advertise_afi_vrf_re_imp_disable.is_set || is_set(advertise_afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evp_nv4afi_def_vrf_imp_disable.is_set || is_set(advertise_evp_nv4afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv4afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evp_nv4afi_vrf_re_imp_disable.is_set || is_set(advertise_evp_nv4afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv4afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_evp_nv6afi_def_vrf_imp_disable.is_set || is_set(advertise_evp_nv6afi_def_vrf_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv6afi_def_vrf_imp_disable.get_name_leafdata());
    if (advertise_evp_nv6afi_vrf_re_imp_disable.is_set || is_set(advertise_evp_nv6afi_vrf_re_imp_disable.operation)) leaf_name_data.push_back(advertise_evp_nv6afi_vrf_re_imp_disable.get_name_leafdata());
    if (advertise_local_labeled_route_unicast.is_set || is_set(advertise_local_labeled_route_unicast.operation)) leaf_name_data.push_back(advertise_local_labeled_route_unicast.get_name_leafdata());
    if (advertise_rt_type.is_set || is_set(advertise_rt_type.operation)) leaf_name_data.push_back(advertise_rt_type.get_name_leafdata());
    if (advertise_v4_flags.is_set || is_set(advertise_v4_flags.operation)) leaf_name_data.push_back(advertise_v4_flags.get_name_leafdata());
    if (advertise_v6_flags.is_set || is_set(advertise_v6_flags.operation)) leaf_name_data.push_back(advertise_v6_flags.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (afrpki_allow_invalid.is_set || is_set(afrpki_allow_invalid.operation)) leaf_name_data.push_back(afrpki_allow_invalid.get_name_leafdata());
    if (afrpki_disable.is_set || is_set(afrpki_disable.operation)) leaf_name_data.push_back(afrpki_disable.get_name_leafdata());
    if (afrpki_signal_ibgp.is_set || is_set(afrpki_signal_ibgp.operation)) leaf_name_data.push_back(afrpki_signal_ibgp.get_name_leafdata());
    if (afrpki_use_validity.is_set || is_set(afrpki_use_validity.operation)) leaf_name_data.push_back(afrpki_use_validity.get_name_leafdata());
    if (allow_as_in_count.is_set || is_set(allow_as_in_count.operation)) leaf_name_data.push_back(allow_as_in_count.get_name_leafdata());
    if (always_use_next_hop_local.is_set || is_set(always_use_next_hop_local.operation)) leaf_name_data.push_back(always_use_next_hop_local.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (eo_r_received_in_read_only.is_set || is_set(eo_r_received_in_read_only.operation)) leaf_name_data.push_back(eo_r_received_in_read_only.get_name_leafdata());
    if (filter_group_index.is_set || is_set(filter_group_index.operation)) leaf_name_data.push_back(filter_group_index.get_name_leafdata());
    if (flowspec_redirect_validation_d_isable.is_set || is_set(flowspec_redirect_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_redirect_validation_d_isable.get_name_leafdata());
    if (flowspec_validation_d_isable.is_set || is_set(flowspec_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_validation_d_isable.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (is_add_path_receive_capability_advertised.is_set || is_set(is_add_path_receive_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_receive_capability_advertised.get_name_leafdata());
    if (is_add_path_receive_capability_received.is_set || is_set(is_add_path_receive_capability_received.operation)) leaf_name_data.push_back(is_add_path_receive_capability_received.get_name_leafdata());
    if (is_add_path_send_capability_advertised.is_set || is_set(is_add_path_send_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_send_capability_advertised.get_name_leafdata());
    if (is_add_path_send_capability_received.is_set || is_set(is_add_path_send_capability_received.operation)) leaf_name_data.push_back(is_add_path_send_capability_received.get_name_leafdata());
    if (is_addpath_receive_operational.is_set || is_set(is_addpath_receive_operational.operation)) leaf_name_data.push_back(is_addpath_receive_operational.get_name_leafdata());
    if (is_addpath_send_operational.is_set || is_set(is_addpath_send_operational.operation)) leaf_name_data.push_back(is_addpath_send_operational.get_name_leafdata());
    if (is_advertise_permanent_network.is_set || is_set(is_advertise_permanent_network.operation)) leaf_name_data.push_back(is_advertise_permanent_network.get_name_leafdata());
    if (is_advertised_graceful_restart.is_set || is_set(is_advertised_graceful_restart.operation)) leaf_name_data.push_back(is_advertised_graceful_restart.get_name_leafdata());
    if (is_advertised_orf_receive.is_set || is_set(is_advertised_orf_receive.operation)) leaf_name_data.push_back(is_advertised_orf_receive.get_name_leafdata());
    if (is_advertised_orf_send.is_set || is_set(is_advertised_orf_send.operation)) leaf_name_data.push_back(is_advertised_orf_send.get_name_leafdata());
    if (is_aigp_set.is_set || is_set(is_aigp_set.operation)) leaf_name_data.push_back(is_aigp_set.get_name_leafdata());
    if (is_allow_as_in_set.is_set || is_set(is_allow_as_in_set.operation)) leaf_name_data.push_back(is_allow_as_in_set.get_name_leafdata());
    if (is_as_override_set.is_set || is_set(is_as_override_set.operation)) leaf_name_data.push_back(is_as_override_set.get_name_leafdata());
    if (is_default_originate_sent.is_set || is_set(is_default_originate_sent.operation)) leaf_name_data.push_back(is_default_originate_sent.get_name_leafdata());
    if (is_ext_nh_encoding_capability_received.is_set || is_set(is_ext_nh_encoding_capability_received.operation)) leaf_name_data.push_back(is_ext_nh_encoding_capability_received.get_name_leafdata());
    if (is_ext_nh_encoding_capability_sent.is_set || is_set(is_ext_nh_encoding_capability_sent.operation)) leaf_name_data.push_back(is_ext_nh_encoding_capability_sent.get_name_leafdata());
    if (is_graceful_restart_state_flag.is_set || is_set(is_graceful_restart_state_flag.operation)) leaf_name_data.push_back(is_graceful_restart_state_flag.get_name_leafdata());
    if (is_legacy_pe_rt.is_set || is_set(is_legacy_pe_rt.operation)) leaf_name_data.push_back(is_legacy_pe_rt.get_name_leafdata());
    if (is_neighbor_af_capable.is_set || is_set(is_neighbor_af_capable.operation)) leaf_name_data.push_back(is_neighbor_af_capable.get_name_leafdata());
    if (is_neighbor_ebgp_without_inbound_policy.is_set || is_set(is_neighbor_ebgp_without_inbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_inbound_policy.get_name_leafdata());
    if (is_neighbor_ebgp_without_outbound_policy.is_set || is_set(is_neighbor_ebgp_without_outbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_outbound_policy.get_name_leafdata());
    if (is_neighbor_route_reflector_client.is_set || is_set(is_neighbor_route_reflector_client.operation)) leaf_name_data.push_back(is_neighbor_route_reflector_client.get_name_leafdata());
    if (is_orf_send_scheduled.is_set || is_set(is_orf_send_scheduled.operation)) leaf_name_data.push_back(is_orf_send_scheduled.get_name_leafdata());
    if (is_orf_sent.is_set || is_set(is_orf_sent.operation)) leaf_name_data.push_back(is_orf_sent.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.operation)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (is_peer_orf_capable.is_set || is_set(is_peer_orf_capable.operation)) leaf_name_data.push_back(is_peer_orf_capable.get_name_leafdata());
    if (is_prefix_orf_present.is_set || is_set(is_prefix_orf_present.operation)) leaf_name_data.push_back(is_prefix_orf_present.get_name_leafdata());
    if (is_received_graceful_restart_capable.is_set || is_set(is_received_graceful_restart_capable.operation)) leaf_name_data.push_back(is_received_graceful_restart_capable.get_name_leafdata());
    if (is_received_orf_receive_capable.is_set || is_set(is_received_orf_receive_capable.operation)) leaf_name_data.push_back(is_received_orf_receive_capable.get_name_leafdata());
    if (is_received_orf_send_capable.is_set || is_set(is_received_orf_send_capable.operation)) leaf_name_data.push_back(is_received_orf_send_capable.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.operation)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());
    if (is_rt_present_standby.is_set || is_set(is_rt_present_standby.operation)) leaf_name_data.push_back(is_rt_present_standby.get_name_leafdata());
    if (is_send_mcast_attr.is_set || is_set(is_send_mcast_attr.operation)) leaf_name_data.push_back(is_send_mcast_attr.get_name_leafdata());
    if (is_soft_reconfiguration_inbound_allowed.is_set || is_set(is_soft_reconfiguration_inbound_allowed.operation)) leaf_name_data.push_back(is_soft_reconfiguration_inbound_allowed.get_name_leafdata());
    if (is_update_deferred.is_set || is_set(is_update_deferred.operation)) leaf_name_data.push_back(is_update_deferred.get_name_leafdata());
    if (is_update_leaving.is_set || is_set(is_update_leaving.operation)) leaf_name_data.push_back(is_update_leaving.get_name_leafdata());
    if (is_update_throttled.is_set || is_set(is_update_throttled.operation)) leaf_name_data.push_back(is_update_throttled.get_name_leafdata());
    if (is_use_soft_reconfiguration_always_on.is_set || is_set(is_use_soft_reconfiguration_always_on.operation)) leaf_name_data.push_back(is_use_soft_reconfiguration_always_on.get_name_leafdata());
    if (local_restart_time.is_set || is_set(local_restart_time.operation)) leaf_name_data.push_back(local_restart_time.get_name_leafdata());
    if (long_lived_graceful_restart_capability_received.is_set || is_set(long_lived_graceful_restart_capability_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_capability_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_accept.is_set || is_set(long_lived_graceful_restart_stale_time_accept.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_accept.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_configured.is_set || is_set(long_lived_graceful_restart_stale_time_configured.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_configured.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_received.is_set || is_set(long_lived_graceful_restart_stale_time_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_sent.is_set || is_set(long_lived_graceful_restart_stale_time_sent.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_sent.get_name_leafdata());
    if (max_prefix_discard_extra_paths.is_set || is_set(max_prefix_discard_extra_paths.operation)) leaf_name_data.push_back(max_prefix_discard_extra_paths.get_name_leafdata());
    if (max_prefix_exceed_discard_paths.is_set || is_set(max_prefix_exceed_discard_paths.operation)) leaf_name_data.push_back(max_prefix_exceed_discard_paths.get_name_leafdata());
    if (max_prefix_limit.is_set || is_set(max_prefix_limit.operation)) leaf_name_data.push_back(max_prefix_limit.get_name_leafdata());
    if (max_prefix_restart_time.is_set || is_set(max_prefix_restart_time.operation)) leaf_name_data.push_back(max_prefix_restart_time.get_name_leafdata());
    if (max_prefix_threshold_percent.is_set || is_set(max_prefix_threshold_percent.operation)) leaf_name_data.push_back(max_prefix_threshold_percent.get_name_leafdata());
    if (neighbor_default_originate.is_set || is_set(neighbor_default_originate.operation)) leaf_name_data.push_back(neighbor_default_originate.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_capable.is_set || is_set(neighbor_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_capable.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_time_remaining.is_set || is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_time_remaining.get_name_leafdata());
    if (neighbor_preserved_forwarding_state.is_set || is_set(neighbor_preserved_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_forwarding_state.get_name_leafdata());
    if (neighbor_preserved_long_lived_forwarding_state.is_set || is_set(neighbor_preserved_long_lived_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_long_lived_forwarding_state.get_name_leafdata());
    if (neighbor_version.is_set || is_set(neighbor_version.operation)) leaf_name_data.push_back(neighbor_version.get_name_leafdata());
    if (number_of_best_externalpaths.is_set || is_set(number_of_best_externalpaths.operation)) leaf_name_data.push_back(number_of_best_externalpaths.get_name_leafdata());
    if (number_of_bestpaths.is_set || is_set(number_of_bestpaths.operation)) leaf_name_data.push_back(number_of_bestpaths.get_name_leafdata());
    if (orf_entries_received.is_set || is_set(orf_entries_received.operation)) leaf_name_data.push_back(orf_entries_received.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.operation)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.operation)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (outstanding_version.is_set || is_set(outstanding_version.operation)) leaf_name_data.push_back(outstanding_version.get_name_leafdata());
    if (outstanding_version_max.is_set || is_set(outstanding_version_max.operation)) leaf_name_data.push_back(outstanding_version_max.get_name_leafdata());
    if (prefixes_accepted.is_set || is_set(prefixes_accepted.operation)) leaf_name_data.push_back(prefixes_accepted.get_name_leafdata());
    if (prefixes_advertised.is_set || is_set(prefixes_advertised.operation)) leaf_name_data.push_back(prefixes_advertised.get_name_leafdata());
    if (prefixes_be_advertised.is_set || is_set(prefixes_be_advertised.operation)) leaf_name_data.push_back(prefixes_be_advertised.get_name_leafdata());
    if (prefixes_denied.is_set || is_set(prefixes_denied.operation)) leaf_name_data.push_back(prefixes_denied.get_name_leafdata());
    if (prefixes_denied_no_policy.is_set || is_set(prefixes_denied_no_policy.operation)) leaf_name_data.push_back(prefixes_denied_no_policy.get_name_leafdata());
    if (prefixes_denied_non_cumulative.is_set || is_set(prefixes_denied_non_cumulative.operation)) leaf_name_data.push_back(prefixes_denied_non_cumulative.get_name_leafdata());
    if (prefixes_denied_orf_policy.is_set || is_set(prefixes_denied_orf_policy.operation)) leaf_name_data.push_back(prefixes_denied_orf_policy.get_name_leafdata());
    if (prefixes_denied_policy.is_set || is_set(prefixes_denied_policy.operation)) leaf_name_data.push_back(prefixes_denied_policy.get_name_leafdata());
    if (prefixes_denied_rt_permit.is_set || is_set(prefixes_denied_rt_permit.operation)) leaf_name_data.push_back(prefixes_denied_rt_permit.get_name_leafdata());
    if (prefixes_suppressed.is_set || is_set(prefixes_suppressed.operation)) leaf_name_data.push_back(prefixes_suppressed.get_name_leafdata());
    if (prefixes_synced.is_set || is_set(prefixes_synced.operation)) leaf_name_data.push_back(prefixes_synced.get_name_leafdata());
    if (prefixes_withdrawn.is_set || is_set(prefixes_withdrawn.operation)) leaf_name_data.push_back(prefixes_withdrawn.get_name_leafdata());
    if (prefixes_withdrawn_not_found.is_set || is_set(prefixes_withdrawn_not_found.operation)) leaf_name_data.push_back(prefixes_withdrawn_not_found.get_name_leafdata());
    if (refresh_acked_version.is_set || is_set(refresh_acked_version.operation)) leaf_name_data.push_back(refresh_acked_version.get_name_leafdata());
    if (refresh_target_version.is_set || is_set(refresh_target_version.operation)) leaf_name_data.push_back(refresh_target_version.get_name_leafdata());
    if (refresh_version.is_set || is_set(refresh_version.operation)) leaf_name_data.push_back(refresh_version.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_inbound_updates.is_set || is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_updates.is_set || is_set(remove_private_as_entire_aspath_from_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_updates.get_name_leafdata());
    if (remove_private_as_from_inbound_updates.is_set || is_set(remove_private_as_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_from_updates.is_set || is_set(remove_private_as_from_updates.operation)) leaf_name_data.push_back(remove_private_as_from_updates.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (rib_purge_timeout_value.is_set || is_set(rib_purge_timeout_value.operation)) leaf_name_data.push_back(rib_purge_timeout_value.get_name_leafdata());
    if (route_policy_default_originate.is_set || is_set(route_policy_default_originate.operation)) leaf_name_data.push_back(route_policy_default_originate.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_policy_prefix_orf.is_set || is_set(route_policy_prefix_orf.operation)) leaf_name_data.push_back(route_policy_prefix_orf.get_name_leafdata());
    if (route_refreshes_received.is_set || is_set(route_refreshes_received.operation)) leaf_name_data.push_back(route_refreshes_received.get_name_leafdata());
    if (route_refreshes_sent.is_set || is_set(route_refreshes_sent.operation)) leaf_name_data.push_back(route_refreshes_sent.get_name_leafdata());
    if (selective_multipath_eligible.is_set || is_set(selective_multipath_eligible.operation)) leaf_name_data.push_back(selective_multipath_eligible.get_name_leafdata());
    if (sent_community_to_neighbor.is_set || is_set(sent_community_to_neighbor.operation)) leaf_name_data.push_back(sent_community_to_neighbor.get_name_leafdata());
    if (sent_extended_community_to_neighbor.is_set || is_set(sent_extended_community_to_neighbor.operation)) leaf_name_data.push_back(sent_extended_community_to_neighbor.get_name_leafdata());
    if (sent_gshut_community_to_neighbor.is_set || is_set(sent_gshut_community_to_neighbor.operation)) leaf_name_data.push_back(sent_gshut_community_to_neighbor.get_name_leafdata());
    if (stale_path_timeout.is_set || is_set(stale_path_timeout.operation)) leaf_name_data.push_back(stale_path_timeout.get_name_leafdata());
    if (synced_acked_version.is_set || is_set(synced_acked_version.operation)) leaf_name_data.push_back(synced_acked_version.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());
    if (use_max_prefix_warning_only.is_set || is_set(use_max_prefix_warning_only.operation)) leaf_name_data.push_back(use_max_prefix_warning_only.get_name_leafdata());
    if (vpn_update_gen_enabled.is_set || is_set(vpn_update_gen_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_enabled.get_name_leafdata());
    if (vpn_update_gen_trigger_enabled.is_set || is_set(vpn_update_gen_trigger_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_trigger_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-standby")
    {
        for(auto const & c : extended_community_standby)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby>();
        c->parent = this;
        extended_community_standby.push_back(std::move(c));
        children[segment_path] = extended_community_standby.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-af-performance-statistics")
    {
        if(neighbor_af_performance_statistics != nullptr)
        {
            children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
        }
        else
        {
            neighbor_af_performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics>();
            neighbor_af_performance_statistics->parent = this;
            children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
        }
        return children.at("neighbor-af-performance-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::get_children()
{
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community_standby)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("neighbor-af-performance-statistics") == children.end())
    {
        if(neighbor_af_performance_statistics != nullptr)
        {
            children["neighbor-af-performance-statistics"] = neighbor_af_performance_statistics;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled = value;
    }
    if(value_path == "acked-version")
    {
        acked_version = value;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time = value;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi = value;
    }
    if(value_path == "advertise-afi-def-vrf-imp-disable")
    {
        advertise_afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable = value;
    }
    if(value_path == "advertise-afi-eo-r-ready")
    {
        advertise_afi_eo_r_ready = value;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg = value;
    }
    if(value_path == "advertise-afi-vrf-re-imp-disable")
    {
        advertise_afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv4afi-def-vrf-imp-disable")
    {
        advertise_evp_nv4afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv4afi-vrf-re-imp-disable")
    {
        advertise_evp_nv4afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv6afi-def-vrf-imp-disable")
    {
        advertise_evp_nv6afi_def_vrf_imp_disable = value;
    }
    if(value_path == "advertise-evp-nv6afi-vrf-re-imp-disable")
    {
        advertise_evp_nv6afi_vrf_re_imp_disable = value;
    }
    if(value_path == "advertise-local-labeled-route-unicast")
    {
        advertise_local_labeled_route_unicast = value;
    }
    if(value_path == "advertise-rt-type")
    {
        advertise_rt_type = value;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags = value;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid = value;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable = value;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp = value;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity = value;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count = value;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "eo-r-received-in-read-only")
    {
        eo_r_received_in_read_only = value;
    }
    if(value_path == "filter-group-index")
    {
        filter_group_index = value;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable = value;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable = value;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised = value;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received = value;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised = value;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received = value;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational = value;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational = value;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network = value;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart = value;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive = value;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send = value;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set = value;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set = value;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set = value;
    }
    if(value_path == "is-default-originate-sent")
    {
        is_default_originate_sent = value;
    }
    if(value_path == "is-ext-nh-encoding-capability-received")
    {
        is_ext_nh_encoding_capability_received = value;
    }
    if(value_path == "is-ext-nh-encoding-capability-sent")
    {
        is_ext_nh_encoding_capability_sent = value;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag = value;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt = value;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable = value;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy = value;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy = value;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client = value;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled = value;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent = value;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable = value;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present = value;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable = value;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable = value;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable = value;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby = value;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr = value;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed = value;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred = value;
    }
    if(value_path == "is-update-leaving")
    {
        is_update_leaving = value;
    }
    if(value_path == "is-update-throttled")
    {
        is_update_throttled = value;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on = value;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time = value;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent = value;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths = value;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths = value;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit = value;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time = value;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent = value;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining = value;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state = value;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state = value;
    }
    if(value_path == "neighbor-version")
    {
        neighbor_version = value;
    }
    if(value_path == "number-of-best-externalpaths")
    {
        number_of_best_externalpaths = value;
    }
    if(value_path == "number-of-bestpaths")
    {
        number_of_bestpaths = value;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received = value;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
    }
    if(value_path == "outstanding-version")
    {
        outstanding_version = value;
    }
    if(value_path == "outstanding-version-max")
    {
        outstanding_version_max = value;
    }
    if(value_path == "prefixes-accepted")
    {
        prefixes_accepted = value;
    }
    if(value_path == "prefixes-advertised")
    {
        prefixes_advertised = value;
    }
    if(value_path == "prefixes-be-advertised")
    {
        prefixes_be_advertised = value;
    }
    if(value_path == "prefixes-denied")
    {
        prefixes_denied = value;
    }
    if(value_path == "prefixes-denied-no-policy")
    {
        prefixes_denied_no_policy = value;
    }
    if(value_path == "prefixes-denied-non-cumulative")
    {
        prefixes_denied_non_cumulative = value;
    }
    if(value_path == "prefixes-denied-orf-policy")
    {
        prefixes_denied_orf_policy = value;
    }
    if(value_path == "prefixes-denied-policy")
    {
        prefixes_denied_policy = value;
    }
    if(value_path == "prefixes-denied-rt-permit")
    {
        prefixes_denied_rt_permit = value;
    }
    if(value_path == "prefixes-suppressed")
    {
        prefixes_suppressed = value;
    }
    if(value_path == "prefixes-synced")
    {
        prefixes_synced = value;
    }
    if(value_path == "prefixes-withdrawn")
    {
        prefixes_withdrawn = value;
    }
    if(value_path == "prefixes-withdrawn-not-found")
    {
        prefixes_withdrawn_not_found = value;
    }
    if(value_path == "refresh-acked-version")
    {
        refresh_acked_version = value;
    }
    if(value_path == "refresh-target-version")
    {
        refresh_target_version = value;
    }
    if(value_path == "refresh-version")
    {
        refresh_version = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates = value;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value = value;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf = value;
    }
    if(value_path == "route-refreshes-received")
    {
        route_refreshes_received = value;
    }
    if(value_path == "route-refreshes-sent")
    {
        route_refreshes_sent = value;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible = value;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor = value;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor = value;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor = value;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout = value;
    }
    if(value_path == "synced-acked-version")
    {
        synced_acked_version = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only = value;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled = value;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::NeighborAfPerformanceStatistics()
    :
    processed_messages{YType::uint32, "processed-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    split_horizon_update_blocked{YType::uint32, "split-horizon-update-blocked"},
    split_horizon_update_transmit{YType::uint32, "split-horizon-update-transmit"},
    split_horizon_withdraw_blocked{YType::uint32, "split-horizon-withdraw-blocked"},
    split_horizon_withdraw_transmit{YType::uint32, "split-horizon-withdraw-transmit"},
    sub_group_pending_message_count{YType::uint32, "sub-group-pending-message-count"}
{
    yang_name = "neighbor-af-performance-statistics"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::~NeighborAfPerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_data() const
{
    return processed_messages.is_set
	|| sent_messages.is_set
	|| split_horizon_update_blocked.is_set
	|| split_horizon_update_transmit.is_set
	|| split_horizon_withdraw_blocked.is_set
	|| split_horizon_withdraw_transmit.is_set
	|| sub_group_pending_message_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(split_horizon_update_blocked.operation)
	|| is_set(split_horizon_update_transmit.operation)
	|| is_set(split_horizon_withdraw_blocked.operation)
	|| is_set(split_horizon_withdraw_transmit.operation)
	|| is_set(sub_group_pending_message_count.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-performance-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfPerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_messages.is_set || is_set(processed_messages.operation)) leaf_name_data.push_back(processed_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (split_horizon_update_blocked.is_set || is_set(split_horizon_update_blocked.operation)) leaf_name_data.push_back(split_horizon_update_blocked.get_name_leafdata());
    if (split_horizon_update_transmit.is_set || is_set(split_horizon_update_transmit.operation)) leaf_name_data.push_back(split_horizon_update_transmit.get_name_leafdata());
    if (split_horizon_withdraw_blocked.is_set || is_set(split_horizon_withdraw_blocked.operation)) leaf_name_data.push_back(split_horizon_withdraw_blocked.get_name_leafdata());
    if (split_horizon_withdraw_transmit.is_set || is_set(split_horizon_withdraw_transmit.operation)) leaf_name_data.push_back(split_horizon_withdraw_transmit.get_name_leafdata());
    if (sub_group_pending_message_count.is_set || is_set(sub_group_pending_message_count.operation)) leaf_name_data.push_back(sub_group_pending_message_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::NeighborAfPerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-messages")
    {
        processed_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "split-horizon-update-blocked")
    {
        split_horizon_update_blocked = value;
    }
    if(value_path == "split-horizon-update-transmit")
    {
        split_horizon_update_transmit = value;
    }
    if(value_path == "split-horizon-withdraw-blocked")
    {
        split_horizon_withdraw_blocked = value;
    }
    if(value_path == "split-horizon-withdraw-transmit")
    {
        split_horizon_withdraw_transmit = value;
    }
    if(value_path == "sub-group-pending-message-count")
    {
        sub_group_pending_message_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::ExtendedCommunityStandby()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community-standby"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::~ExtendedCommunityStandby()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-standby";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunityStandby' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors::Neighbor::AfData::ExtendedCommunityStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::NextHopVrf()
    :
    last_notification_processing_time{YType::uint32, "last-notification-processing-time"},
    last_notificationication_time{YType::uint32, "last-notificationication-time"},
    max_notification_bestpath_changes{YType::uint32, "max-notification-bestpath-changes"},
    max_notification_bestpath_deletes{YType::uint32, "max-notification-bestpath-deletes"},
    max_proc_notification_time{YType::uint32, "max-proc-notification-time"},
    maximum_processing_time{YType::uint32, "maximum-processing-time"},
    total_processing_time{YType::uint32, "total-processing-time"}
{
    yang_name = "next-hop-vrf"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::~NextHopVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::has_data() const
{
    return last_notification_processing_time.is_set
	|| last_notificationication_time.is_set
	|| max_notification_bestpath_changes.is_set
	|| max_notification_bestpath_deletes.is_set
	|| max_proc_notification_time.is_set
	|| maximum_processing_time.is_set
	|| total_processing_time.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(last_notification_processing_time.operation)
	|| is_set(last_notificationication_time.operation)
	|| is_set(max_notification_bestpath_changes.operation)
	|| is_set(max_notification_bestpath_deletes.operation)
	|| is_set(max_proc_notification_time.operation)
	|| is_set(maximum_processing_time.operation)
	|| is_set(total_processing_time.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopVrf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_notification_processing_time.is_set || is_set(last_notification_processing_time.operation)) leaf_name_data.push_back(last_notification_processing_time.get_name_leafdata());
    if (last_notificationication_time.is_set || is_set(last_notificationication_time.operation)) leaf_name_data.push_back(last_notificationication_time.get_name_leafdata());
    if (max_notification_bestpath_changes.is_set || is_set(max_notification_bestpath_changes.operation)) leaf_name_data.push_back(max_notification_bestpath_changes.get_name_leafdata());
    if (max_notification_bestpath_deletes.is_set || is_set(max_notification_bestpath_deletes.operation)) leaf_name_data.push_back(max_notification_bestpath_deletes.get_name_leafdata());
    if (max_proc_notification_time.is_set || is_set(max_proc_notification_time.operation)) leaf_name_data.push_back(max_proc_notification_time.get_name_leafdata());
    if (maximum_processing_time.is_set || is_set(maximum_processing_time.operation)) leaf_name_data.push_back(maximum_processing_time.get_name_leafdata());
    if (total_processing_time.is_set || is_set(total_processing_time.operation)) leaf_name_data.push_back(total_processing_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-notification-processing-time")
    {
        last_notification_processing_time = value;
    }
    if(value_path == "last-notificationication-time")
    {
        last_notificationication_time = value;
    }
    if(value_path == "max-notification-bestpath-changes")
    {
        max_notification_bestpath_changes = value;
    }
    if(value_path == "max-notification-bestpath-deletes")
    {
        max_notification_bestpath_deletes = value;
    }
    if(value_path == "max-proc-notification-time")
    {
        max_proc_notification_time = value;
    }
    if(value_path == "maximum-processing-time")
    {
        maximum_processing_time = value;
    }
    if(value_path == "total-processing-time")
    {
        total_processing_time = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRanges()
{
    yang_name = "neighbor-ranges"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::~NeighborRanges()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::has_data() const
{
    for (std::size_t index=0; index<neighbor_range.size(); index++)
    {
        if(neighbor_range[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::has_operation() const
{
    for (std::size_t index=0; index<neighbor_range.size(); index++)
    {
        if(neighbor_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-ranges";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRanges' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-range")
    {
        for(auto const & c : neighbor_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange>();
        c->parent = this;
        neighbor_range.push_back(std::move(c));
        children[segment_path] = neighbor_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::get_children()
{
    for (auto const & c : neighbor_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::NeighborRange()
    :
    neighbor_range_address{YType::str, "neighbor-range-address"},
    active_bmp_servers{YType::uint8, "active-bmp-servers"},
    addpath_receive_disable{YType::boolean, "addpath-receive-disable"},
    addpath_receive_enable{YType::boolean, "addpath-receive-enable"},
    addpath_send_disable{YType::boolean, "addpath-send-disable"},
    addpath_send_enable{YType::boolean, "addpath-send-enable"},
    attrf_group_name{YType::str, "attrf-group-name"},
    bfd_minintervalval{YType::uint32, "bfd-minintervalval"},
    bfd_multiplierval{YType::uint32, "bfd-multiplierval"},
    bfd_session_enable_mode{YType::enumeration, "bfd-session-enable-mode"},
    configured_hold_time{YType::uint16, "configured-hold-time"},
    configured_keepalive{YType::uint16, "configured-keepalive"},
    configured_min_acc_hold_time{YType::uint16, "configured-min-acc-hold-time"},
    current_peers{YType::uint32, "current-peers"},
    description{YType::str, "description"},
    discard_as4_path{YType::uint32, "discard-as4-path"},
    dmz_link_bandwidth{YType::uint32, "dmz-link-bandwidth"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_mode{YType::enumeration, "ebgp-send-dmz-mode"},
    ebgp_time_to_live{YType::uint32, "ebgp-time-to-live"},
    egress_peer_engineering_enabled{YType::boolean, "egress-peer-engineering-enabled"},
    gr_restart_time{YType::uint32, "gr-restart-time"},
    gr_stale_path_time{YType::uint32, "gr-stale-path-time"},
    graceful_restart_enabled_nbr{YType::boolean, "graceful-restart-enabled-nbr"},
    has_internal_link{YType::boolean, "has-internal-link"},
    idle_watch_time{YType::uint32, "idle-watch-time"},
    ignore_connected{YType::boolean, "ignore-connected"},
    internal_vpn_client{YType::boolean, "internal-vpn-client"},
    is_administratively_shut_down{YType::boolean, "is-administratively-shut-down"},
    is_capability_negotiation_performed{YType::boolean, "is-capability-negotiation-performed"},
    is_ebgp_multihop_bgpmpls_forwarding_disabled{YType::boolean, "is-ebgp-multihop-bgpmpls-forwarding-disabled"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    is_neighbor_max_prefix_shutdown{YType::boolean, "is-neighbor-max-prefix-shutdown"},
    is_out_of_memory_forced_up{YType::boolean, "is-out-of-memory-forced-up"},
    is_passive_close{YType::boolean, "is-passive-close"},
    islocal_address_cfg{YType::boolean, "islocal-address-cfg"},
    local_as{YType::uint32, "local-as"},
    local_as_dual_as{YType::boolean, "local-as-dual-as"},
    local_as_dual_as_mode_native{YType::boolean, "local-as-dual-as-mode-native"},
    local_as_no_prepend{YType::boolean, "local-as-no-prepend"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    max_peers{YType::uint32, "max-peers"},
    min_advertise_interval{YType::uint32, "min-advertise-interval"},
    min_advertise_interval_msecs{YType::uint32, "min-advertise-interval-msecs"},
    min_origination_interval{YType::uint16, "min-origination-interval"},
    msg_buf_count{YType::uint32, "msg-buf-count"},
    msg_bug_circular{YType::boolean, "msg-bug-circular"},
    msg_log_in{YType::uint32, "msg-log-in"},
    msg_log_out{YType::uint32, "msg-log-out"},
    nbr_cluster_id{YType::uint32, "nbr-cluster-id"},
    nbr_enforce_first_as{YType::boolean, "nbr-enforce-first-as"},
    nbr_in_cluster{YType::uint8, "nbr-in-cluster"},
    nbr_rcv_size{YType::uint32, "nbr-rcv-size"},
    nbr_send_size{YType::uint32, "nbr-send-size"},
    neighbor_local_as{YType::uint32, "neighbor-local-as"},
    neighbor_range_prefix_length{YType::uint8, "neighbor-range-prefix-length"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    oper_attrf_enable{YType::boolean, "oper-attrf-enable"},
    range_inst_error{YType::uint32, "range-inst-error"},
    range_max_drop{YType::uint32, "range-max-drop"},
    range_open_accepted{YType::uint32, "range-open-accepted"},
    range_open_match{YType::uint32, "range-open-match"},
    remote_as{YType::uint32, "remote-as"},
    remote_as_list_name{YType::str, "remote-as-list-name"},
    remote_as_number{YType::uint32, "remote-as-number"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_disable{YType::boolean, "rpki-disable"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    speaker_id{YType::uint8, "speaker-id"},
    standby_rp{YType::boolean, "standby-rp"},
    suppress4_byte_as{YType::boolean, "suppress4-byte-as"},
    syslog_enable{YType::boolean, "syslog-enable"},
    tcp_session_open_mode{YType::enumeration, "tcp-session-open-mode"},
    tcpmss{YType::uint32, "tcpmss"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    upd_errh_noreset{YType::boolean, "upd-errh-noreset"},
    update_source{YType::str, "update-source"},
    vrf_name{YType::str, "vrf-name"}
    	,
    cfg_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress>())
	,connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress>())
	,graceful_maintenance(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance>())
{
    cfg_local_address->parent = this;
    children["cfg-local-address"] = cfg_local_address;

    connection_local_address->parent = this;
    children["connection-local-address"] = connection_local_address;

    connection_remote_address->parent = this;
    children["connection-remote-address"] = connection_remote_address;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    yang_name = "neighbor-range"; yang_parent_name = "neighbor-ranges";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::~NeighborRange()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::has_data() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return neighbor_range_address.is_set
	|| active_bmp_servers.is_set
	|| addpath_receive_disable.is_set
	|| addpath_receive_enable.is_set
	|| addpath_send_disable.is_set
	|| addpath_send_enable.is_set
	|| attrf_group_name.is_set
	|| bfd_minintervalval.is_set
	|| bfd_multiplierval.is_set
	|| bfd_session_enable_mode.is_set
	|| configured_hold_time.is_set
	|| configured_keepalive.is_set
	|| configured_min_acc_hold_time.is_set
	|| current_peers.is_set
	|| description.is_set
	|| discard_as4_path.is_set
	|| dmz_link_bandwidth.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_mode.is_set
	|| ebgp_time_to_live.is_set
	|| egress_peer_engineering_enabled.is_set
	|| gr_restart_time.is_set
	|| gr_stale_path_time.is_set
	|| graceful_restart_enabled_nbr.is_set
	|| has_internal_link.is_set
	|| idle_watch_time.is_set
	|| ignore_connected.is_set
	|| internal_vpn_client.is_set
	|| is_administratively_shut_down.is_set
	|| is_capability_negotiation_performed.is_set
	|| is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set
	|| is_local_address_configured.is_set
	|| is_neighbor_max_prefix_shutdown.is_set
	|| is_out_of_memory_forced_up.is_set
	|| is_passive_close.is_set
	|| islocal_address_cfg.is_set
	|| local_as.is_set
	|| local_as_dual_as.is_set
	|| local_as_dual_as_mode_native.is_set
	|| local_as_no_prepend.is_set
	|| local_as_replace_as.is_set
	|| max_peers.is_set
	|| min_advertise_interval.is_set
	|| min_advertise_interval_msecs.is_set
	|| min_origination_interval.is_set
	|| msg_buf_count.is_set
	|| msg_bug_circular.is_set
	|| msg_log_in.is_set
	|| msg_log_out.is_set
	|| nbr_cluster_id.is_set
	|| nbr_enforce_first_as.is_set
	|| nbr_in_cluster.is_set
	|| nbr_rcv_size.is_set
	|| nbr_send_size.is_set
	|| neighbor_local_as.is_set
	|| neighbor_range_prefix_length.is_set
	|| nsr_enabled.is_set
	|| oper_attrf_enable.is_set
	|| range_inst_error.is_set
	|| range_max_drop.is_set
	|| range_open_accepted.is_set
	|| range_open_match.is_set
	|| remote_as.is_set
	|| remote_as_list_name.is_set
	|| remote_as_number.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_disable.is_set
	|| rpki_signal_ibgp.is_set
	|| rpki_use_validity.is_set
	|| speaker_id.is_set
	|| standby_rp.is_set
	|| suppress4_byte_as.is_set
	|| syslog_enable.is_set
	|| tcp_session_open_mode.is_set
	|| tcpmss.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| ttl_security_enabled.is_set
	|| upd_errh_noreset.is_set
	|| update_source.is_set
	|| vrf_name.is_set
	|| (cfg_local_address !=  nullptr && cfg_local_address->has_data())
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::has_operation() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_range_address.operation)
	|| is_set(active_bmp_servers.operation)
	|| is_set(addpath_receive_disable.operation)
	|| is_set(addpath_receive_enable.operation)
	|| is_set(addpath_send_disable.operation)
	|| is_set(addpath_send_enable.operation)
	|| is_set(attrf_group_name.operation)
	|| is_set(bfd_minintervalval.operation)
	|| is_set(bfd_multiplierval.operation)
	|| is_set(bfd_session_enable_mode.operation)
	|| is_set(configured_hold_time.operation)
	|| is_set(configured_keepalive.operation)
	|| is_set(configured_min_acc_hold_time.operation)
	|| is_set(current_peers.operation)
	|| is_set(description.operation)
	|| is_set(discard_as4_path.operation)
	|| is_set(dmz_link_bandwidth.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_mode.operation)
	|| is_set(ebgp_time_to_live.operation)
	|| is_set(egress_peer_engineering_enabled.operation)
	|| is_set(gr_restart_time.operation)
	|| is_set(gr_stale_path_time.operation)
	|| is_set(graceful_restart_enabled_nbr.operation)
	|| is_set(has_internal_link.operation)
	|| is_set(idle_watch_time.operation)
	|| is_set(ignore_connected.operation)
	|| is_set(internal_vpn_client.operation)
	|| is_set(is_administratively_shut_down.operation)
	|| is_set(is_capability_negotiation_performed.operation)
	|| is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(is_neighbor_max_prefix_shutdown.operation)
	|| is_set(is_out_of_memory_forced_up.operation)
	|| is_set(is_passive_close.operation)
	|| is_set(islocal_address_cfg.operation)
	|| is_set(local_as.operation)
	|| is_set(local_as_dual_as.operation)
	|| is_set(local_as_dual_as_mode_native.operation)
	|| is_set(local_as_no_prepend.operation)
	|| is_set(local_as_replace_as.operation)
	|| is_set(max_peers.operation)
	|| is_set(min_advertise_interval.operation)
	|| is_set(min_advertise_interval_msecs.operation)
	|| is_set(min_origination_interval.operation)
	|| is_set(msg_buf_count.operation)
	|| is_set(msg_bug_circular.operation)
	|| is_set(msg_log_in.operation)
	|| is_set(msg_log_out.operation)
	|| is_set(nbr_cluster_id.operation)
	|| is_set(nbr_enforce_first_as.operation)
	|| is_set(nbr_in_cluster.operation)
	|| is_set(nbr_rcv_size.operation)
	|| is_set(nbr_send_size.operation)
	|| is_set(neighbor_local_as.operation)
	|| is_set(neighbor_range_prefix_length.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(oper_attrf_enable.operation)
	|| is_set(range_inst_error.operation)
	|| is_set(range_max_drop.operation)
	|| is_set(range_open_accepted.operation)
	|| is_set(range_open_match.operation)
	|| is_set(remote_as.operation)
	|| is_set(remote_as_list_name.operation)
	|| is_set(remote_as_number.operation)
	|| is_set(rpki_allow_invalid.operation)
	|| is_set(rpki_disable.operation)
	|| is_set(rpki_signal_ibgp.operation)
	|| is_set(rpki_use_validity.operation)
	|| is_set(speaker_id.operation)
	|| is_set(standby_rp.operation)
	|| is_set(suppress4_byte_as.operation)
	|| is_set(syslog_enable.operation)
	|| is_set(tcp_session_open_mode.operation)
	|| is_set(tcpmss.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(upd_errh_noreset.operation)
	|| is_set(update_source.operation)
	|| is_set(vrf_name.operation)
	|| (cfg_local_address !=  nullptr && cfg_local_address->has_operation())
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-range" <<"[neighbor-range-address='" <<neighbor_range_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborRange' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_range_address.is_set || is_set(neighbor_range_address.operation)) leaf_name_data.push_back(neighbor_range_address.get_name_leafdata());
    if (active_bmp_servers.is_set || is_set(active_bmp_servers.operation)) leaf_name_data.push_back(active_bmp_servers.get_name_leafdata());
    if (addpath_receive_disable.is_set || is_set(addpath_receive_disable.operation)) leaf_name_data.push_back(addpath_receive_disable.get_name_leafdata());
    if (addpath_receive_enable.is_set || is_set(addpath_receive_enable.operation)) leaf_name_data.push_back(addpath_receive_enable.get_name_leafdata());
    if (addpath_send_disable.is_set || is_set(addpath_send_disable.operation)) leaf_name_data.push_back(addpath_send_disable.get_name_leafdata());
    if (addpath_send_enable.is_set || is_set(addpath_send_enable.operation)) leaf_name_data.push_back(addpath_send_enable.get_name_leafdata());
    if (attrf_group_name.is_set || is_set(attrf_group_name.operation)) leaf_name_data.push_back(attrf_group_name.get_name_leafdata());
    if (bfd_minintervalval.is_set || is_set(bfd_minintervalval.operation)) leaf_name_data.push_back(bfd_minintervalval.get_name_leafdata());
    if (bfd_multiplierval.is_set || is_set(bfd_multiplierval.operation)) leaf_name_data.push_back(bfd_multiplierval.get_name_leafdata());
    if (bfd_session_enable_mode.is_set || is_set(bfd_session_enable_mode.operation)) leaf_name_data.push_back(bfd_session_enable_mode.get_name_leafdata());
    if (configured_hold_time.is_set || is_set(configured_hold_time.operation)) leaf_name_data.push_back(configured_hold_time.get_name_leafdata());
    if (configured_keepalive.is_set || is_set(configured_keepalive.operation)) leaf_name_data.push_back(configured_keepalive.get_name_leafdata());
    if (configured_min_acc_hold_time.is_set || is_set(configured_min_acc_hold_time.operation)) leaf_name_data.push_back(configured_min_acc_hold_time.get_name_leafdata());
    if (current_peers.is_set || is_set(current_peers.operation)) leaf_name_data.push_back(current_peers.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (discard_as4_path.is_set || is_set(discard_as4_path.operation)) leaf_name_data.push_back(discard_as4_path.get_name_leafdata());
    if (dmz_link_bandwidth.is_set || is_set(dmz_link_bandwidth.operation)) leaf_name_data.push_back(dmz_link_bandwidth.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_mode.is_set || is_set(ebgp_send_dmz_mode.operation)) leaf_name_data.push_back(ebgp_send_dmz_mode.get_name_leafdata());
    if (ebgp_time_to_live.is_set || is_set(ebgp_time_to_live.operation)) leaf_name_data.push_back(ebgp_time_to_live.get_name_leafdata());
    if (egress_peer_engineering_enabled.is_set || is_set(egress_peer_engineering_enabled.operation)) leaf_name_data.push_back(egress_peer_engineering_enabled.get_name_leafdata());
    if (gr_restart_time.is_set || is_set(gr_restart_time.operation)) leaf_name_data.push_back(gr_restart_time.get_name_leafdata());
    if (gr_stale_path_time.is_set || is_set(gr_stale_path_time.operation)) leaf_name_data.push_back(gr_stale_path_time.get_name_leafdata());
    if (graceful_restart_enabled_nbr.is_set || is_set(graceful_restart_enabled_nbr.operation)) leaf_name_data.push_back(graceful_restart_enabled_nbr.get_name_leafdata());
    if (has_internal_link.is_set || is_set(has_internal_link.operation)) leaf_name_data.push_back(has_internal_link.get_name_leafdata());
    if (idle_watch_time.is_set || is_set(idle_watch_time.operation)) leaf_name_data.push_back(idle_watch_time.get_name_leafdata());
    if (ignore_connected.is_set || is_set(ignore_connected.operation)) leaf_name_data.push_back(ignore_connected.get_name_leafdata());
    if (internal_vpn_client.is_set || is_set(internal_vpn_client.operation)) leaf_name_data.push_back(internal_vpn_client.get_name_leafdata());
    if (is_administratively_shut_down.is_set || is_set(is_administratively_shut_down.operation)) leaf_name_data.push_back(is_administratively_shut_down.get_name_leafdata());
    if (is_capability_negotiation_performed.is_set || is_set(is_capability_negotiation_performed.operation)) leaf_name_data.push_back(is_capability_negotiation_performed.get_name_leafdata());
    if (is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set || is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)) leaf_name_data.push_back(is_ebgp_multihop_bgpmpls_forwarding_disabled.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (is_neighbor_max_prefix_shutdown.is_set || is_set(is_neighbor_max_prefix_shutdown.operation)) leaf_name_data.push_back(is_neighbor_max_prefix_shutdown.get_name_leafdata());
    if (is_out_of_memory_forced_up.is_set || is_set(is_out_of_memory_forced_up.operation)) leaf_name_data.push_back(is_out_of_memory_forced_up.get_name_leafdata());
    if (is_passive_close.is_set || is_set(is_passive_close.operation)) leaf_name_data.push_back(is_passive_close.get_name_leafdata());
    if (islocal_address_cfg.is_set || is_set(islocal_address_cfg.operation)) leaf_name_data.push_back(islocal_address_cfg.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (local_as_dual_as.is_set || is_set(local_as_dual_as.operation)) leaf_name_data.push_back(local_as_dual_as.get_name_leafdata());
    if (local_as_dual_as_mode_native.is_set || is_set(local_as_dual_as_mode_native.operation)) leaf_name_data.push_back(local_as_dual_as_mode_native.get_name_leafdata());
    if (local_as_no_prepend.is_set || is_set(local_as_no_prepend.operation)) leaf_name_data.push_back(local_as_no_prepend.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.operation)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (max_peers.is_set || is_set(max_peers.operation)) leaf_name_data.push_back(max_peers.get_name_leafdata());
    if (min_advertise_interval.is_set || is_set(min_advertise_interval.operation)) leaf_name_data.push_back(min_advertise_interval.get_name_leafdata());
    if (min_advertise_interval_msecs.is_set || is_set(min_advertise_interval_msecs.operation)) leaf_name_data.push_back(min_advertise_interval_msecs.get_name_leafdata());
    if (min_origination_interval.is_set || is_set(min_origination_interval.operation)) leaf_name_data.push_back(min_origination_interval.get_name_leafdata());
    if (msg_buf_count.is_set || is_set(msg_buf_count.operation)) leaf_name_data.push_back(msg_buf_count.get_name_leafdata());
    if (msg_bug_circular.is_set || is_set(msg_bug_circular.operation)) leaf_name_data.push_back(msg_bug_circular.get_name_leafdata());
    if (msg_log_in.is_set || is_set(msg_log_in.operation)) leaf_name_data.push_back(msg_log_in.get_name_leafdata());
    if (msg_log_out.is_set || is_set(msg_log_out.operation)) leaf_name_data.push_back(msg_log_out.get_name_leafdata());
    if (nbr_cluster_id.is_set || is_set(nbr_cluster_id.operation)) leaf_name_data.push_back(nbr_cluster_id.get_name_leafdata());
    if (nbr_enforce_first_as.is_set || is_set(nbr_enforce_first_as.operation)) leaf_name_data.push_back(nbr_enforce_first_as.get_name_leafdata());
    if (nbr_in_cluster.is_set || is_set(nbr_in_cluster.operation)) leaf_name_data.push_back(nbr_in_cluster.get_name_leafdata());
    if (nbr_rcv_size.is_set || is_set(nbr_rcv_size.operation)) leaf_name_data.push_back(nbr_rcv_size.get_name_leafdata());
    if (nbr_send_size.is_set || is_set(nbr_send_size.operation)) leaf_name_data.push_back(nbr_send_size.get_name_leafdata());
    if (neighbor_local_as.is_set || is_set(neighbor_local_as.operation)) leaf_name_data.push_back(neighbor_local_as.get_name_leafdata());
    if (neighbor_range_prefix_length.is_set || is_set(neighbor_range_prefix_length.operation)) leaf_name_data.push_back(neighbor_range_prefix_length.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (oper_attrf_enable.is_set || is_set(oper_attrf_enable.operation)) leaf_name_data.push_back(oper_attrf_enable.get_name_leafdata());
    if (range_inst_error.is_set || is_set(range_inst_error.operation)) leaf_name_data.push_back(range_inst_error.get_name_leafdata());
    if (range_max_drop.is_set || is_set(range_max_drop.operation)) leaf_name_data.push_back(range_max_drop.get_name_leafdata());
    if (range_open_accepted.is_set || is_set(range_open_accepted.operation)) leaf_name_data.push_back(range_open_accepted.get_name_leafdata());
    if (range_open_match.is_set || is_set(range_open_match.operation)) leaf_name_data.push_back(range_open_match.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remote_as_list_name.is_set || is_set(remote_as_list_name.operation)) leaf_name_data.push_back(remote_as_list_name.get_name_leafdata());
    if (remote_as_number.is_set || is_set(remote_as_number.operation)) leaf_name_data.push_back(remote_as_number.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.operation)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_disable.is_set || is_set(rpki_disable.operation)) leaf_name_data.push_back(rpki_disable.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.operation)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.operation)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (standby_rp.is_set || is_set(standby_rp.operation)) leaf_name_data.push_back(standby_rp.get_name_leafdata());
    if (suppress4_byte_as.is_set || is_set(suppress4_byte_as.operation)) leaf_name_data.push_back(suppress4_byte_as.get_name_leafdata());
    if (syslog_enable.is_set || is_set(syslog_enable.operation)) leaf_name_data.push_back(syslog_enable.get_name_leafdata());
    if (tcp_session_open_mode.is_set || is_set(tcp_session_open_mode.operation)) leaf_name_data.push_back(tcp_session_open_mode.get_name_leafdata());
    if (tcpmss.is_set || is_set(tcpmss.operation)) leaf_name_data.push_back(tcpmss.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (upd_errh_noreset.is_set || is_set(upd_errh_noreset.operation)) leaf_name_data.push_back(upd_errh_noreset.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.operation)) leaf_name_data.push_back(update_source.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-data")
    {
        for(auto const & c : af_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData>();
        c->parent = this;
        af_data.push_back(std::move(c));
        children[segment_path] = af_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "cfg-local-address")
    {
        if(cfg_local_address != nullptr)
        {
            children["cfg-local-address"] = cfg_local_address;
        }
        else
        {
            cfg_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress>();
            cfg_local_address->parent = this;
            children["cfg-local-address"] = cfg_local_address;
        }
        return children.at("cfg-local-address");
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
        else
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress>();
            connection_local_address->parent = this;
            children["connection-local-address"] = connection_local_address;
        }
        return children.at("connection-local-address");
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
        else
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress>();
            connection_remote_address->parent = this;
            children["connection-remote-address"] = connection_remote_address;
        }
        return children.at("connection-remote-address");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::get_children()
{
    for (auto const & c : af_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("cfg-local-address") == children.end())
    {
        if(cfg_local_address != nullptr)
        {
            children["cfg-local-address"] = cfg_local_address;
        }
    }

    if(children.find("connection-local-address") == children.end())
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
    }

    if(children.find("connection-remote-address") == children.end())
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-range-address")
    {
        neighbor_range_address = value;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers = value;
    }
    if(value_path == "addpath-receive-disable")
    {
        addpath_receive_disable = value;
    }
    if(value_path == "addpath-receive-enable")
    {
        addpath_receive_enable = value;
    }
    if(value_path == "addpath-send-disable")
    {
        addpath_send_disable = value;
    }
    if(value_path == "addpath-send-enable")
    {
        addpath_send_enable = value;
    }
    if(value_path == "attrf-group-name")
    {
        attrf_group_name = value;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval = value;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval = value;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode = value;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time = value;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive = value;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time = value;
    }
    if(value_path == "current-peers")
    {
        current_peers = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path = value;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode = value;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live = value;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled = value;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time = value;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time = value;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr = value;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link = value;
    }
    if(value_path == "idle-watch-time")
    {
        idle_watch_time = value;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected = value;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client = value;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down = value;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed = value;
    }
    if(value_path == "is-ebgp-multihop-bgpmpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgpmpls_forwarding_disabled = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown = value;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up = value;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close = value;
    }
    if(value_path == "islocal-address-cfg")
    {
        islocal_address_cfg = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as = value;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native = value;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend = value;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
    }
    if(value_path == "max-peers")
    {
        max_peers = value;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval = value;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs = value;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval = value;
    }
    if(value_path == "msg-buf-count")
    {
        msg_buf_count = value;
    }
    if(value_path == "msg-bug-circular")
    {
        msg_bug_circular = value;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in = value;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out = value;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id = value;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as = value;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster = value;
    }
    if(value_path == "nbr-rcv-size")
    {
        nbr_rcv_size = value;
    }
    if(value_path == "nbr-send-size")
    {
        nbr_send_size = value;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as = value;
    }
    if(value_path == "neighbor-range-prefix-length")
    {
        neighbor_range_prefix_length = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "oper-attrf-enable")
    {
        oper_attrf_enable = value;
    }
    if(value_path == "range-inst-error")
    {
        range_inst_error = value;
    }
    if(value_path == "range-max-drop")
    {
        range_max_drop = value;
    }
    if(value_path == "range-open-accepted")
    {
        range_open_accepted = value;
    }
    if(value_path == "range-open-match")
    {
        range_open_match = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remote-as-list-name")
    {
        remote_as_list_name = value;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number = value;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable = value;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "standby-rp")
    {
        standby_rp = value;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as = value;
    }
    if(value_path == "syslog-enable")
    {
        syslog_enable = value;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode = value;
    }
    if(value_path == "tcpmss")
    {
        tcpmss = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "upd-errh-noreset")
    {
        upd_errh_noreset = value;
    }
    if(value_path == "update-source")
    {
        update_source = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-local-address"; yang_parent_name = "neighbor-range";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-remote-address"; yang_parent_name = "neighbor-range";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::GracefulMaintenance()
    :
    gshut_active{YType::boolean, "gshut-active"},
    gshut_exists{YType::boolean, "gshut-exists"},
    gshut_local_active{YType::boolean, "gshut-local-active"},
    gshut_locpref{YType::uint32, "gshut-locpref"},
    gshut_locpref_set{YType::boolean, "gshut-locpref-set"},
    gshut_prepends{YType::uint8, "gshut-prepends"}
{
    yang_name = "graceful-maintenance"; yang_parent_name = "neighbor-range";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::~GracefulMaintenance()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::has_data() const
{
    return gshut_active.is_set
	|| gshut_exists.is_set
	|| gshut_local_active.is_set
	|| gshut_locpref.is_set
	|| gshut_locpref_set.is_set
	|| gshut_prepends.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::has_operation() const
{
    return is_set(operation)
	|| is_set(gshut_active.operation)
	|| is_set(gshut_exists.operation)
	|| is_set(gshut_local_active.operation)
	|| is_set(gshut_locpref.operation)
	|| is_set(gshut_locpref_set.operation)
	|| is_set(gshut_prepends.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-maintenance";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulMaintenance' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gshut_active.is_set || is_set(gshut_active.operation)) leaf_name_data.push_back(gshut_active.get_name_leafdata());
    if (gshut_exists.is_set || is_set(gshut_exists.operation)) leaf_name_data.push_back(gshut_exists.get_name_leafdata());
    if (gshut_local_active.is_set || is_set(gshut_local_active.operation)) leaf_name_data.push_back(gshut_local_active.get_name_leafdata());
    if (gshut_locpref.is_set || is_set(gshut_locpref.operation)) leaf_name_data.push_back(gshut_locpref.get_name_leafdata());
    if (gshut_locpref_set.is_set || is_set(gshut_locpref_set.operation)) leaf_name_data.push_back(gshut_locpref_set.get_name_leafdata());
    if (gshut_prepends.is_set || is_set(gshut_prepends.operation)) leaf_name_data.push_back(gshut_prepends.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::GracefulMaintenance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gshut-active")
    {
        gshut_active = value;
    }
    if(value_path == "gshut-exists")
    {
        gshut_exists = value;
    }
    if(value_path == "gshut-local-active")
    {
        gshut_local_active = value;
    }
    if(value_path == "gshut-locpref")
    {
        gshut_locpref = value;
    }
    if(value_path == "gshut-locpref-set")
    {
        gshut_locpref_set = value;
    }
    if(value_path == "gshut-prepends")
    {
        gshut_prepends = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::CfgLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "cfg-local-address"; yang_parent_name = "neighbor-range";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::~CfgLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfg-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CfgLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "cfg-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "cfg-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "cfg-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "cfg-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::CfgLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::AfData()
    :
    accept_own_enabled{YType::boolean, "accept-own-enabled"},
    address_family_long_lived_time{YType::uint32, "address-family-long-lived-time"},
    advertise_afi{YType::boolean, "advertise-afi"},
    advertise_afi_disable{YType::boolean, "advertise-afi-disable"},
    advertise_afi_local{YType::boolean, "advertise-afi-local"},
    advertise_afi_reorg{YType::boolean, "advertise-afi-reorg"},
    advertise_v4_flags{YType::uint32, "advertise-v4-flags"},
    advertise_v6_flags{YType::uint32, "advertise-v6-flags"},
    af_name{YType::enumeration, "af-name"},
    afrpki_allow_invalid{YType::boolean, "afrpki-allow-invalid"},
    afrpki_disable{YType::boolean, "afrpki-disable"},
    afrpki_signal_ibgp{YType::boolean, "afrpki-signal-ibgp"},
    afrpki_use_validity{YType::boolean, "afrpki-use-validity"},
    allow_as_in_count{YType::uint32, "allow-as-in-count"},
    always_use_next_hop_local{YType::boolean, "always-use-next-hop-local"},
    flowspec_redirect_validation_d_isable{YType::boolean, "flowspec-redirect-validation-d-isable"},
    flowspec_validation_d_isable{YType::boolean, "flowspec-validation-d-isable"},
    import_reoriginate{YType::boolean, "import-reoriginate"},
    import_reoriginate_stitching{YType::boolean, "import-reoriginate-stitching"},
    import_stitching{YType::boolean, "import-stitching"},
    is_add_path_receive_capability_advertised{YType::boolean, "is-add-path-receive-capability-advertised"},
    is_add_path_receive_capability_received{YType::boolean, "is-add-path-receive-capability-received"},
    is_add_path_send_capability_advertised{YType::boolean, "is-add-path-send-capability-advertised"},
    is_add_path_send_capability_received{YType::boolean, "is-add-path-send-capability-received"},
    is_addpath_receive_operational{YType::boolean, "is-addpath-receive-operational"},
    is_addpath_send_operational{YType::boolean, "is-addpath-send-operational"},
    is_advertise_permanent_network{YType::boolean, "is-advertise-permanent-network"},
    is_advertised_graceful_restart{YType::boolean, "is-advertised-graceful-restart"},
    is_advertised_orf_receive{YType::boolean, "is-advertised-orf-receive"},
    is_advertised_orf_send{YType::boolean, "is-advertised-orf-send"},
    is_aigp_set{YType::boolean, "is-aigp-set"},
    is_allow_as_in_set{YType::boolean, "is-allow-as-in-set"},
    is_as_override_set{YType::boolean, "is-as-override-set"},
    is_graceful_restart_state_flag{YType::boolean, "is-graceful-restart-state-flag"},
    is_legacy_pe_rt{YType::boolean, "is-legacy-pe-rt"},
    is_neighbor_af_capable{YType::boolean, "is-neighbor-af-capable"},
    is_neighbor_ebgp_without_inbound_policy{YType::boolean, "is-neighbor-ebgp-without-inbound-policy"},
    is_neighbor_ebgp_without_outbound_policy{YType::boolean, "is-neighbor-ebgp-without-outbound-policy"},
    is_neighbor_route_reflector_client{YType::boolean, "is-neighbor-route-reflector-client"},
    is_orf_send_scheduled{YType::boolean, "is-orf-send-scheduled"},
    is_orf_sent{YType::boolean, "is-orf-sent"},
    is_orr_root_address_configured{YType::boolean, "is-orr-root-address-configured"},
    is_peer_orf_capable{YType::boolean, "is-peer-orf-capable"},
    is_prefix_orf_present{YType::boolean, "is-prefix-orf-present"},
    is_received_graceful_restart_capable{YType::boolean, "is-received-graceful-restart-capable"},
    is_received_orf_receive_capable{YType::boolean, "is-received-orf-receive-capable"},
    is_received_orf_send_capable{YType::boolean, "is-received-orf-send-capable"},
    is_rt_present{YType::boolean, "is-rt-present"},
    is_rt_present_standby{YType::boolean, "is-rt-present-standby"},
    is_send_mcast_attr{YType::boolean, "is-send-mcast-attr"},
    is_soft_reconfiguration_inbound_allowed{YType::boolean, "is-soft-reconfiguration-inbound-allowed"},
    is_update_deferred{YType::boolean, "is-update-deferred"},
    is_use_soft_reconfiguration_always_on{YType::boolean, "is-use-soft-reconfiguration-always-on"},
    local_restart_time{YType::uint32, "local-restart-time"},
    long_lived_graceful_restart_capability_received{YType::boolean, "long-lived-graceful-restart-capability-received"},
    long_lived_graceful_restart_stale_time_accept{YType::uint32, "long-lived-graceful-restart-stale-time-accept"},
    long_lived_graceful_restart_stale_time_configured{YType::boolean, "long-lived-graceful-restart-stale-time-configured"},
    long_lived_graceful_restart_stale_time_received{YType::uint32, "long-lived-graceful-restart-stale-time-received"},
    long_lived_graceful_restart_stale_time_sent{YType::uint32, "long-lived-graceful-restart-stale-time-sent"},
    max_prefix_discard_extra_paths{YType::boolean, "max-prefix-discard-extra-paths"},
    max_prefix_exceed_discard_paths{YType::boolean, "max-prefix-exceed-discard-paths"},
    max_prefix_limit{YType::uint32, "max-prefix-limit"},
    max_prefix_restart_time{YType::uint16, "max-prefix-restart-time"},
    max_prefix_threshold_percent{YType::uint8, "max-prefix-threshold-percent"},
    neighbor_default_originate{YType::boolean, "neighbor-default-originate"},
    neighbor_long_lived_graceful_restart_capable{YType::boolean, "neighbor-long-lived-graceful-restart-capable"},
    neighbor_long_lived_graceful_restart_time_remaining{YType::uint32, "neighbor-long-lived-graceful-restart-time-remaining"},
    neighbor_preserved_forwarding_state{YType::boolean, "neighbor-preserved-forwarding-state"},
    neighbor_preserved_long_lived_forwarding_state{YType::boolean, "neighbor-preserved-long-lived-forwarding-state"},
    next_hop_unchanged{YType::boolean, "next-hop-unchanged"},
    orf_entries_received{YType::uint32, "orf-entries-received"},
    orr_group_index{YType::uint32, "orr-group-index"},
    orr_group_name{YType::str, "orr-group-name"},
    remove_private_as_entire_aspath_from_inbound_updates{YType::boolean, "remove-private-as-entire-aspath-from-inbound-updates"},
    remove_private_as_entire_aspath_from_updates{YType::boolean, "remove-private-as-entire-aspath-from-updates"},
    remove_private_as_from_inbound_updates{YType::boolean, "remove-private-as-from-inbound-updates"},
    remove_private_as_from_updates{YType::boolean, "remove-private-as-from-updates"},
    restart_time{YType::uint32, "restart-time"},
    rib_purge_timeout_value{YType::uint32, "rib-purge-timeout-value"},
    route_policy_default_originate{YType::str, "route-policy-default-originate"},
    route_policy_in{YType::str, "route-policy-in"},
    route_policy_out{YType::str, "route-policy-out"},
    route_policy_prefix_orf{YType::str, "route-policy-prefix-orf"},
    selective_multipath_eligible{YType::boolean, "selective-multipath-eligible"},
    sent_community_to_neighbor{YType::boolean, "sent-community-to-neighbor"},
    sent_extended_community_to_neighbor{YType::boolean, "sent-extended-community-to-neighbor"},
    sent_gshut_community_to_neighbor{YType::boolean, "sent-gshut-community-to-neighbor"},
    stale_path_timeout{YType::uint32, "stale-path-timeout"},
    use_max_prefix_warning_only{YType::boolean, "use-max-prefix-warning-only"},
    vpn_update_gen_enabled{YType::boolean, "vpn-update-gen-enabled"},
    vpn_update_gen_trigger_enabled{YType::boolean, "vpn-update-gen-trigger-enabled"},
    weight{YType::uint32, "weight"}
{
    yang_name = "af-data"; yang_parent_name = "neighbor-range";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::~AfData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::has_data() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_data())
            return true;
    }
    return accept_own_enabled.is_set
	|| address_family_long_lived_time.is_set
	|| advertise_afi.is_set
	|| advertise_afi_disable.is_set
	|| advertise_afi_local.is_set
	|| advertise_afi_reorg.is_set
	|| advertise_v4_flags.is_set
	|| advertise_v6_flags.is_set
	|| af_name.is_set
	|| afrpki_allow_invalid.is_set
	|| afrpki_disable.is_set
	|| afrpki_signal_ibgp.is_set
	|| afrpki_use_validity.is_set
	|| allow_as_in_count.is_set
	|| always_use_next_hop_local.is_set
	|| flowspec_redirect_validation_d_isable.is_set
	|| flowspec_validation_d_isable.is_set
	|| import_reoriginate.is_set
	|| import_reoriginate_stitching.is_set
	|| import_stitching.is_set
	|| is_add_path_receive_capability_advertised.is_set
	|| is_add_path_receive_capability_received.is_set
	|| is_add_path_send_capability_advertised.is_set
	|| is_add_path_send_capability_received.is_set
	|| is_addpath_receive_operational.is_set
	|| is_addpath_send_operational.is_set
	|| is_advertise_permanent_network.is_set
	|| is_advertised_graceful_restart.is_set
	|| is_advertised_orf_receive.is_set
	|| is_advertised_orf_send.is_set
	|| is_aigp_set.is_set
	|| is_allow_as_in_set.is_set
	|| is_as_override_set.is_set
	|| is_graceful_restart_state_flag.is_set
	|| is_legacy_pe_rt.is_set
	|| is_neighbor_af_capable.is_set
	|| is_neighbor_ebgp_without_inbound_policy.is_set
	|| is_neighbor_ebgp_without_outbound_policy.is_set
	|| is_neighbor_route_reflector_client.is_set
	|| is_orf_send_scheduled.is_set
	|| is_orf_sent.is_set
	|| is_orr_root_address_configured.is_set
	|| is_peer_orf_capable.is_set
	|| is_prefix_orf_present.is_set
	|| is_received_graceful_restart_capable.is_set
	|| is_received_orf_receive_capable.is_set
	|| is_received_orf_send_capable.is_set
	|| is_rt_present.is_set
	|| is_rt_present_standby.is_set
	|| is_send_mcast_attr.is_set
	|| is_soft_reconfiguration_inbound_allowed.is_set
	|| is_update_deferred.is_set
	|| is_use_soft_reconfiguration_always_on.is_set
	|| local_restart_time.is_set
	|| long_lived_graceful_restart_capability_received.is_set
	|| long_lived_graceful_restart_stale_time_accept.is_set
	|| long_lived_graceful_restart_stale_time_configured.is_set
	|| long_lived_graceful_restart_stale_time_received.is_set
	|| long_lived_graceful_restart_stale_time_sent.is_set
	|| max_prefix_discard_extra_paths.is_set
	|| max_prefix_exceed_discard_paths.is_set
	|| max_prefix_limit.is_set
	|| max_prefix_restart_time.is_set
	|| max_prefix_threshold_percent.is_set
	|| neighbor_default_originate.is_set
	|| neighbor_long_lived_graceful_restart_capable.is_set
	|| neighbor_long_lived_graceful_restart_time_remaining.is_set
	|| neighbor_preserved_forwarding_state.is_set
	|| neighbor_preserved_long_lived_forwarding_state.is_set
	|| next_hop_unchanged.is_set
	|| orf_entries_received.is_set
	|| orr_group_index.is_set
	|| orr_group_name.is_set
	|| remove_private_as_entire_aspath_from_inbound_updates.is_set
	|| remove_private_as_entire_aspath_from_updates.is_set
	|| remove_private_as_from_inbound_updates.is_set
	|| remove_private_as_from_updates.is_set
	|| restart_time.is_set
	|| rib_purge_timeout_value.is_set
	|| route_policy_default_originate.is_set
	|| route_policy_in.is_set
	|| route_policy_out.is_set
	|| route_policy_prefix_orf.is_set
	|| selective_multipath_eligible.is_set
	|| sent_community_to_neighbor.is_set
	|| sent_extended_community_to_neighbor.is_set
	|| sent_gshut_community_to_neighbor.is_set
	|| stale_path_timeout.is_set
	|| use_max_prefix_warning_only.is_set
	|| vpn_update_gen_enabled.is_set
	|| vpn_update_gen_trigger_enabled.is_set
	|| weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::has_operation() const
{
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community_standby.size(); index++)
    {
        if(extended_community_standby[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(accept_own_enabled.operation)
	|| is_set(address_family_long_lived_time.operation)
	|| is_set(advertise_afi.operation)
	|| is_set(advertise_afi_disable.operation)
	|| is_set(advertise_afi_local.operation)
	|| is_set(advertise_afi_reorg.operation)
	|| is_set(advertise_v4_flags.operation)
	|| is_set(advertise_v6_flags.operation)
	|| is_set(af_name.operation)
	|| is_set(afrpki_allow_invalid.operation)
	|| is_set(afrpki_disable.operation)
	|| is_set(afrpki_signal_ibgp.operation)
	|| is_set(afrpki_use_validity.operation)
	|| is_set(allow_as_in_count.operation)
	|| is_set(always_use_next_hop_local.operation)
	|| is_set(flowspec_redirect_validation_d_isable.operation)
	|| is_set(flowspec_validation_d_isable.operation)
	|| is_set(import_reoriginate.operation)
	|| is_set(import_reoriginate_stitching.operation)
	|| is_set(import_stitching.operation)
	|| is_set(is_add_path_receive_capability_advertised.operation)
	|| is_set(is_add_path_receive_capability_received.operation)
	|| is_set(is_add_path_send_capability_advertised.operation)
	|| is_set(is_add_path_send_capability_received.operation)
	|| is_set(is_addpath_receive_operational.operation)
	|| is_set(is_addpath_send_operational.operation)
	|| is_set(is_advertise_permanent_network.operation)
	|| is_set(is_advertised_graceful_restart.operation)
	|| is_set(is_advertised_orf_receive.operation)
	|| is_set(is_advertised_orf_send.operation)
	|| is_set(is_aigp_set.operation)
	|| is_set(is_allow_as_in_set.operation)
	|| is_set(is_as_override_set.operation)
	|| is_set(is_graceful_restart_state_flag.operation)
	|| is_set(is_legacy_pe_rt.operation)
	|| is_set(is_neighbor_af_capable.operation)
	|| is_set(is_neighbor_ebgp_without_inbound_policy.operation)
	|| is_set(is_neighbor_ebgp_without_outbound_policy.operation)
	|| is_set(is_neighbor_route_reflector_client.operation)
	|| is_set(is_orf_send_scheduled.operation)
	|| is_set(is_orf_sent.operation)
	|| is_set(is_orr_root_address_configured.operation)
	|| is_set(is_peer_orf_capable.operation)
	|| is_set(is_prefix_orf_present.operation)
	|| is_set(is_received_graceful_restart_capable.operation)
	|| is_set(is_received_orf_receive_capable.operation)
	|| is_set(is_received_orf_send_capable.operation)
	|| is_set(is_rt_present.operation)
	|| is_set(is_rt_present_standby.operation)
	|| is_set(is_send_mcast_attr.operation)
	|| is_set(is_soft_reconfiguration_inbound_allowed.operation)
	|| is_set(is_update_deferred.operation)
	|| is_set(is_use_soft_reconfiguration_always_on.operation)
	|| is_set(local_restart_time.operation)
	|| is_set(long_lived_graceful_restart_capability_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_accept.operation)
	|| is_set(long_lived_graceful_restart_stale_time_configured.operation)
	|| is_set(long_lived_graceful_restart_stale_time_received.operation)
	|| is_set(long_lived_graceful_restart_stale_time_sent.operation)
	|| is_set(max_prefix_discard_extra_paths.operation)
	|| is_set(max_prefix_exceed_discard_paths.operation)
	|| is_set(max_prefix_limit.operation)
	|| is_set(max_prefix_restart_time.operation)
	|| is_set(max_prefix_threshold_percent.operation)
	|| is_set(neighbor_default_originate.operation)
	|| is_set(neighbor_long_lived_graceful_restart_capable.operation)
	|| is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)
	|| is_set(neighbor_preserved_forwarding_state.operation)
	|| is_set(neighbor_preserved_long_lived_forwarding_state.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(orf_entries_received.operation)
	|| is_set(orr_group_index.operation)
	|| is_set(orr_group_name.operation)
	|| is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)
	|| is_set(remove_private_as_entire_aspath_from_updates.operation)
	|| is_set(remove_private_as_from_inbound_updates.operation)
	|| is_set(remove_private_as_from_updates.operation)
	|| is_set(restart_time.operation)
	|| is_set(rib_purge_timeout_value.operation)
	|| is_set(route_policy_default_originate.operation)
	|| is_set(route_policy_in.operation)
	|| is_set(route_policy_out.operation)
	|| is_set(route_policy_prefix_orf.operation)
	|| is_set(selective_multipath_eligible.operation)
	|| is_set(sent_community_to_neighbor.operation)
	|| is_set(sent_extended_community_to_neighbor.operation)
	|| is_set(sent_gshut_community_to_neighbor.operation)
	|| is_set(stale_path_timeout.operation)
	|| is_set(use_max_prefix_warning_only.operation)
	|| is_set(vpn_update_gen_enabled.operation)
	|| is_set(vpn_update_gen_trigger_enabled.operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_own_enabled.is_set || is_set(accept_own_enabled.operation)) leaf_name_data.push_back(accept_own_enabled.get_name_leafdata());
    if (address_family_long_lived_time.is_set || is_set(address_family_long_lived_time.operation)) leaf_name_data.push_back(address_family_long_lived_time.get_name_leafdata());
    if (advertise_afi.is_set || is_set(advertise_afi.operation)) leaf_name_data.push_back(advertise_afi.get_name_leafdata());
    if (advertise_afi_disable.is_set || is_set(advertise_afi_disable.operation)) leaf_name_data.push_back(advertise_afi_disable.get_name_leafdata());
    if (advertise_afi_local.is_set || is_set(advertise_afi_local.operation)) leaf_name_data.push_back(advertise_afi_local.get_name_leafdata());
    if (advertise_afi_reorg.is_set || is_set(advertise_afi_reorg.operation)) leaf_name_data.push_back(advertise_afi_reorg.get_name_leafdata());
    if (advertise_v4_flags.is_set || is_set(advertise_v4_flags.operation)) leaf_name_data.push_back(advertise_v4_flags.get_name_leafdata());
    if (advertise_v6_flags.is_set || is_set(advertise_v6_flags.operation)) leaf_name_data.push_back(advertise_v6_flags.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (afrpki_allow_invalid.is_set || is_set(afrpki_allow_invalid.operation)) leaf_name_data.push_back(afrpki_allow_invalid.get_name_leafdata());
    if (afrpki_disable.is_set || is_set(afrpki_disable.operation)) leaf_name_data.push_back(afrpki_disable.get_name_leafdata());
    if (afrpki_signal_ibgp.is_set || is_set(afrpki_signal_ibgp.operation)) leaf_name_data.push_back(afrpki_signal_ibgp.get_name_leafdata());
    if (afrpki_use_validity.is_set || is_set(afrpki_use_validity.operation)) leaf_name_data.push_back(afrpki_use_validity.get_name_leafdata());
    if (allow_as_in_count.is_set || is_set(allow_as_in_count.operation)) leaf_name_data.push_back(allow_as_in_count.get_name_leafdata());
    if (always_use_next_hop_local.is_set || is_set(always_use_next_hop_local.operation)) leaf_name_data.push_back(always_use_next_hop_local.get_name_leafdata());
    if (flowspec_redirect_validation_d_isable.is_set || is_set(flowspec_redirect_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_redirect_validation_d_isable.get_name_leafdata());
    if (flowspec_validation_d_isable.is_set || is_set(flowspec_validation_d_isable.operation)) leaf_name_data.push_back(flowspec_validation_d_isable.get_name_leafdata());
    if (import_reoriginate.is_set || is_set(import_reoriginate.operation)) leaf_name_data.push_back(import_reoriginate.get_name_leafdata());
    if (import_reoriginate_stitching.is_set || is_set(import_reoriginate_stitching.operation)) leaf_name_data.push_back(import_reoriginate_stitching.get_name_leafdata());
    if (import_stitching.is_set || is_set(import_stitching.operation)) leaf_name_data.push_back(import_stitching.get_name_leafdata());
    if (is_add_path_receive_capability_advertised.is_set || is_set(is_add_path_receive_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_receive_capability_advertised.get_name_leafdata());
    if (is_add_path_receive_capability_received.is_set || is_set(is_add_path_receive_capability_received.operation)) leaf_name_data.push_back(is_add_path_receive_capability_received.get_name_leafdata());
    if (is_add_path_send_capability_advertised.is_set || is_set(is_add_path_send_capability_advertised.operation)) leaf_name_data.push_back(is_add_path_send_capability_advertised.get_name_leafdata());
    if (is_add_path_send_capability_received.is_set || is_set(is_add_path_send_capability_received.operation)) leaf_name_data.push_back(is_add_path_send_capability_received.get_name_leafdata());
    if (is_addpath_receive_operational.is_set || is_set(is_addpath_receive_operational.operation)) leaf_name_data.push_back(is_addpath_receive_operational.get_name_leafdata());
    if (is_addpath_send_operational.is_set || is_set(is_addpath_send_operational.operation)) leaf_name_data.push_back(is_addpath_send_operational.get_name_leafdata());
    if (is_advertise_permanent_network.is_set || is_set(is_advertise_permanent_network.operation)) leaf_name_data.push_back(is_advertise_permanent_network.get_name_leafdata());
    if (is_advertised_graceful_restart.is_set || is_set(is_advertised_graceful_restart.operation)) leaf_name_data.push_back(is_advertised_graceful_restart.get_name_leafdata());
    if (is_advertised_orf_receive.is_set || is_set(is_advertised_orf_receive.operation)) leaf_name_data.push_back(is_advertised_orf_receive.get_name_leafdata());
    if (is_advertised_orf_send.is_set || is_set(is_advertised_orf_send.operation)) leaf_name_data.push_back(is_advertised_orf_send.get_name_leafdata());
    if (is_aigp_set.is_set || is_set(is_aigp_set.operation)) leaf_name_data.push_back(is_aigp_set.get_name_leafdata());
    if (is_allow_as_in_set.is_set || is_set(is_allow_as_in_set.operation)) leaf_name_data.push_back(is_allow_as_in_set.get_name_leafdata());
    if (is_as_override_set.is_set || is_set(is_as_override_set.operation)) leaf_name_data.push_back(is_as_override_set.get_name_leafdata());
    if (is_graceful_restart_state_flag.is_set || is_set(is_graceful_restart_state_flag.operation)) leaf_name_data.push_back(is_graceful_restart_state_flag.get_name_leafdata());
    if (is_legacy_pe_rt.is_set || is_set(is_legacy_pe_rt.operation)) leaf_name_data.push_back(is_legacy_pe_rt.get_name_leafdata());
    if (is_neighbor_af_capable.is_set || is_set(is_neighbor_af_capable.operation)) leaf_name_data.push_back(is_neighbor_af_capable.get_name_leafdata());
    if (is_neighbor_ebgp_without_inbound_policy.is_set || is_set(is_neighbor_ebgp_without_inbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_inbound_policy.get_name_leafdata());
    if (is_neighbor_ebgp_without_outbound_policy.is_set || is_set(is_neighbor_ebgp_without_outbound_policy.operation)) leaf_name_data.push_back(is_neighbor_ebgp_without_outbound_policy.get_name_leafdata());
    if (is_neighbor_route_reflector_client.is_set || is_set(is_neighbor_route_reflector_client.operation)) leaf_name_data.push_back(is_neighbor_route_reflector_client.get_name_leafdata());
    if (is_orf_send_scheduled.is_set || is_set(is_orf_send_scheduled.operation)) leaf_name_data.push_back(is_orf_send_scheduled.get_name_leafdata());
    if (is_orf_sent.is_set || is_set(is_orf_sent.operation)) leaf_name_data.push_back(is_orf_sent.get_name_leafdata());
    if (is_orr_root_address_configured.is_set || is_set(is_orr_root_address_configured.operation)) leaf_name_data.push_back(is_orr_root_address_configured.get_name_leafdata());
    if (is_peer_orf_capable.is_set || is_set(is_peer_orf_capable.operation)) leaf_name_data.push_back(is_peer_orf_capable.get_name_leafdata());
    if (is_prefix_orf_present.is_set || is_set(is_prefix_orf_present.operation)) leaf_name_data.push_back(is_prefix_orf_present.get_name_leafdata());
    if (is_received_graceful_restart_capable.is_set || is_set(is_received_graceful_restart_capable.operation)) leaf_name_data.push_back(is_received_graceful_restart_capable.get_name_leafdata());
    if (is_received_orf_receive_capable.is_set || is_set(is_received_orf_receive_capable.operation)) leaf_name_data.push_back(is_received_orf_receive_capable.get_name_leafdata());
    if (is_received_orf_send_capable.is_set || is_set(is_received_orf_send_capable.operation)) leaf_name_data.push_back(is_received_orf_send_capable.get_name_leafdata());
    if (is_rt_present.is_set || is_set(is_rt_present.operation)) leaf_name_data.push_back(is_rt_present.get_name_leafdata());
    if (is_rt_present_standby.is_set || is_set(is_rt_present_standby.operation)) leaf_name_data.push_back(is_rt_present_standby.get_name_leafdata());
    if (is_send_mcast_attr.is_set || is_set(is_send_mcast_attr.operation)) leaf_name_data.push_back(is_send_mcast_attr.get_name_leafdata());
    if (is_soft_reconfiguration_inbound_allowed.is_set || is_set(is_soft_reconfiguration_inbound_allowed.operation)) leaf_name_data.push_back(is_soft_reconfiguration_inbound_allowed.get_name_leafdata());
    if (is_update_deferred.is_set || is_set(is_update_deferred.operation)) leaf_name_data.push_back(is_update_deferred.get_name_leafdata());
    if (is_use_soft_reconfiguration_always_on.is_set || is_set(is_use_soft_reconfiguration_always_on.operation)) leaf_name_data.push_back(is_use_soft_reconfiguration_always_on.get_name_leafdata());
    if (local_restart_time.is_set || is_set(local_restart_time.operation)) leaf_name_data.push_back(local_restart_time.get_name_leafdata());
    if (long_lived_graceful_restart_capability_received.is_set || is_set(long_lived_graceful_restart_capability_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_capability_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_accept.is_set || is_set(long_lived_graceful_restart_stale_time_accept.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_accept.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_configured.is_set || is_set(long_lived_graceful_restart_stale_time_configured.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_configured.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_received.is_set || is_set(long_lived_graceful_restart_stale_time_received.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_received.get_name_leafdata());
    if (long_lived_graceful_restart_stale_time_sent.is_set || is_set(long_lived_graceful_restart_stale_time_sent.operation)) leaf_name_data.push_back(long_lived_graceful_restart_stale_time_sent.get_name_leafdata());
    if (max_prefix_discard_extra_paths.is_set || is_set(max_prefix_discard_extra_paths.operation)) leaf_name_data.push_back(max_prefix_discard_extra_paths.get_name_leafdata());
    if (max_prefix_exceed_discard_paths.is_set || is_set(max_prefix_exceed_discard_paths.operation)) leaf_name_data.push_back(max_prefix_exceed_discard_paths.get_name_leafdata());
    if (max_prefix_limit.is_set || is_set(max_prefix_limit.operation)) leaf_name_data.push_back(max_prefix_limit.get_name_leafdata());
    if (max_prefix_restart_time.is_set || is_set(max_prefix_restart_time.operation)) leaf_name_data.push_back(max_prefix_restart_time.get_name_leafdata());
    if (max_prefix_threshold_percent.is_set || is_set(max_prefix_threshold_percent.operation)) leaf_name_data.push_back(max_prefix_threshold_percent.get_name_leafdata());
    if (neighbor_default_originate.is_set || is_set(neighbor_default_originate.operation)) leaf_name_data.push_back(neighbor_default_originate.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_capable.is_set || is_set(neighbor_long_lived_graceful_restart_capable.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_capable.get_name_leafdata());
    if (neighbor_long_lived_graceful_restart_time_remaining.is_set || is_set(neighbor_long_lived_graceful_restart_time_remaining.operation)) leaf_name_data.push_back(neighbor_long_lived_graceful_restart_time_remaining.get_name_leafdata());
    if (neighbor_preserved_forwarding_state.is_set || is_set(neighbor_preserved_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_forwarding_state.get_name_leafdata());
    if (neighbor_preserved_long_lived_forwarding_state.is_set || is_set(neighbor_preserved_long_lived_forwarding_state.operation)) leaf_name_data.push_back(neighbor_preserved_long_lived_forwarding_state.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (orf_entries_received.is_set || is_set(orf_entries_received.operation)) leaf_name_data.push_back(orf_entries_received.get_name_leafdata());
    if (orr_group_index.is_set || is_set(orr_group_index.operation)) leaf_name_data.push_back(orr_group_index.get_name_leafdata());
    if (orr_group_name.is_set || is_set(orr_group_name.operation)) leaf_name_data.push_back(orr_group_name.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_inbound_updates.is_set || is_set(remove_private_as_entire_aspath_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_entire_aspath_from_updates.is_set || is_set(remove_private_as_entire_aspath_from_updates.operation)) leaf_name_data.push_back(remove_private_as_entire_aspath_from_updates.get_name_leafdata());
    if (remove_private_as_from_inbound_updates.is_set || is_set(remove_private_as_from_inbound_updates.operation)) leaf_name_data.push_back(remove_private_as_from_inbound_updates.get_name_leafdata());
    if (remove_private_as_from_updates.is_set || is_set(remove_private_as_from_updates.operation)) leaf_name_data.push_back(remove_private_as_from_updates.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (rib_purge_timeout_value.is_set || is_set(rib_purge_timeout_value.operation)) leaf_name_data.push_back(rib_purge_timeout_value.get_name_leafdata());
    if (route_policy_default_originate.is_set || is_set(route_policy_default_originate.operation)) leaf_name_data.push_back(route_policy_default_originate.get_name_leafdata());
    if (route_policy_in.is_set || is_set(route_policy_in.operation)) leaf_name_data.push_back(route_policy_in.get_name_leafdata());
    if (route_policy_out.is_set || is_set(route_policy_out.operation)) leaf_name_data.push_back(route_policy_out.get_name_leafdata());
    if (route_policy_prefix_orf.is_set || is_set(route_policy_prefix_orf.operation)) leaf_name_data.push_back(route_policy_prefix_orf.get_name_leafdata());
    if (selective_multipath_eligible.is_set || is_set(selective_multipath_eligible.operation)) leaf_name_data.push_back(selective_multipath_eligible.get_name_leafdata());
    if (sent_community_to_neighbor.is_set || is_set(sent_community_to_neighbor.operation)) leaf_name_data.push_back(sent_community_to_neighbor.get_name_leafdata());
    if (sent_extended_community_to_neighbor.is_set || is_set(sent_extended_community_to_neighbor.operation)) leaf_name_data.push_back(sent_extended_community_to_neighbor.get_name_leafdata());
    if (sent_gshut_community_to_neighbor.is_set || is_set(sent_gshut_community_to_neighbor.operation)) leaf_name_data.push_back(sent_gshut_community_to_neighbor.get_name_leafdata());
    if (stale_path_timeout.is_set || is_set(stale_path_timeout.operation)) leaf_name_data.push_back(stale_path_timeout.get_name_leafdata());
    if (use_max_prefix_warning_only.is_set || is_set(use_max_prefix_warning_only.operation)) leaf_name_data.push_back(use_max_prefix_warning_only.get_name_leafdata());
    if (vpn_update_gen_enabled.is_set || is_set(vpn_update_gen_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_enabled.get_name_leafdata());
    if (vpn_update_gen_trigger_enabled.is_set || is_set(vpn_update_gen_trigger_enabled.operation)) leaf_name_data.push_back(vpn_update_gen_trigger_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community-standby")
    {
        for(auto const & c : extended_community_standby)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby>();
        c->parent = this;
        extended_community_standby.push_back(std::move(c));
        children[segment_path] = extended_community_standby.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::get_children()
{
    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community_standby)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-own-enabled")
    {
        accept_own_enabled = value;
    }
    if(value_path == "address-family-long-lived-time")
    {
        address_family_long_lived_time = value;
    }
    if(value_path == "advertise-afi")
    {
        advertise_afi = value;
    }
    if(value_path == "advertise-afi-disable")
    {
        advertise_afi_disable = value;
    }
    if(value_path == "advertise-afi-local")
    {
        advertise_afi_local = value;
    }
    if(value_path == "advertise-afi-reorg")
    {
        advertise_afi_reorg = value;
    }
    if(value_path == "advertise-v4-flags")
    {
        advertise_v4_flags = value;
    }
    if(value_path == "advertise-v6-flags")
    {
        advertise_v6_flags = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "afrpki-allow-invalid")
    {
        afrpki_allow_invalid = value;
    }
    if(value_path == "afrpki-disable")
    {
        afrpki_disable = value;
    }
    if(value_path == "afrpki-signal-ibgp")
    {
        afrpki_signal_ibgp = value;
    }
    if(value_path == "afrpki-use-validity")
    {
        afrpki_use_validity = value;
    }
    if(value_path == "allow-as-in-count")
    {
        allow_as_in_count = value;
    }
    if(value_path == "always-use-next-hop-local")
    {
        always_use_next_hop_local = value;
    }
    if(value_path == "flowspec-redirect-validation-d-isable")
    {
        flowspec_redirect_validation_d_isable = value;
    }
    if(value_path == "flowspec-validation-d-isable")
    {
        flowspec_validation_d_isable = value;
    }
    if(value_path == "import-reoriginate")
    {
        import_reoriginate = value;
    }
    if(value_path == "import-reoriginate-stitching")
    {
        import_reoriginate_stitching = value;
    }
    if(value_path == "import-stitching")
    {
        import_stitching = value;
    }
    if(value_path == "is-add-path-receive-capability-advertised")
    {
        is_add_path_receive_capability_advertised = value;
    }
    if(value_path == "is-add-path-receive-capability-received")
    {
        is_add_path_receive_capability_received = value;
    }
    if(value_path == "is-add-path-send-capability-advertised")
    {
        is_add_path_send_capability_advertised = value;
    }
    if(value_path == "is-add-path-send-capability-received")
    {
        is_add_path_send_capability_received = value;
    }
    if(value_path == "is-addpath-receive-operational")
    {
        is_addpath_receive_operational = value;
    }
    if(value_path == "is-addpath-send-operational")
    {
        is_addpath_send_operational = value;
    }
    if(value_path == "is-advertise-permanent-network")
    {
        is_advertise_permanent_network = value;
    }
    if(value_path == "is-advertised-graceful-restart")
    {
        is_advertised_graceful_restart = value;
    }
    if(value_path == "is-advertised-orf-receive")
    {
        is_advertised_orf_receive = value;
    }
    if(value_path == "is-advertised-orf-send")
    {
        is_advertised_orf_send = value;
    }
    if(value_path == "is-aigp-set")
    {
        is_aigp_set = value;
    }
    if(value_path == "is-allow-as-in-set")
    {
        is_allow_as_in_set = value;
    }
    if(value_path == "is-as-override-set")
    {
        is_as_override_set = value;
    }
    if(value_path == "is-graceful-restart-state-flag")
    {
        is_graceful_restart_state_flag = value;
    }
    if(value_path == "is-legacy-pe-rt")
    {
        is_legacy_pe_rt = value;
    }
    if(value_path == "is-neighbor-af-capable")
    {
        is_neighbor_af_capable = value;
    }
    if(value_path == "is-neighbor-ebgp-without-inbound-policy")
    {
        is_neighbor_ebgp_without_inbound_policy = value;
    }
    if(value_path == "is-neighbor-ebgp-without-outbound-policy")
    {
        is_neighbor_ebgp_without_outbound_policy = value;
    }
    if(value_path == "is-neighbor-route-reflector-client")
    {
        is_neighbor_route_reflector_client = value;
    }
    if(value_path == "is-orf-send-scheduled")
    {
        is_orf_send_scheduled = value;
    }
    if(value_path == "is-orf-sent")
    {
        is_orf_sent = value;
    }
    if(value_path == "is-orr-root-address-configured")
    {
        is_orr_root_address_configured = value;
    }
    if(value_path == "is-peer-orf-capable")
    {
        is_peer_orf_capable = value;
    }
    if(value_path == "is-prefix-orf-present")
    {
        is_prefix_orf_present = value;
    }
    if(value_path == "is-received-graceful-restart-capable")
    {
        is_received_graceful_restart_capable = value;
    }
    if(value_path == "is-received-orf-receive-capable")
    {
        is_received_orf_receive_capable = value;
    }
    if(value_path == "is-received-orf-send-capable")
    {
        is_received_orf_send_capable = value;
    }
    if(value_path == "is-rt-present")
    {
        is_rt_present = value;
    }
    if(value_path == "is-rt-present-standby")
    {
        is_rt_present_standby = value;
    }
    if(value_path == "is-send-mcast-attr")
    {
        is_send_mcast_attr = value;
    }
    if(value_path == "is-soft-reconfiguration-inbound-allowed")
    {
        is_soft_reconfiguration_inbound_allowed = value;
    }
    if(value_path == "is-update-deferred")
    {
        is_update_deferred = value;
    }
    if(value_path == "is-use-soft-reconfiguration-always-on")
    {
        is_use_soft_reconfiguration_always_on = value;
    }
    if(value_path == "local-restart-time")
    {
        local_restart_time = value;
    }
    if(value_path == "long-lived-graceful-restart-capability-received")
    {
        long_lived_graceful_restart_capability_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-accept")
    {
        long_lived_graceful_restart_stale_time_accept = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-configured")
    {
        long_lived_graceful_restart_stale_time_configured = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-received")
    {
        long_lived_graceful_restart_stale_time_received = value;
    }
    if(value_path == "long-lived-graceful-restart-stale-time-sent")
    {
        long_lived_graceful_restart_stale_time_sent = value;
    }
    if(value_path == "max-prefix-discard-extra-paths")
    {
        max_prefix_discard_extra_paths = value;
    }
    if(value_path == "max-prefix-exceed-discard-paths")
    {
        max_prefix_exceed_discard_paths = value;
    }
    if(value_path == "max-prefix-limit")
    {
        max_prefix_limit = value;
    }
    if(value_path == "max-prefix-restart-time")
    {
        max_prefix_restart_time = value;
    }
    if(value_path == "max-prefix-threshold-percent")
    {
        max_prefix_threshold_percent = value;
    }
    if(value_path == "neighbor-default-originate")
    {
        neighbor_default_originate = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-capable")
    {
        neighbor_long_lived_graceful_restart_capable = value;
    }
    if(value_path == "neighbor-long-lived-graceful-restart-time-remaining")
    {
        neighbor_long_lived_graceful_restart_time_remaining = value;
    }
    if(value_path == "neighbor-preserved-forwarding-state")
    {
        neighbor_preserved_forwarding_state = value;
    }
    if(value_path == "neighbor-preserved-long-lived-forwarding-state")
    {
        neighbor_preserved_long_lived_forwarding_state = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "orf-entries-received")
    {
        orf_entries_received = value;
    }
    if(value_path == "orr-group-index")
    {
        orr_group_index = value;
    }
    if(value_path == "orr-group-name")
    {
        orr_group_name = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-inbound-updates")
    {
        remove_private_as_entire_aspath_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-entire-aspath-from-updates")
    {
        remove_private_as_entire_aspath_from_updates = value;
    }
    if(value_path == "remove-private-as-from-inbound-updates")
    {
        remove_private_as_from_inbound_updates = value;
    }
    if(value_path == "remove-private-as-from-updates")
    {
        remove_private_as_from_updates = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "rib-purge-timeout-value")
    {
        rib_purge_timeout_value = value;
    }
    if(value_path == "route-policy-default-originate")
    {
        route_policy_default_originate = value;
    }
    if(value_path == "route-policy-in")
    {
        route_policy_in = value;
    }
    if(value_path == "route-policy-out")
    {
        route_policy_out = value;
    }
    if(value_path == "route-policy-prefix-orf")
    {
        route_policy_prefix_orf = value;
    }
    if(value_path == "selective-multipath-eligible")
    {
        selective_multipath_eligible = value;
    }
    if(value_path == "sent-community-to-neighbor")
    {
        sent_community_to_neighbor = value;
    }
    if(value_path == "sent-extended-community-to-neighbor")
    {
        sent_extended_community_to_neighbor = value;
    }
    if(value_path == "sent-gshut-community-to-neighbor")
    {
        sent_gshut_community_to_neighbor = value;
    }
    if(value_path == "stale-path-timeout")
    {
        stale_path_timeout = value;
    }
    if(value_path == "use-max-prefix-warning-only")
    {
        use_max_prefix_warning_only = value;
    }
    if(value_path == "vpn-update-gen-enabled")
    {
        vpn_update_gen_enabled = value;
    }
    if(value_path == "vpn-update-gen-trigger-enabled")
    {
        vpn_update_gen_trigger_enabled = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::ExtendedCommunityStandby()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community-standby"; yang_parent_name = "af-data";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::~ExtendedCommunityStandby()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community-standby";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunityStandby' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::AfData::ExtendedCommunityStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::Instance_()
    :
    connection_state{YType::enumeration, "connection-state"},
    is_idle_watch_timer_running{YType::boolean, "is-idle-watch-timer-running"}
    	,
    idle_watch_timer_remaining_value(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue>())
	,neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress>())
	,neighbor_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge>())
{
    idle_watch_timer_remaining_value->parent = this;
    children["idle-watch-timer-remaining-value"] = idle_watch_timer_remaining_value;

    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    neighbor_age->parent = this;
    children["neighbor-age"] = neighbor_age;

    yang_name = "instance"; yang_parent_name = "neighbor-range";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::~Instance_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::has_data() const
{
    return connection_state.is_set
	|| is_idle_watch_timer_running.is_set
	|| (idle_watch_timer_remaining_value !=  nullptr && idle_watch_timer_remaining_value->has_data())
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (neighbor_age !=  nullptr && neighbor_age->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_state.operation)
	|| is_set(is_idle_watch_timer_running.operation)
	|| (idle_watch_timer_remaining_value !=  nullptr && idle_watch_timer_remaining_value->has_operation())
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (neighbor_age !=  nullptr && neighbor_age->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance_' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (is_idle_watch_timer_running.is_set || is_set(is_idle_watch_timer_running.operation)) leaf_name_data.push_back(is_idle_watch_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idle-watch-timer-remaining-value")
    {
        if(idle_watch_timer_remaining_value != nullptr)
        {
            children["idle-watch-timer-remaining-value"] = idle_watch_timer_remaining_value;
        }
        else
        {
            idle_watch_timer_remaining_value = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue>();
            idle_watch_timer_remaining_value->parent = this;
            children["idle-watch-timer-remaining-value"] = idle_watch_timer_remaining_value;
        }
        return children.at("idle-watch-timer-remaining-value");
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    if(child_yang_name == "neighbor-age")
    {
        if(neighbor_age != nullptr)
        {
            children["neighbor-age"] = neighbor_age;
        }
        else
        {
            neighbor_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge>();
            neighbor_age->parent = this;
            children["neighbor-age"] = neighbor_age;
        }
        return children.at("neighbor-age");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::get_children()
{
    if(children.find("idle-watch-timer-remaining-value") == children.end())
    {
        if(idle_watch_timer_remaining_value != nullptr)
        {
            children["idle-watch-timer-remaining-value"] = idle_watch_timer_remaining_value;
        }
    }

    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    if(children.find("neighbor-age") == children.end())
    {
        if(neighbor_age != nullptr)
        {
            children["neighbor-age"] = neighbor_age;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "is-idle-watch-timer-running")
    {
        is_idle_watch_timer_running = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "instance";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::NeighborAge()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "neighbor-age"; yang_parent_name = "instance";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::~NeighborAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-age";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAge' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::NeighborAge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::IdleWatchTimerRemainingValue()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "idle-watch-timer-remaining-value"; yang_parent_name = "instance";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::~IdleWatchTimerRemainingValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-watch-timer-remaining-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IdleWatchTimerRemainingValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges::NeighborRange::Instance_::IdleWatchTimerRemainingValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLogs()
{
    yang_name = "message-logs"; yang_parent_name = "vrf";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::~MessageLogs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::has_data() const
{
    for (std::size_t index=0; index<message_log.size(); index++)
    {
        if(message_log[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::has_operation() const
{
    for (std::size_t index=0; index<message_log.size(); index++)
    {
        if(message_log[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-logs";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageLogs' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-log")
    {
        for(auto const & c : message_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog>();
        c->parent = this;
        message_log.push_back(std::move(c));
        children[segment_path] = message_log.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::get_children()
{
    for (auto const & c : message_log)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::MessageLog()
    :
    direction{YType::int32, "direction"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "message-log"; yang_parent_name = "message-logs";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::~MessageLog()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::has_data() const
{
    for (std::size_t index=0; index<neighbor_message.size(); index++)
    {
        if(neighbor_message[index]->has_data())
            return true;
    }
    return direction.is_set
	|| neighbor_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message.size(); index++)
    {
        if(neighbor_message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(neighbor_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-log";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageLog' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-message")
    {
        for(auto const & c : neighbor_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage>();
        c->parent = this;
        neighbor_message.push_back(std::move(c));
        children[segment_path] = neighbor_message.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::get_children()
{
    for (auto const & c : neighbor_message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::NeighborMessage()
    :
    message_data_length{YType::uint16, "message-data-length"},
    message_type_received{YType::uint8, "message-type-received"},
    total_logged_message_count{YType::uint32, "total-logged-message-count"}
    	,
    message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp>())
{
    message_timestamp->parent = this;
    children["message-timestamp"] = message_timestamp;

    yang_name = "neighbor-message"; yang_parent_name = "message-log";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::~NeighborMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::has_data() const
{
    for (std::size_t index=0; index<logged_message_data.size(); index++)
    {
        if(logged_message_data[index]->has_data())
            return true;
    }
    return message_data_length.is_set
	|| message_type_received.is_set
	|| total_logged_message_count.is_set
	|| (message_timestamp !=  nullptr && message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::has_operation() const
{
    for (std::size_t index=0; index<logged_message_data.size(); index++)
    {
        if(logged_message_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(message_data_length.operation)
	|| is_set(message_type_received.operation)
	|| is_set(total_logged_message_count.operation)
	|| (message_timestamp !=  nullptr && message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborMessage' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_data_length.is_set || is_set(message_data_length.operation)) leaf_name_data.push_back(message_data_length.get_name_leafdata());
    if (message_type_received.is_set || is_set(message_type_received.operation)) leaf_name_data.push_back(message_type_received.get_name_leafdata());
    if (total_logged_message_count.is_set || is_set(total_logged_message_count.operation)) leaf_name_data.push_back(total_logged_message_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logged-message-data")
    {
        for(auto const & c : logged_message_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData>();
        c->parent = this;
        logged_message_data.push_back(std::move(c));
        children[segment_path] = logged_message_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "message-timestamp")
    {
        if(message_timestamp != nullptr)
        {
            children["message-timestamp"] = message_timestamp;
        }
        else
        {
            message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp>();
            message_timestamp->parent = this;
            children["message-timestamp"] = message_timestamp;
        }
        return children.at("message-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::get_children()
{
    for (auto const & c : logged_message_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("message-timestamp") == children.end())
    {
        if(message_timestamp != nullptr)
        {
            children["message-timestamp"] = message_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-data-length")
    {
        message_data_length = value;
    }
    if(value_path == "message-type-received")
    {
        message_type_received = value;
    }
    if(value_path == "total-logged-message-count")
    {
        total_logged_message_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::MessageTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "message-timestamp"; yang_parent_name = "neighbor-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::~MessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::MessageTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::LoggedMessageData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "logged-message-data"; yang_parent_name = "neighbor-message";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::~LoggedMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logged-message-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoggedMessageData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs::MessageLog::NeighborMessage::LoggedMessageData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs>())
	,bmp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp>())
	,global_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo>())
	,information(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information>())
	,message_logs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs>())
	,neighbor_ranges(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges>())
	,neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors>())
	,next_hop_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf>())
	,postits(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits>())
	,process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo>())
	,sessions(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions>())
	,update_inbound_error_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors>())
	,update_inbound_error_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf>())
	,update_inbound_filter_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors>())
	,update_inbound_filter_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf>())
{
    afs->parent = this;
    children["afs"] = afs;

    bmp->parent = this;
    children["bmp"] = bmp;

    global_process_info->parent = this;
    children["global-process-info"] = global_process_info;

    information->parent = this;
    children["information"] = information;

    message_logs->parent = this;
    children["message-logs"] = message_logs;

    neighbor_ranges->parent = this;
    children["neighbor-ranges"] = neighbor_ranges;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    next_hop_vrf->parent = this;
    children["next-hop-vrf"] = next_hop_vrf;

    postits->parent = this;
    children["postits"] = postits;

    process_info->parent = this;
    children["process-info"] = process_info;

    sessions->parent = this;
    children["sessions"] = sessions;

    update_inbound_error_neighbors->parent = this;
    children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;

    update_inbound_error_vrf->parent = this;
    children["update-inbound-error-vrf"] = update_inbound_error_vrf;

    update_inbound_filter_neighbors->parent = this;
    children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;

    update_inbound_filter_vrf->parent = this;
    children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;

    yang_name = "default-vrf"; yang_parent_name = "instance-standby";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::~DefaultVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (bmp !=  nullptr && bmp->has_data())
	|| (global_process_info !=  nullptr && global_process_info->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (message_logs !=  nullptr && message_logs->has_data())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_data())
	|| (postits !=  nullptr && postits->has_data())
	|| (process_info !=  nullptr && process_info->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_data())
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_data())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_data())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (bmp !=  nullptr && bmp->has_operation())
	|| (global_process_info !=  nullptr && global_process_info->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (message_logs !=  nullptr && message_logs->has_operation())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_operation())
	|| (postits !=  nullptr && postits->has_operation())
	|| (process_info !=  nullptr && process_info->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_operation())
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_operation())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_operation())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultVrf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "bmp")
    {
        if(bmp != nullptr)
        {
            children["bmp"] = bmp;
        }
        else
        {
            bmp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Bmp>();
            bmp->parent = this;
            children["bmp"] = bmp;
        }
        return children.at("bmp");
    }

    if(child_yang_name == "global-process-info")
    {
        if(global_process_info != nullptr)
        {
            children["global-process-info"] = global_process_info;
        }
        else
        {
            global_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo>();
            global_process_info->parent = this;
            children["global-process-info"] = global_process_info;
        }
        return children.at("global-process-info");
    }

    if(child_yang_name == "information")
    {
        if(information != nullptr)
        {
            children["information"] = information;
        }
        else
        {
            information = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information>();
            information->parent = this;
            children["information"] = information;
        }
        return children.at("information");
    }

    if(child_yang_name == "message-logs")
    {
        if(message_logs != nullptr)
        {
            children["message-logs"] = message_logs;
        }
        else
        {
            message_logs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::MessageLogs>();
            message_logs->parent = this;
            children["message-logs"] = message_logs;
        }
        return children.at("message-logs");
    }

    if(child_yang_name == "neighbor-ranges")
    {
        if(neighbor_ranges != nullptr)
        {
            children["neighbor-ranges"] = neighbor_ranges;
        }
        else
        {
            neighbor_ranges = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NeighborRanges>();
            neighbor_ranges->parent = this;
            children["neighbor-ranges"] = neighbor_ranges;
        }
        return children.at("neighbor-ranges");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "next-hop-vrf")
    {
        if(next_hop_vrf != nullptr)
        {
            children["next-hop-vrf"] = next_hop_vrf;
        }
        else
        {
            next_hop_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::NextHopVrf>();
            next_hop_vrf->parent = this;
            children["next-hop-vrf"] = next_hop_vrf;
        }
        return children.at("next-hop-vrf");
    }

    if(child_yang_name == "postits")
    {
        if(postits != nullptr)
        {
            children["postits"] = postits;
        }
        else
        {
            postits = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits>();
            postits->parent = this;
            children["postits"] = postits;
        }
        return children.at("postits");
    }

    if(child_yang_name == "process-info")
    {
        if(process_info != nullptr)
        {
            children["process-info"] = process_info;
        }
        else
        {
            process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::ProcessInfo>();
            process_info->parent = this;
            children["process-info"] = process_info;
        }
        return children.at("process-info");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "update-inbound-error-neighbors")
    {
        if(update_inbound_error_neighbors != nullptr)
        {
            children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;
        }
        else
        {
            update_inbound_error_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors>();
            update_inbound_error_neighbors->parent = this;
            children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;
        }
        return children.at("update-inbound-error-neighbors");
    }

    if(child_yang_name == "update-inbound-error-vrf")
    {
        if(update_inbound_error_vrf != nullptr)
        {
            children["update-inbound-error-vrf"] = update_inbound_error_vrf;
        }
        else
        {
            update_inbound_error_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf>();
            update_inbound_error_vrf->parent = this;
            children["update-inbound-error-vrf"] = update_inbound_error_vrf;
        }
        return children.at("update-inbound-error-vrf");
    }

    if(child_yang_name == "update-inbound-filter-neighbors")
    {
        if(update_inbound_filter_neighbors != nullptr)
        {
            children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;
        }
        else
        {
            update_inbound_filter_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterNeighbors>();
            update_inbound_filter_neighbors->parent = this;
            children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;
        }
        return children.at("update-inbound-filter-neighbors");
    }

    if(child_yang_name == "update-inbound-filter-vrf")
    {
        if(update_inbound_filter_vrf != nullptr)
        {
            children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;
        }
        else
        {
            update_inbound_filter_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf>();
            update_inbound_filter_vrf->parent = this;
            children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;
        }
        return children.at("update-inbound-filter-vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("bmp") == children.end())
    {
        if(bmp != nullptr)
        {
            children["bmp"] = bmp;
        }
    }

    if(children.find("global-process-info") == children.end())
    {
        if(global_process_info != nullptr)
        {
            children["global-process-info"] = global_process_info;
        }
    }

    if(children.find("information") == children.end())
    {
        if(information != nullptr)
        {
            children["information"] = information;
        }
    }

    if(children.find("message-logs") == children.end())
    {
        if(message_logs != nullptr)
        {
            children["message-logs"] = message_logs;
        }
    }

    if(children.find("neighbor-ranges") == children.end())
    {
        if(neighbor_ranges != nullptr)
        {
            children["neighbor-ranges"] = neighbor_ranges;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("next-hop-vrf") == children.end())
    {
        if(next_hop_vrf != nullptr)
        {
            children["next-hop-vrf"] = next_hop_vrf;
        }
    }

    if(children.find("postits") == children.end())
    {
        if(postits != nullptr)
        {
            children["postits"] = postits;
        }
    }

    if(children.find("process-info") == children.end())
    {
        if(process_info != nullptr)
        {
            children["process-info"] = process_info;
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("update-inbound-error-neighbors") == children.end())
    {
        if(update_inbound_error_neighbors != nullptr)
        {
            children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;
        }
    }

    if(children.find("update-inbound-error-vrf") == children.end())
    {
        if(update_inbound_error_vrf != nullptr)
        {
            children["update-inbound-error-vrf"] = update_inbound_error_vrf;
        }
    }

    if(children.find("update-inbound-filter-neighbors") == children.end())
    {
        if(update_inbound_filter_neighbors != nullptr)
        {
            children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;
        }
    }

    if(children.find("update-inbound-filter-vrf") == children.end())
    {
        if(update_inbound_filter_vrf != nullptr)
        {
            children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::UpdateInboundErrorVrf()
    :
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;
    children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;

    yang_name = "update-inbound-error-vrf"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::~UpdateInboundErrorVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::has_data() const
{
    return last_update_malformed_age.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(last_update_malformed_age.operation)
	|| is_set(update_malformed_message_count.operation)
	|| is_set(update_malformed_neighbor_count.operation)
	|| is_set(update_vrf_name.operation)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundErrorVrf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.operation)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.operation)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.operation)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.operation)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp != nullptr)
        {
            children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
        }
        else
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>();
            last_update_malformed_timestamp->parent = this;
            children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
        }
        return children.at("last-update-malformed-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::get_children()
{
    if(children.find("last-update-malformed-timestamp") == children.end())
    {
        if(last_update_malformed_timestamp != nullptr)
        {
            children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateMalformedTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::~Afs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    advertised_path_counts(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts>())
	,advertised_path_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr>())
	,advertised_paths(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths>())
	,af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AfProcessInfo>())
	,attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes>())
	,bmp_paths(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths>())
	,convergence(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Convergence>())
	,dampenings(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings>())
	,epes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Epes>())
	,global_af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::GlobalAfProcessInfo>())
	,neighbor_af_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NeighborAfTable>())
	,network_all_rds(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds>())
	,network_lookup_all_rds(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds>())
	,network_prefixes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes>())
	,networks(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Networks>())
	,next_hop_address_families(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies>())
	,path_labeled_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathLabeledTable>())
	,path_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathTable>())
	,path_used_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathUsedTable>())
	,policies(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Policies>())
	,prefix_filters(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters>())
	,rpc_sets(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RpcSets>())
	,rt_set_counters(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters>())
	,sourced_networks(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks>())
	,update_generation_address_family(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationAddressFamily>())
	,update_generation_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups>())
	,update_generation_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationNeighbors>())
	,update_generation_sub_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups>())
	,update_generation_update_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups>())
	,update_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups>())
{
    advertised_path_counts->parent = this;
    children["advertised-path-counts"] = advertised_path_counts;

    advertised_path_xr->parent = this;
    children["advertised-path-xr"] = advertised_path_xr;

    advertised_paths->parent = this;
    children["advertised-paths"] = advertised_paths;

    af_process_info->parent = this;
    children["af-process-info"] = af_process_info;

    attributes->parent = this;
    children["attributes"] = attributes;

    bmp_paths->parent = this;
    children["bmp-paths"] = bmp_paths;

    convergence->parent = this;
    children["convergence"] = convergence;

    dampenings->parent = this;
    children["dampenings"] = dampenings;

    epes->parent = this;
    children["epes"] = epes;

    global_af_process_info->parent = this;
    children["global-af-process-info"] = global_af_process_info;

    neighbor_af_table->parent = this;
    children["neighbor-af-table"] = neighbor_af_table;

    network_all_rds->parent = this;
    children["network-all-rds"] = network_all_rds;

    network_lookup_all_rds->parent = this;
    children["network-lookup-all-rds"] = network_lookup_all_rds;

    network_prefixes->parent = this;
    children["network-prefixes"] = network_prefixes;

    networks->parent = this;
    children["networks"] = networks;

    next_hop_address_families->parent = this;
    children["next-hop-address-families"] = next_hop_address_families;

    path_labeled_table->parent = this;
    children["path-labeled-table"] = path_labeled_table;

    path_table->parent = this;
    children["path-table"] = path_table;

    path_used_table->parent = this;
    children["path-used-table"] = path_used_table;

    policies->parent = this;
    children["policies"] = policies;

    prefix_filters->parent = this;
    children["prefix-filters"] = prefix_filters;

    rpc_sets->parent = this;
    children["rpc-sets"] = rpc_sets;

    rt_set_counters->parent = this;
    children["rt-set-counters"] = rt_set_counters;

    sourced_networks->parent = this;
    children["sourced-networks"] = sourced_networks;

    update_generation_address_family->parent = this;
    children["update-generation-address-family"] = update_generation_address_family;

    update_generation_filter_groups->parent = this;
    children["update-generation-filter-groups"] = update_generation_filter_groups;

    update_generation_neighbors->parent = this;
    children["update-generation-neighbors"] = update_generation_neighbors;

    update_generation_sub_groups->parent = this;
    children["update-generation-sub-groups"] = update_generation_sub_groups;

    update_generation_update_groups->parent = this;
    children["update-generation-update-groups"] = update_generation_update_groups;

    update_groups->parent = this;
    children["update-groups"] = update_groups;

    yang_name = "af"; yang_parent_name = "afs";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::~Af()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_data())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_data())
	|| (advertised_paths !=  nullptr && advertised_paths->has_data())
	|| (af_process_info !=  nullptr && af_process_info->has_data())
	|| (attributes !=  nullptr && attributes->has_data())
	|| (bmp_paths !=  nullptr && bmp_paths->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (dampenings !=  nullptr && dampenings->has_data())
	|| (epes !=  nullptr && epes->has_data())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_data())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_data())
	|| (network_all_rds !=  nullptr && network_all_rds->has_data())
	|| (network_lookup_all_rds !=  nullptr && network_lookup_all_rds->has_data())
	|| (network_prefixes !=  nullptr && network_prefixes->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_data())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_data())
	|| (path_table !=  nullptr && path_table->has_data())
	|| (path_used_table !=  nullptr && path_used_table->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (prefix_filters !=  nullptr && prefix_filters->has_data())
	|| (rpc_sets !=  nullptr && rpc_sets->has_data())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_data())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_data())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_data())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_data())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_data())
	|| (update_groups !=  nullptr && update_groups->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_operation())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_operation())
	|| (advertised_paths !=  nullptr && advertised_paths->has_operation())
	|| (af_process_info !=  nullptr && af_process_info->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (bmp_paths !=  nullptr && bmp_paths->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (dampenings !=  nullptr && dampenings->has_operation())
	|| (epes !=  nullptr && epes->has_operation())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_operation())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_operation())
	|| (network_all_rds !=  nullptr && network_all_rds->has_operation())
	|| (network_lookup_all_rds !=  nullptr && network_lookup_all_rds->has_operation())
	|| (network_prefixes !=  nullptr && network_prefixes->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_operation())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_operation())
	|| (path_table !=  nullptr && path_table->has_operation())
	|| (path_used_table !=  nullptr && path_used_table->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (prefix_filters !=  nullptr && prefix_filters->has_operation())
	|| (rpc_sets !=  nullptr && rpc_sets->has_operation())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_operation())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_operation())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_operation())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_operation())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_operation())
	|| (update_groups !=  nullptr && update_groups->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertised-path-counts")
    {
        if(advertised_path_counts != nullptr)
        {
            children["advertised-path-counts"] = advertised_path_counts;
        }
        else
        {
            advertised_path_counts = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathCounts>();
            advertised_path_counts->parent = this;
            children["advertised-path-counts"] = advertised_path_counts;
        }
        return children.at("advertised-path-counts");
    }

    if(child_yang_name == "advertised-path-xr")
    {
        if(advertised_path_xr != nullptr)
        {
            children["advertised-path-xr"] = advertised_path_xr;
        }
        else
        {
            advertised_path_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr>();
            advertised_path_xr->parent = this;
            children["advertised-path-xr"] = advertised_path_xr;
        }
        return children.at("advertised-path-xr");
    }

    if(child_yang_name == "advertised-paths")
    {
        if(advertised_paths != nullptr)
        {
            children["advertised-paths"] = advertised_paths;
        }
        else
        {
            advertised_paths = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPaths>();
            advertised_paths->parent = this;
            children["advertised-paths"] = advertised_paths;
        }
        return children.at("advertised-paths");
    }

    if(child_yang_name == "af-process-info")
    {
        if(af_process_info != nullptr)
        {
            children["af-process-info"] = af_process_info;
        }
        else
        {
            af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AfProcessInfo>();
            af_process_info->parent = this;
            children["af-process-info"] = af_process_info;
        }
        return children.at("af-process-info");
    }

    if(child_yang_name == "attributes")
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes;
        }
        else
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes;
        }
        return children.at("attributes");
    }

    if(child_yang_name == "bmp-paths")
    {
        if(bmp_paths != nullptr)
        {
            children["bmp-paths"] = bmp_paths;
        }
        else
        {
            bmp_paths = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::BmpPaths>();
            bmp_paths->parent = this;
            children["bmp-paths"] = bmp_paths;
        }
        return children.at("bmp-paths");
    }

    if(child_yang_name == "convergence")
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence;
        }
        else
        {
            convergence = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Convergence>();
            convergence->parent = this;
            children["convergence"] = convergence;
        }
        return children.at("convergence");
    }

    if(child_yang_name == "dampenings")
    {
        if(dampenings != nullptr)
        {
            children["dampenings"] = dampenings;
        }
        else
        {
            dampenings = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings>();
            dampenings->parent = this;
            children["dampenings"] = dampenings;
        }
        return children.at("dampenings");
    }

    if(child_yang_name == "epes")
    {
        if(epes != nullptr)
        {
            children["epes"] = epes;
        }
        else
        {
            epes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Epes>();
            epes->parent = this;
            children["epes"] = epes;
        }
        return children.at("epes");
    }

    if(child_yang_name == "global-af-process-info")
    {
        if(global_af_process_info != nullptr)
        {
            children["global-af-process-info"] = global_af_process_info;
        }
        else
        {
            global_af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::GlobalAfProcessInfo>();
            global_af_process_info->parent = this;
            children["global-af-process-info"] = global_af_process_info;
        }
        return children.at("global-af-process-info");
    }

    if(child_yang_name == "neighbor-af-table")
    {
        if(neighbor_af_table != nullptr)
        {
            children["neighbor-af-table"] = neighbor_af_table;
        }
        else
        {
            neighbor_af_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NeighborAfTable>();
            neighbor_af_table->parent = this;
            children["neighbor-af-table"] = neighbor_af_table;
        }
        return children.at("neighbor-af-table");
    }

    if(child_yang_name == "network-all-rds")
    {
        if(network_all_rds != nullptr)
        {
            children["network-all-rds"] = network_all_rds;
        }
        else
        {
            network_all_rds = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkAllRds>();
            network_all_rds->parent = this;
            children["network-all-rds"] = network_all_rds;
        }
        return children.at("network-all-rds");
    }

    if(child_yang_name == "network-lookup-all-rds")
    {
        if(network_lookup_all_rds != nullptr)
        {
            children["network-lookup-all-rds"] = network_lookup_all_rds;
        }
        else
        {
            network_lookup_all_rds = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds>();
            network_lookup_all_rds->parent = this;
            children["network-lookup-all-rds"] = network_lookup_all_rds;
        }
        return children.at("network-lookup-all-rds");
    }

    if(child_yang_name == "network-prefixes")
    {
        if(network_prefixes != nullptr)
        {
            children["network-prefixes"] = network_prefixes;
        }
        else
        {
            network_prefixes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes>();
            network_prefixes->parent = this;
            children["network-prefixes"] = network_prefixes;
        }
        return children.at("network-prefixes");
    }

    if(child_yang_name == "networks")
    {
        if(networks != nullptr)
        {
            children["networks"] = networks;
        }
        else
        {
            networks = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Networks>();
            networks->parent = this;
            children["networks"] = networks;
        }
        return children.at("networks");
    }

    if(child_yang_name == "next-hop-address-families")
    {
        if(next_hop_address_families != nullptr)
        {
            children["next-hop-address-families"] = next_hop_address_families;
        }
        else
        {
            next_hop_address_families = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NextHopAddressFamilies>();
            next_hop_address_families->parent = this;
            children["next-hop-address-families"] = next_hop_address_families;
        }
        return children.at("next-hop-address-families");
    }

    if(child_yang_name == "path-labeled-table")
    {
        if(path_labeled_table != nullptr)
        {
            children["path-labeled-table"] = path_labeled_table;
        }
        else
        {
            path_labeled_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathLabeledTable>();
            path_labeled_table->parent = this;
            children["path-labeled-table"] = path_labeled_table;
        }
        return children.at("path-labeled-table");
    }

    if(child_yang_name == "path-table")
    {
        if(path_table != nullptr)
        {
            children["path-table"] = path_table;
        }
        else
        {
            path_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathTable>();
            path_table->parent = this;
            children["path-table"] = path_table;
        }
        return children.at("path-table");
    }

    if(child_yang_name == "path-used-table")
    {
        if(path_used_table != nullptr)
        {
            children["path-used-table"] = path_used_table;
        }
        else
        {
            path_used_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PathUsedTable>();
            path_used_table->parent = this;
            children["path-used-table"] = path_used_table;
        }
        return children.at("path-used-table");
    }

    if(child_yang_name == "policies")
    {
        if(policies != nullptr)
        {
            children["policies"] = policies;
        }
        else
        {
            policies = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Policies>();
            policies->parent = this;
            children["policies"] = policies;
        }
        return children.at("policies");
    }

    if(child_yang_name == "prefix-filters")
    {
        if(prefix_filters != nullptr)
        {
            children["prefix-filters"] = prefix_filters;
        }
        else
        {
            prefix_filters = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters>();
            prefix_filters->parent = this;
            children["prefix-filters"] = prefix_filters;
        }
        return children.at("prefix-filters");
    }

    if(child_yang_name == "rpc-sets")
    {
        if(rpc_sets != nullptr)
        {
            children["rpc-sets"] = rpc_sets;
        }
        else
        {
            rpc_sets = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RpcSets>();
            rpc_sets->parent = this;
            children["rpc-sets"] = rpc_sets;
        }
        return children.at("rpc-sets");
    }

    if(child_yang_name == "rt-set-counters")
    {
        if(rt_set_counters != nullptr)
        {
            children["rt-set-counters"] = rt_set_counters;
        }
        else
        {
            rt_set_counters = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::RtSetCounters>();
            rt_set_counters->parent = this;
            children["rt-set-counters"] = rt_set_counters;
        }
        return children.at("rt-set-counters");
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks != nullptr)
        {
            children["sourced-networks"] = sourced_networks;
        }
        else
        {
            sourced_networks = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks>();
            sourced_networks->parent = this;
            children["sourced-networks"] = sourced_networks;
        }
        return children.at("sourced-networks");
    }

    if(child_yang_name == "update-generation-address-family")
    {
        if(update_generation_address_family != nullptr)
        {
            children["update-generation-address-family"] = update_generation_address_family;
        }
        else
        {
            update_generation_address_family = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationAddressFamily>();
            update_generation_address_family->parent = this;
            children["update-generation-address-family"] = update_generation_address_family;
        }
        return children.at("update-generation-address-family");
    }

    if(child_yang_name == "update-generation-filter-groups")
    {
        if(update_generation_filter_groups != nullptr)
        {
            children["update-generation-filter-groups"] = update_generation_filter_groups;
        }
        else
        {
            update_generation_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationFilterGroups>();
            update_generation_filter_groups->parent = this;
            children["update-generation-filter-groups"] = update_generation_filter_groups;
        }
        return children.at("update-generation-filter-groups");
    }

    if(child_yang_name == "update-generation-neighbors")
    {
        if(update_generation_neighbors != nullptr)
        {
            children["update-generation-neighbors"] = update_generation_neighbors;
        }
        else
        {
            update_generation_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationNeighbors>();
            update_generation_neighbors->parent = this;
            children["update-generation-neighbors"] = update_generation_neighbors;
        }
        return children.at("update-generation-neighbors");
    }

    if(child_yang_name == "update-generation-sub-groups")
    {
        if(update_generation_sub_groups != nullptr)
        {
            children["update-generation-sub-groups"] = update_generation_sub_groups;
        }
        else
        {
            update_generation_sub_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationSubGroups>();
            update_generation_sub_groups->parent = this;
            children["update-generation-sub-groups"] = update_generation_sub_groups;
        }
        return children.at("update-generation-sub-groups");
    }

    if(child_yang_name == "update-generation-update-groups")
    {
        if(update_generation_update_groups != nullptr)
        {
            children["update-generation-update-groups"] = update_generation_update_groups;
        }
        else
        {
            update_generation_update_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGenerationUpdateGroups>();
            update_generation_update_groups->parent = this;
            children["update-generation-update-groups"] = update_generation_update_groups;
        }
        return children.at("update-generation-update-groups");
    }

    if(child_yang_name == "update-groups")
    {
        if(update_groups != nullptr)
        {
            children["update-groups"] = update_groups;
        }
        else
        {
            update_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups>();
            update_groups->parent = this;
            children["update-groups"] = update_groups;
        }
        return children.at("update-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::get_children()
{
    if(children.find("advertised-path-counts") == children.end())
    {
        if(advertised_path_counts != nullptr)
        {
            children["advertised-path-counts"] = advertised_path_counts;
        }
    }

    if(children.find("advertised-path-xr") == children.end())
    {
        if(advertised_path_xr != nullptr)
        {
            children["advertised-path-xr"] = advertised_path_xr;
        }
    }

    if(children.find("advertised-paths") == children.end())
    {
        if(advertised_paths != nullptr)
        {
            children["advertised-paths"] = advertised_paths;
        }
    }

    if(children.find("af-process-info") == children.end())
    {
        if(af_process_info != nullptr)
        {
            children["af-process-info"] = af_process_info;
        }
    }

    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes;
        }
    }

    if(children.find("bmp-paths") == children.end())
    {
        if(bmp_paths != nullptr)
        {
            children["bmp-paths"] = bmp_paths;
        }
    }

    if(children.find("convergence") == children.end())
    {
        if(convergence != nullptr)
        {
            children["convergence"] = convergence;
        }
    }

    if(children.find("dampenings") == children.end())
    {
        if(dampenings != nullptr)
        {
            children["dampenings"] = dampenings;
        }
    }

    if(children.find("epes") == children.end())
    {
        if(epes != nullptr)
        {
            children["epes"] = epes;
        }
    }

    if(children.find("global-af-process-info") == children.end())
    {
        if(global_af_process_info != nullptr)
        {
            children["global-af-process-info"] = global_af_process_info;
        }
    }

    if(children.find("neighbor-af-table") == children.end())
    {
        if(neighbor_af_table != nullptr)
        {
            children["neighbor-af-table"] = neighbor_af_table;
        }
    }

    if(children.find("network-all-rds") == children.end())
    {
        if(network_all_rds != nullptr)
        {
            children["network-all-rds"] = network_all_rds;
        }
    }

    if(children.find("network-lookup-all-rds") == children.end())
    {
        if(network_lookup_all_rds != nullptr)
        {
            children["network-lookup-all-rds"] = network_lookup_all_rds;
        }
    }

    if(children.find("network-prefixes") == children.end())
    {
        if(network_prefixes != nullptr)
        {
            children["network-prefixes"] = network_prefixes;
        }
    }

    if(children.find("networks") == children.end())
    {
        if(networks != nullptr)
        {
            children["networks"] = networks;
        }
    }

    if(children.find("next-hop-address-families") == children.end())
    {
        if(next_hop_address_families != nullptr)
        {
            children["next-hop-address-families"] = next_hop_address_families;
        }
    }

    if(children.find("path-labeled-table") == children.end())
    {
        if(path_labeled_table != nullptr)
        {
            children["path-labeled-table"] = path_labeled_table;
        }
    }

    if(children.find("path-table") == children.end())
    {
        if(path_table != nullptr)
        {
            children["path-table"] = path_table;
        }
    }

    if(children.find("path-used-table") == children.end())
    {
        if(path_used_table != nullptr)
        {
            children["path-used-table"] = path_used_table;
        }
    }

    if(children.find("policies") == children.end())
    {
        if(policies != nullptr)
        {
            children["policies"] = policies;
        }
    }

    if(children.find("prefix-filters") == children.end())
    {
        if(prefix_filters != nullptr)
        {
            children["prefix-filters"] = prefix_filters;
        }
    }

    if(children.find("rpc-sets") == children.end())
    {
        if(rpc_sets != nullptr)
        {
            children["rpc-sets"] = rpc_sets;
        }
    }

    if(children.find("rt-set-counters") == children.end())
    {
        if(rt_set_counters != nullptr)
        {
            children["rt-set-counters"] = rt_set_counters;
        }
    }

    if(children.find("sourced-networks") == children.end())
    {
        if(sourced_networks != nullptr)
        {
            children["sourced-networks"] = sourced_networks;
        }
    }

    if(children.find("update-generation-address-family") == children.end())
    {
        if(update_generation_address_family != nullptr)
        {
            children["update-generation-address-family"] = update_generation_address_family;
        }
    }

    if(children.find("update-generation-filter-groups") == children.end())
    {
        if(update_generation_filter_groups != nullptr)
        {
            children["update-generation-filter-groups"] = update_generation_filter_groups;
        }
    }

    if(children.find("update-generation-neighbors") == children.end())
    {
        if(update_generation_neighbors != nullptr)
        {
            children["update-generation-neighbors"] = update_generation_neighbors;
        }
    }

    if(children.find("update-generation-sub-groups") == children.end())
    {
        if(update_generation_sub_groups != nullptr)
        {
            children["update-generation-sub-groups"] = update_generation_sub_groups;
        }
    }

    if(children.find("update-generation-update-groups") == children.end())
    {
        if(update_generation_update_groups != nullptr)
        {
            children["update-generation-update-groups"] = update_generation_update_groups;
        }
    }

    if(children.find("update-groups") == children.end())
    {
        if(update_groups != nullptr)
        {
            children["update-groups"] = update_groups;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRds()
{
    yang_name = "network-lookup-all-rds"; yang_parent_name = "af";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::~NetworkLookupAllRds()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::has_data() const
{
    for (std::size_t index=0; index<network_lookup_all_rd.size(); index++)
    {
        if(network_lookup_all_rd[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::has_operation() const
{
    for (std::size_t index=0; index<network_lookup_all_rd.size(); index++)
    {
        if(network_lookup_all_rd[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-all-rds";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLookupAllRds' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-lookup-all-rd")
    {
        for(auto const & c : network_lookup_all_rd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd>();
        c->parent = this;
        network_lookup_all_rd.push_back(std::move(c));
        children[segment_path] = network_lookup_all_rd.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::get_children()
{
    for (auto const & c : network_lookup_all_rd)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupAllRd()
    :
    network_prefix{YType::str, "network-prefix"}
    	,
    network_lookup_rds(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds>())
{
    network_lookup_rds->parent = this;
    children["network-lookup-rds"] = network_lookup_rds;

    yang_name = "network-lookup-all-rd"; yang_parent_name = "network-lookup-all-rds";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::~NetworkLookupAllRd()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::has_data() const
{
    return network_prefix.is_set
	|| (network_lookup_rds !=  nullptr && network_lookup_rds->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::has_operation() const
{
    return is_set(operation)
	|| is_set(network_prefix.operation)
	|| (network_lookup_rds !=  nullptr && network_lookup_rds->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-all-rd" <<"[network-prefix='" <<network_prefix <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLookupAllRd' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix.is_set || is_set(network_prefix.operation)) leaf_name_data.push_back(network_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-lookup-rds")
    {
        if(network_lookup_rds != nullptr)
        {
            children["network-lookup-rds"] = network_lookup_rds;
        }
        else
        {
            network_lookup_rds = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds>();
            network_lookup_rds->parent = this;
            children["network-lookup-rds"] = network_lookup_rds;
        }
        return children.at("network-lookup-rds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_children()
{
    if(children.find("network-lookup-rds") == children.end())
    {
        if(network_lookup_rds != nullptr)
        {
            children["network-lookup-rds"] = network_lookup_rds;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "network-prefix")
    {
        network_prefix = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRds()
{
    yang_name = "network-lookup-rds"; yang_parent_name = "network-lookup-all-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::~NetworkLookupRds()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::has_data() const
{
    for (std::size_t index=0; index<network_lookup_rd.size(); index++)
    {
        if(network_lookup_rd[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::has_operation() const
{
    for (std::size_t index=0; index<network_lookup_rd.size(); index++)
    {
        if(network_lookup_rd[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-rds";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLookupRds' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-lookup-rd")
    {
        for(auto const & c : network_lookup_rd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd>();
        c->parent = this;
        network_lookup_rd.push_back(std::move(c));
        children[segment_path] = network_lookup_rd.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_children()
{
    for (auto const & c : network_lookup_rd)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::NetworkLookupRd()
    :
    rd{YType::str, "rd"},
    advertisedto_pe{YType::boolean, "advertisedto-pe"},
    af_name{YType::enumeration, "af-name"},
    bit{YType::uint16, "bit"},
    flags{YType::uint8, "flags"},
    gateway_array{YType::uint32, "gateway-array"},
    has_inconsistent_paths{YType::boolean, "has-inconsistent-paths"},
    has_lbl_retained{YType::boolean, "has-lbl-retained"},
    has_local_label{YType::boolean, "has-local-label"},
    is_net_aggregation_suppressed{YType::boolean, "is-net-aggregation-suppressed"},
    is_net_ldp_signaled{YType::boolean, "is-net-ldp-signaled"},
    is_permanent_network{YType::boolean, "is-permanent-network"},
    net_backup_available{YType::boolean, "net-backup-available"},
    net_backup_label_rewrite_available{YType::boolean, "net-backup-label-rewrite-available"},
    net_eibgp_multipath{YType::boolean, "net-eibgp-multipath"},
    net_extended_flags{YType::uint32, "net-extended-flags"},
    net_flags{YType::uint32, "net-flags"},
    net_local_label{YType::uint32, "net-local-label"},
    net_local_label_rewrite{YType::boolean, "net-local-label-rewrite"},
    net_local_label_srgb{YType::boolean, "net-local-label-srgb"},
    net_multipath{YType::boolean, "net-multipath"},
    num_of_path{YType::uint32, "num-of-path"},
    process_instance_id{YType::uint8, "process-instance-id"},
    resilient_nexthop_set{YType::uint32, "resilient-nexthop-set"},
    rib_failed{YType::boolean, "rib-failed"},
    route_distinguisher{YType::str, "route-distinguisher"},
    table_brib_version{YType::uint32, "table-brib-version"},
    table_version{YType::uint32, "table-version"},
    version{YType::uint32, "version"},
    vrf_name{YType::str, "vrf-name"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix>())
	,version_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge>())
	,version_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp>())
{
    bgp_prefix->parent = this;
    children["bgp-prefix"] = bgp_prefix;

    version_age->parent = this;
    children["version-age"] = version_age;

    version_timestamp->parent = this;
    children["version-timestamp"] = version_timestamp;

    yang_name = "network-lookup-rd"; yang_parent_name = "network-lookup-rds";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::~NetworkLookupRd()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::has_data() const
{
    for (std::size_t index=0; index<active_path_element.size(); index++)
    {
        if(active_path_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_process_instance_path.size(); index++)
    {
        if(active_process_instance_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_path_element.size(); index++)
    {
        if(local_path_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_process_instance_path.size(); index++)
    {
        if(local_process_instance_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_data())
            return true;
    }
    return rd.is_set
	|| advertisedto_pe.is_set
	|| af_name.is_set
	|| bit.is_set
	|| flags.is_set
	|| gateway_array.is_set
	|| has_inconsistent_paths.is_set
	|| has_lbl_retained.is_set
	|| has_local_label.is_set
	|| is_net_aggregation_suppressed.is_set
	|| is_net_ldp_signaled.is_set
	|| is_permanent_network.is_set
	|| net_backup_available.is_set
	|| net_backup_label_rewrite_available.is_set
	|| net_eibgp_multipath.is_set
	|| net_extended_flags.is_set
	|| net_flags.is_set
	|| net_local_label.is_set
	|| net_local_label_rewrite.is_set
	|| net_local_label_srgb.is_set
	|| net_multipath.is_set
	|| num_of_path.is_set
	|| process_instance_id.is_set
	|| resilient_nexthop_set.is_set
	|| rib_failed.is_set
	|| route_distinguisher.is_set
	|| table_brib_version.is_set
	|| table_version.is_set
	|| version.is_set
	|| vrf_name.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (version_age !=  nullptr && version_age->has_data())
	|| (version_timestamp !=  nullptr && version_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::has_operation() const
{
    for (std::size_t index=0; index<active_path_element.size(); index++)
    {
        if(active_path_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_process_instance_path.size(); index++)
    {
        if(active_process_instance_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_path_element.size(); index++)
    {
        if(local_path_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_process_instance_path.size(); index++)
    {
        if(local_process_instance_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rd.operation)
	|| is_set(advertisedto_pe.operation)
	|| is_set(af_name.operation)
	|| is_set(bit.operation)
	|| is_set(flags.operation)
	|| is_set(gateway_array.operation)
	|| is_set(has_inconsistent_paths.operation)
	|| is_set(has_lbl_retained.operation)
	|| is_set(has_local_label.operation)
	|| is_set(is_net_aggregation_suppressed.operation)
	|| is_set(is_net_ldp_signaled.operation)
	|| is_set(is_permanent_network.operation)
	|| is_set(net_backup_available.operation)
	|| is_set(net_backup_label_rewrite_available.operation)
	|| is_set(net_eibgp_multipath.operation)
	|| is_set(net_extended_flags.operation)
	|| is_set(net_flags.operation)
	|| is_set(net_local_label.operation)
	|| is_set(net_local_label_rewrite.operation)
	|| is_set(net_local_label_srgb.operation)
	|| is_set(net_multipath.operation)
	|| is_set(num_of_path.operation)
	|| is_set(process_instance_id.operation)
	|| is_set(resilient_nexthop_set.operation)
	|| is_set(rib_failed.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(table_brib_version.operation)
	|| is_set(table_version.operation)
	|| is_set(version.operation)
	|| is_set(vrf_name.operation)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (version_age !=  nullptr && version_age->has_operation())
	|| (version_timestamp !=  nullptr && version_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-rd" <<"[rd='" <<rd <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkLookupRd' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (advertisedto_pe.is_set || is_set(advertisedto_pe.operation)) leaf_name_data.push_back(advertisedto_pe.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (bit.is_set || is_set(bit.operation)) leaf_name_data.push_back(bit.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (gateway_array.is_set || is_set(gateway_array.operation)) leaf_name_data.push_back(gateway_array.get_name_leafdata());
    if (has_inconsistent_paths.is_set || is_set(has_inconsistent_paths.operation)) leaf_name_data.push_back(has_inconsistent_paths.get_name_leafdata());
    if (has_lbl_retained.is_set || is_set(has_lbl_retained.operation)) leaf_name_data.push_back(has_lbl_retained.get_name_leafdata());
    if (has_local_label.is_set || is_set(has_local_label.operation)) leaf_name_data.push_back(has_local_label.get_name_leafdata());
    if (is_net_aggregation_suppressed.is_set || is_set(is_net_aggregation_suppressed.operation)) leaf_name_data.push_back(is_net_aggregation_suppressed.get_name_leafdata());
    if (is_net_ldp_signaled.is_set || is_set(is_net_ldp_signaled.operation)) leaf_name_data.push_back(is_net_ldp_signaled.get_name_leafdata());
    if (is_permanent_network.is_set || is_set(is_permanent_network.operation)) leaf_name_data.push_back(is_permanent_network.get_name_leafdata());
    if (net_backup_available.is_set || is_set(net_backup_available.operation)) leaf_name_data.push_back(net_backup_available.get_name_leafdata());
    if (net_backup_label_rewrite_available.is_set || is_set(net_backup_label_rewrite_available.operation)) leaf_name_data.push_back(net_backup_label_rewrite_available.get_name_leafdata());
    if (net_eibgp_multipath.is_set || is_set(net_eibgp_multipath.operation)) leaf_name_data.push_back(net_eibgp_multipath.get_name_leafdata());
    if (net_extended_flags.is_set || is_set(net_extended_flags.operation)) leaf_name_data.push_back(net_extended_flags.get_name_leafdata());
    if (net_flags.is_set || is_set(net_flags.operation)) leaf_name_data.push_back(net_flags.get_name_leafdata());
    if (net_local_label.is_set || is_set(net_local_label.operation)) leaf_name_data.push_back(net_local_label.get_name_leafdata());
    if (net_local_label_rewrite.is_set || is_set(net_local_label_rewrite.operation)) leaf_name_data.push_back(net_local_label_rewrite.get_name_leafdata());
    if (net_local_label_srgb.is_set || is_set(net_local_label_srgb.operation)) leaf_name_data.push_back(net_local_label_srgb.get_name_leafdata());
    if (net_multipath.is_set || is_set(net_multipath.operation)) leaf_name_data.push_back(net_multipath.get_name_leafdata());
    if (num_of_path.is_set || is_set(num_of_path.operation)) leaf_name_data.push_back(num_of_path.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.operation)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (resilient_nexthop_set.is_set || is_set(resilient_nexthop_set.operation)) leaf_name_data.push_back(resilient_nexthop_set.get_name_leafdata());
    if (rib_failed.is_set || is_set(rib_failed.operation)) leaf_name_data.push_back(rib_failed.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (table_brib_version.is_set || is_set(table_brib_version.operation)) leaf_name_data.push_back(table_brib_version.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.operation)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-path-element")
    {
        for(auto const & c : active_path_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement>();
        c->parent = this;
        active_path_element.push_back(std::move(c));
        children[segment_path] = active_path_element.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "active-process-instance-path")
    {
        for(auto const & c : active_process_instance_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath>();
        c->parent = this;
        active_process_instance_path.push_back(std::move(c));
        children[segment_path] = active_process_instance_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "add-path-orr-bitfield")
    {
        for(auto const & c : add_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield>();
        c->parent = this;
        add_path_orr_bitfield.push_back(std::move(c));
        children[segment_path] = add_path_orr_bitfield.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "best-path-orr-bitfield")
    {
        for(auto const & c : best_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield>();
        c->parent = this;
        best_path_orr_bitfield.push_back(std::move(c));
        children[segment_path] = best_path_orr_bitfield.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix != nullptr)
        {
            children["bgp-prefix"] = bgp_prefix;
        }
        else
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix>();
            bgp_prefix->parent = this;
            children["bgp-prefix"] = bgp_prefix;
        }
        return children.at("bgp-prefix");
    }

    if(child_yang_name == "local-path-element")
    {
        for(auto const & c : local_path_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement>();
        c->parent = this;
        local_path_element.push_back(std::move(c));
        children[segment_path] = local_path_element.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "local-peers-advertised-to")
    {
        for(auto const & c : local_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo>();
        c->parent = this;
        local_peers_advertised_to.push_back(std::move(c));
        children[segment_path] = local_peers_advertised_to.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "local-process-instance-path")
    {
        for(auto const & c : local_process_instance_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath>();
        c->parent = this;
        local_process_instance_path.push_back(std::move(c));
        children[segment_path] = local_process_instance_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pe-peers-advertised-to")
    {
        for(auto const & c : pe_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo>();
        c->parent = this;
        pe_peers_advertised_to.push_back(std::move(c));
        children[segment_path] = pe_peers_advertised_to.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "version-age")
    {
        if(version_age != nullptr)
        {
            children["version-age"] = version_age;
        }
        else
        {
            version_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge>();
            version_age->parent = this;
            children["version-age"] = version_age;
        }
        return children.at("version-age");
    }

    if(child_yang_name == "version-timestamp")
    {
        if(version_timestamp != nullptr)
        {
            children["version-timestamp"] = version_timestamp;
        }
        else
        {
            version_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp>();
            version_timestamp->parent = this;
            children["version-timestamp"] = version_timestamp;
        }
        return children.at("version-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_children()
{
    for (auto const & c : active_path_element)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : active_process_instance_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : add_path_orr_bitfield)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : best_path_orr_bitfield)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("bgp-prefix") == children.end())
    {
        if(bgp_prefix != nullptr)
        {
            children["bgp-prefix"] = bgp_prefix;
        }
    }

    for (auto const & c : local_path_element)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : local_peers_advertised_to)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : local_process_instance_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pe_peers_advertised_to)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("version-age") == children.end())
    {
        if(version_age != nullptr)
        {
            children["version-age"] = version_age;
        }
    }

    if(children.find("version-timestamp") == children.end())
    {
        if(version_timestamp != nullptr)
        {
            children["version-timestamp"] = version_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "bit")
    {
        bit = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "gateway-array")
    {
        gateway_array = value;
    }
    if(value_path == "has-inconsistent-paths")
    {
        has_inconsistent_paths = value;
    }
    if(value_path == "has-lbl-retained")
    {
        has_lbl_retained = value;
    }
    if(value_path == "has-local-label")
    {
        has_local_label = value;
    }
    if(value_path == "is-net-aggregation-suppressed")
    {
        is_net_aggregation_suppressed = value;
    }
    if(value_path == "is-net-ldp-signaled")
    {
        is_net_ldp_signaled = value;
    }
    if(value_path == "is-permanent-network")
    {
        is_permanent_network = value;
    }
    if(value_path == "net-backup-available")
    {
        net_backup_available = value;
    }
    if(value_path == "net-backup-label-rewrite-available")
    {
        net_backup_label_rewrite_available = value;
    }
    if(value_path == "net-eibgp-multipath")
    {
        net_eibgp_multipath = value;
    }
    if(value_path == "net-extended-flags")
    {
        net_extended_flags = value;
    }
    if(value_path == "net-flags")
    {
        net_flags = value;
    }
    if(value_path == "net-local-label")
    {
        net_local_label = value;
    }
    if(value_path == "net-local-label-rewrite")
    {
        net_local_label_rewrite = value;
    }
    if(value_path == "net-local-label-srgb")
    {
        net_local_label_srgb = value;
    }
    if(value_path == "net-multipath")
    {
        net_multipath = value;
    }
    if(value_path == "num-of-path")
    {
        num_of_path = value;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
    }
    if(value_path == "resilient-nexthop-set")
    {
        resilient_nexthop_set = value;
    }
    if(value_path == "rib-failed")
    {
        rib_failed = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version = value;
    }
    if(value_path == "table-version")
    {
        table_version = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    yang_name = "bgp-prefix"; yang_parent_name = "network-lookup-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPrefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::VersionTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "version-timestamp"; yang_parent_name = "network-lookup-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::~VersionTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::VersionAge()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "version-age"; yang_parent_name = "network-lookup-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::~VersionAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-age";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionAge' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "network-lookup-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalPeersAdvertisedTo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "network-lookup-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PePeersAdvertisedTo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "network-lookup-rd";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestPathOrrBitfield' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}


}
}
