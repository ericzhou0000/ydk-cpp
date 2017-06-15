
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_process_memory_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_process_memory_oper {

MemoryUsageProcesses::MemoryUsageProcesses()
{
    yang_name = "memory-usage-processes"; yang_parent_name = "Cisco-IOS-XE-process-memory-oper";
}

MemoryUsageProcesses::~MemoryUsageProcesses()
{
}

bool MemoryUsageProcesses::has_data() const
{
    for (std::size_t index=0; index<memory_usage_process_.size(); index++)
    {
        if(memory_usage_process_[index]->has_data())
            return true;
    }
    return false;
}

bool MemoryUsageProcesses::has_operation() const
{
    for (std::size_t index=0; index<memory_usage_process_.size(); index++)
    {
        if(memory_usage_process_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MemoryUsageProcesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-process-memory-oper:memory-usage-processes";

    return path_buffer.str();

}

const EntityPath MemoryUsageProcesses::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MemoryUsageProcesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-usage-process")
    {
        for(auto const & c : memory_usage_process_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MemoryUsageProcesses::MemoryUsageProcess>();
        c->parent = this;
        memory_usage_process_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemoryUsageProcesses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : memory_usage_process_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MemoryUsageProcesses::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MemoryUsageProcesses::clone_ptr() const
{
    return std::make_shared<MemoryUsageProcesses>();
}

std::string MemoryUsageProcesses::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MemoryUsageProcesses::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MemoryUsageProcesses::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

MemoryUsageProcesses::MemoryUsageProcess::MemoryUsageProcess()
    :
    pid{YType::uint32, "pid"},
    name{YType::str, "name"},
    allocated_memory{YType::uint64, "allocated-memory"},
    freed_memory{YType::uint64, "freed-memory"},
    get_buffers{YType::uint32, "get-buffers"},
    holding_memory{YType::uint64, "holding-memory"},
    ret_buffers{YType::uint32, "ret-buffers"},
    tty{YType::uint16, "tty"}
{
    yang_name = "memory-usage-process"; yang_parent_name = "memory-usage-processes";
}

MemoryUsageProcesses::MemoryUsageProcess::~MemoryUsageProcess()
{
}

bool MemoryUsageProcesses::MemoryUsageProcess::has_data() const
{
    return pid.is_set
	|| name.is_set
	|| allocated_memory.is_set
	|| freed_memory.is_set
	|| get_buffers.is_set
	|| holding_memory.is_set
	|| ret_buffers.is_set
	|| tty.is_set;
}

bool MemoryUsageProcesses::MemoryUsageProcess::has_operation() const
{
    return is_set(operation)
	|| is_set(pid.operation)
	|| is_set(name.operation)
	|| is_set(allocated_memory.operation)
	|| is_set(freed_memory.operation)
	|| is_set(get_buffers.operation)
	|| is_set(holding_memory.operation)
	|| is_set(ret_buffers.operation)
	|| is_set(tty.operation);
}

std::string MemoryUsageProcesses::MemoryUsageProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-usage-process" <<"[pid='" <<pid <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath MemoryUsageProcesses::MemoryUsageProcess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-process-memory-oper:memory-usage-processes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (allocated_memory.is_set || is_set(allocated_memory.operation)) leaf_name_data.push_back(allocated_memory.get_name_leafdata());
    if (freed_memory.is_set || is_set(freed_memory.operation)) leaf_name_data.push_back(freed_memory.get_name_leafdata());
    if (get_buffers.is_set || is_set(get_buffers.operation)) leaf_name_data.push_back(get_buffers.get_name_leafdata());
    if (holding_memory.is_set || is_set(holding_memory.operation)) leaf_name_data.push_back(holding_memory.get_name_leafdata());
    if (ret_buffers.is_set || is_set(ret_buffers.operation)) leaf_name_data.push_back(ret_buffers.get_name_leafdata());
    if (tty.is_set || is_set(tty.operation)) leaf_name_data.push_back(tty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MemoryUsageProcesses::MemoryUsageProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MemoryUsageProcesses::MemoryUsageProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MemoryUsageProcesses::MemoryUsageProcess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "allocated-memory")
    {
        allocated_memory = value;
    }
    if(value_path == "freed-memory")
    {
        freed_memory = value;
    }
    if(value_path == "get-buffers")
    {
        get_buffers = value;
    }
    if(value_path == "holding-memory")
    {
        holding_memory = value;
    }
    if(value_path == "ret-buffers")
    {
        ret_buffers = value;
    }
    if(value_path == "tty")
    {
        tty = value;
    }
}


}
}
