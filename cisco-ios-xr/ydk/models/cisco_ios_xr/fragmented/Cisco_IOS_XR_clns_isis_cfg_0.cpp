
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_0.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_cfg {

Isis::Isis()
    :
    instances(std::make_shared<Isis::Instances>())
{
    instances->parent = this;
    children["instances"] = instances;

    yang_name = "isis"; yang_parent_name = "Cisco-IOS-XR-clns-isis-cfg";
}

Isis::~Isis()
{
}

bool Isis::has_data() const
{
    return (instances !=  nullptr && instances->has_data());
}

bool Isis::has_operation() const
{
    return is_set(operation)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis";

    return path_buffer.str();

}

EntityPath Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "instances")
    {
        if(instances != nullptr)
        {
            children["instances"] = instances;
        }
        else
        {
            instances = std::make_shared<Isis::Instances>();
            instances->parent = this;
            children["instances"] = instances;
        }
        return children.at("instances");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::get_children()
{
    if(children.find("instances") == children.end())
    {
        if(instances != nullptr)
        {
            children["instances"] = instances;
        }
    }

    return children;
}

void Isis::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Isis::clone_ptr() const
{
    return std::make_shared<Isis>();
}

std::string Isis::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Isis::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Isis::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Isis::Instances::Instances()
{
    yang_name = "instances"; yang_parent_name = "isis";
}

Isis::Instances::~Instances()
{
}

bool Isis::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

EntityPath Isis::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
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
        auto c = std::make_shared<Isis::Instances::Instance>();
        c->parent = this;
        instance.push_back(std::move(c));
        children[segment_path] = instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::get_children()
{
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"},
    dynamic_host_name{YType::boolean, "dynamic-host-name"},
    ignore_lsp_errors{YType::boolean, "ignore-lsp-errors"},
    instance_id{YType::uint32, "instance-id"},
    is_type{YType::enumeration, "is-type"},
    log_adjacency_changes{YType::empty, "log-adjacency-changes"},
    log_pdu_drops{YType::empty, "log-pdu-drops"},
    nsr{YType::empty, "nsr"},
    running{YType::empty, "running"},
    tracing_mode{YType::enumeration, "tracing-mode"}
    	,
    adjacency_stagger(nullptr) // presence node
	,afs(std::make_shared<Isis::Instances::Instance::Afs>())
	,distribute(nullptr) // presence node
	,interfaces(std::make_shared<Isis::Instances::Instance::Interfaces>())
	,link_groups(std::make_shared<Isis::Instances::Instance::LinkGroups>())
	,lsp_accept_passwords(std::make_shared<Isis::Instances::Instance::LspAcceptPasswords>())
	,lsp_arrival_times(std::make_shared<Isis::Instances::Instance::LspArrivalTimes>())
	,lsp_check_intervals(std::make_shared<Isis::Instances::Instance::LspCheckIntervals>())
	,lsp_generation_intervals(std::make_shared<Isis::Instances::Instance::LspGenerationIntervals>())
	,lsp_lifetimes(std::make_shared<Isis::Instances::Instance::LspLifetimes>())
	,lsp_mtus(std::make_shared<Isis::Instances::Instance::LspMtus>())
	,lsp_passwords(std::make_shared<Isis::Instances::Instance::LspPasswords>())
	,lsp_refresh_intervals(std::make_shared<Isis::Instances::Instance::LspRefreshIntervals>())
	,max_link_metrics(std::make_shared<Isis::Instances::Instance::MaxLinkMetrics>())
	,nets(std::make_shared<Isis::Instances::Instance::Nets>())
	,nsf(std::make_shared<Isis::Instances::Instance::Nsf>())
	,overload_bits(std::make_shared<Isis::Instances::Instance::OverloadBits>())
	,srgb(nullptr) // presence node
	,trace_buffer_size(std::make_shared<Isis::Instances::Instance::TraceBufferSize>())
{
    afs->parent = this;
    children["afs"] = afs;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    link_groups->parent = this;
    children["link-groups"] = link_groups;

    lsp_accept_passwords->parent = this;
    children["lsp-accept-passwords"] = lsp_accept_passwords;

    lsp_arrival_times->parent = this;
    children["lsp-arrival-times"] = lsp_arrival_times;

    lsp_check_intervals->parent = this;
    children["lsp-check-intervals"] = lsp_check_intervals;

    lsp_generation_intervals->parent = this;
    children["lsp-generation-intervals"] = lsp_generation_intervals;

    lsp_lifetimes->parent = this;
    children["lsp-lifetimes"] = lsp_lifetimes;

    lsp_mtus->parent = this;
    children["lsp-mtus"] = lsp_mtus;

    lsp_passwords->parent = this;
    children["lsp-passwords"] = lsp_passwords;

    lsp_refresh_intervals->parent = this;
    children["lsp-refresh-intervals"] = lsp_refresh_intervals;

    max_link_metrics->parent = this;
    children["max-link-metrics"] = max_link_metrics;

    nets->parent = this;
    children["nets"] = nets;

    nsf->parent = this;
    children["nsf"] = nsf;

    overload_bits->parent = this;
    children["overload-bits"] = overload_bits;

    trace_buffer_size->parent = this;
    children["trace-buffer-size"] = trace_buffer_size;

    yang_name = "instance"; yang_parent_name = "instances";
}

Isis::Instances::Instance::~Instance()
{
}

bool Isis::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| dynamic_host_name.is_set
	|| ignore_lsp_errors.is_set
	|| instance_id.is_set
	|| is_type.is_set
	|| log_adjacency_changes.is_set
	|| log_pdu_drops.is_set
	|| nsr.is_set
	|| running.is_set
	|| tracing_mode.is_set
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (distribute !=  nullptr && distribute->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (link_groups !=  nullptr && link_groups->has_data())
	|| (lsp_accept_passwords !=  nullptr && lsp_accept_passwords->has_data())
	|| (lsp_arrival_times !=  nullptr && lsp_arrival_times->has_data())
	|| (lsp_check_intervals !=  nullptr && lsp_check_intervals->has_data())
	|| (lsp_generation_intervals !=  nullptr && lsp_generation_intervals->has_data())
	|| (lsp_lifetimes !=  nullptr && lsp_lifetimes->has_data())
	|| (lsp_mtus !=  nullptr && lsp_mtus->has_data())
	|| (lsp_passwords !=  nullptr && lsp_passwords->has_data())
	|| (lsp_refresh_intervals !=  nullptr && lsp_refresh_intervals->has_data())
	|| (max_link_metrics !=  nullptr && max_link_metrics->has_data())
	|| (nets !=  nullptr && nets->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (overload_bits !=  nullptr && overload_bits->has_data())
	|| (srgb !=  nullptr && srgb->has_data())
	|| (trace_buffer_size !=  nullptr && trace_buffer_size->has_data());
}

bool Isis::Instances::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(dynamic_host_name.operation)
	|| is_set(ignore_lsp_errors.operation)
	|| is_set(instance_id.operation)
	|| is_set(is_type.operation)
	|| is_set(log_adjacency_changes.operation)
	|| is_set(log_pdu_drops.operation)
	|| is_set(nsr.operation)
	|| is_set(running.operation)
	|| is_set(tracing_mode.operation)
	|| (adjacency_stagger !=  nullptr && adjacency_stagger->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (distribute !=  nullptr && distribute->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (link_groups !=  nullptr && link_groups->has_operation())
	|| (lsp_accept_passwords !=  nullptr && lsp_accept_passwords->has_operation())
	|| (lsp_arrival_times !=  nullptr && lsp_arrival_times->has_operation())
	|| (lsp_check_intervals !=  nullptr && lsp_check_intervals->has_operation())
	|| (lsp_generation_intervals !=  nullptr && lsp_generation_intervals->has_operation())
	|| (lsp_lifetimes !=  nullptr && lsp_lifetimes->has_operation())
	|| (lsp_mtus !=  nullptr && lsp_mtus->has_operation())
	|| (lsp_passwords !=  nullptr && lsp_passwords->has_operation())
	|| (lsp_refresh_intervals !=  nullptr && lsp_refresh_intervals->has_operation())
	|| (max_link_metrics !=  nullptr && max_link_metrics->has_operation())
	|| (nets !=  nullptr && nets->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (overload_bits !=  nullptr && overload_bits->has_operation())
	|| (srgb !=  nullptr && srgb->has_operation())
	|| (trace_buffer_size !=  nullptr && trace_buffer_size->has_operation());
}

std::string Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-clns-isis-cfg:isis/instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (dynamic_host_name.is_set || is_set(dynamic_host_name.operation)) leaf_name_data.push_back(dynamic_host_name.get_name_leafdata());
    if (ignore_lsp_errors.is_set || is_set(ignore_lsp_errors.operation)) leaf_name_data.push_back(ignore_lsp_errors.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.operation)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.operation)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (log_pdu_drops.is_set || is_set(log_pdu_drops.operation)) leaf_name_data.push_back(log_pdu_drops.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (tracing_mode.is_set || is_set(tracing_mode.operation)) leaf_name_data.push_back(tracing_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-stagger")
    {
        if(adjacency_stagger != nullptr)
        {
            children["adjacency-stagger"] = adjacency_stagger;
        }
        else
        {
            adjacency_stagger = std::make_shared<Isis::Instances::Instance::AdjacencyStagger>();
            adjacency_stagger->parent = this;
            children["adjacency-stagger"] = adjacency_stagger;
        }
        return children.at("adjacency-stagger");
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<Isis::Instances::Instance::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "distribute")
    {
        if(distribute != nullptr)
        {
            children["distribute"] = distribute;
        }
        else
        {
            distribute = std::make_shared<Isis::Instances::Instance::Distribute>();
            distribute->parent = this;
            children["distribute"] = distribute;
        }
        return children.at("distribute");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Isis::Instances::Instance::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "link-groups")
    {
        if(link_groups != nullptr)
        {
            children["link-groups"] = link_groups;
        }
        else
        {
            link_groups = std::make_shared<Isis::Instances::Instance::LinkGroups>();
            link_groups->parent = this;
            children["link-groups"] = link_groups;
        }
        return children.at("link-groups");
    }

    if(child_yang_name == "lsp-accept-passwords")
    {
        if(lsp_accept_passwords != nullptr)
        {
            children["lsp-accept-passwords"] = lsp_accept_passwords;
        }
        else
        {
            lsp_accept_passwords = std::make_shared<Isis::Instances::Instance::LspAcceptPasswords>();
            lsp_accept_passwords->parent = this;
            children["lsp-accept-passwords"] = lsp_accept_passwords;
        }
        return children.at("lsp-accept-passwords");
    }

    if(child_yang_name == "lsp-arrival-times")
    {
        if(lsp_arrival_times != nullptr)
        {
            children["lsp-arrival-times"] = lsp_arrival_times;
        }
        else
        {
            lsp_arrival_times = std::make_shared<Isis::Instances::Instance::LspArrivalTimes>();
            lsp_arrival_times->parent = this;
            children["lsp-arrival-times"] = lsp_arrival_times;
        }
        return children.at("lsp-arrival-times");
    }

    if(child_yang_name == "lsp-check-intervals")
    {
        if(lsp_check_intervals != nullptr)
        {
            children["lsp-check-intervals"] = lsp_check_intervals;
        }
        else
        {
            lsp_check_intervals = std::make_shared<Isis::Instances::Instance::LspCheckIntervals>();
            lsp_check_intervals->parent = this;
            children["lsp-check-intervals"] = lsp_check_intervals;
        }
        return children.at("lsp-check-intervals");
    }

    if(child_yang_name == "lsp-generation-intervals")
    {
        if(lsp_generation_intervals != nullptr)
        {
            children["lsp-generation-intervals"] = lsp_generation_intervals;
        }
        else
        {
            lsp_generation_intervals = std::make_shared<Isis::Instances::Instance::LspGenerationIntervals>();
            lsp_generation_intervals->parent = this;
            children["lsp-generation-intervals"] = lsp_generation_intervals;
        }
        return children.at("lsp-generation-intervals");
    }

    if(child_yang_name == "lsp-lifetimes")
    {
        if(lsp_lifetimes != nullptr)
        {
            children["lsp-lifetimes"] = lsp_lifetimes;
        }
        else
        {
            lsp_lifetimes = std::make_shared<Isis::Instances::Instance::LspLifetimes>();
            lsp_lifetimes->parent = this;
            children["lsp-lifetimes"] = lsp_lifetimes;
        }
        return children.at("lsp-lifetimes");
    }

    if(child_yang_name == "lsp-mtus")
    {
        if(lsp_mtus != nullptr)
        {
            children["lsp-mtus"] = lsp_mtus;
        }
        else
        {
            lsp_mtus = std::make_shared<Isis::Instances::Instance::LspMtus>();
            lsp_mtus->parent = this;
            children["lsp-mtus"] = lsp_mtus;
        }
        return children.at("lsp-mtus");
    }

    if(child_yang_name == "lsp-passwords")
    {
        if(lsp_passwords != nullptr)
        {
            children["lsp-passwords"] = lsp_passwords;
        }
        else
        {
            lsp_passwords = std::make_shared<Isis::Instances::Instance::LspPasswords>();
            lsp_passwords->parent = this;
            children["lsp-passwords"] = lsp_passwords;
        }
        return children.at("lsp-passwords");
    }

    if(child_yang_name == "lsp-refresh-intervals")
    {
        if(lsp_refresh_intervals != nullptr)
        {
            children["lsp-refresh-intervals"] = lsp_refresh_intervals;
        }
        else
        {
            lsp_refresh_intervals = std::make_shared<Isis::Instances::Instance::LspRefreshIntervals>();
            lsp_refresh_intervals->parent = this;
            children["lsp-refresh-intervals"] = lsp_refresh_intervals;
        }
        return children.at("lsp-refresh-intervals");
    }

    if(child_yang_name == "max-link-metrics")
    {
        if(max_link_metrics != nullptr)
        {
            children["max-link-metrics"] = max_link_metrics;
        }
        else
        {
            max_link_metrics = std::make_shared<Isis::Instances::Instance::MaxLinkMetrics>();
            max_link_metrics->parent = this;
            children["max-link-metrics"] = max_link_metrics;
        }
        return children.at("max-link-metrics");
    }

    if(child_yang_name == "nets")
    {
        if(nets != nullptr)
        {
            children["nets"] = nets;
        }
        else
        {
            nets = std::make_shared<Isis::Instances::Instance::Nets>();
            nets->parent = this;
            children["nets"] = nets;
        }
        return children.at("nets");
    }

    if(child_yang_name == "nsf")
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
        else
        {
            nsf = std::make_shared<Isis::Instances::Instance::Nsf>();
            nsf->parent = this;
            children["nsf"] = nsf;
        }
        return children.at("nsf");
    }

    if(child_yang_name == "overload-bits")
    {
        if(overload_bits != nullptr)
        {
            children["overload-bits"] = overload_bits;
        }
        else
        {
            overload_bits = std::make_shared<Isis::Instances::Instance::OverloadBits>();
            overload_bits->parent = this;
            children["overload-bits"] = overload_bits;
        }
        return children.at("overload-bits");
    }

    if(child_yang_name == "srgb")
    {
        if(srgb != nullptr)
        {
            children["srgb"] = srgb;
        }
        else
        {
            srgb = std::make_shared<Isis::Instances::Instance::Srgb>();
            srgb->parent = this;
            children["srgb"] = srgb;
        }
        return children.at("srgb");
    }

    if(child_yang_name == "trace-buffer-size")
    {
        if(trace_buffer_size != nullptr)
        {
            children["trace-buffer-size"] = trace_buffer_size;
        }
        else
        {
            trace_buffer_size = std::make_shared<Isis::Instances::Instance::TraceBufferSize>();
            trace_buffer_size->parent = this;
            children["trace-buffer-size"] = trace_buffer_size;
        }
        return children.at("trace-buffer-size");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::get_children()
{
    if(children.find("adjacency-stagger") == children.end())
    {
        if(adjacency_stagger != nullptr)
        {
            children["adjacency-stagger"] = adjacency_stagger;
        }
    }

    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("distribute") == children.end())
    {
        if(distribute != nullptr)
        {
            children["distribute"] = distribute;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("link-groups") == children.end())
    {
        if(link_groups != nullptr)
        {
            children["link-groups"] = link_groups;
        }
    }

    if(children.find("lsp-accept-passwords") == children.end())
    {
        if(lsp_accept_passwords != nullptr)
        {
            children["lsp-accept-passwords"] = lsp_accept_passwords;
        }
    }

    if(children.find("lsp-arrival-times") == children.end())
    {
        if(lsp_arrival_times != nullptr)
        {
            children["lsp-arrival-times"] = lsp_arrival_times;
        }
    }

    if(children.find("lsp-check-intervals") == children.end())
    {
        if(lsp_check_intervals != nullptr)
        {
            children["lsp-check-intervals"] = lsp_check_intervals;
        }
    }

    if(children.find("lsp-generation-intervals") == children.end())
    {
        if(lsp_generation_intervals != nullptr)
        {
            children["lsp-generation-intervals"] = lsp_generation_intervals;
        }
    }

    if(children.find("lsp-lifetimes") == children.end())
    {
        if(lsp_lifetimes != nullptr)
        {
            children["lsp-lifetimes"] = lsp_lifetimes;
        }
    }

    if(children.find("lsp-mtus") == children.end())
    {
        if(lsp_mtus != nullptr)
        {
            children["lsp-mtus"] = lsp_mtus;
        }
    }

    if(children.find("lsp-passwords") == children.end())
    {
        if(lsp_passwords != nullptr)
        {
            children["lsp-passwords"] = lsp_passwords;
        }
    }

    if(children.find("lsp-refresh-intervals") == children.end())
    {
        if(lsp_refresh_intervals != nullptr)
        {
            children["lsp-refresh-intervals"] = lsp_refresh_intervals;
        }
    }

    if(children.find("max-link-metrics") == children.end())
    {
        if(max_link_metrics != nullptr)
        {
            children["max-link-metrics"] = max_link_metrics;
        }
    }

    if(children.find("nets") == children.end())
    {
        if(nets != nullptr)
        {
            children["nets"] = nets;
        }
    }

    if(children.find("nsf") == children.end())
    {
        if(nsf != nullptr)
        {
            children["nsf"] = nsf;
        }
    }

    if(children.find("overload-bits") == children.end())
    {
        if(overload_bits != nullptr)
        {
            children["overload-bits"] = overload_bits;
        }
    }

    if(children.find("srgb") == children.end())
    {
        if(srgb != nullptr)
        {
            children["srgb"] = srgb;
        }
    }

    if(children.find("trace-buffer-size") == children.end())
    {
        if(trace_buffer_size != nullptr)
        {
            children["trace-buffer-size"] = trace_buffer_size;
        }
    }

    return children;
}

void Isis::Instances::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "dynamic-host-name")
    {
        dynamic_host_name = value;
    }
    if(value_path == "ignore-lsp-errors")
    {
        ignore_lsp_errors = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "is-type")
    {
        is_type = value;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
    }
    if(value_path == "log-pdu-drops")
    {
        log_pdu_drops = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "tracing-mode")
    {
        tracing_mode = value;
    }
}

Isis::Instances::Instance::Srgb::Srgb()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{
    yang_name = "srgb"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Srgb::~Srgb()
{
}

bool Isis::Instances::Instance::Srgb::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Isis::Instances::Instance::Srgb::has_operation() const
{
    return is_set(operation)
	|| is_set(lower_bound.operation)
	|| is_set(upper_bound.operation);
}

std::string Isis::Instances::Instance::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srgb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srgb' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.operation)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.operation)) leaf_name_data.push_back(upper_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srgb::get_children()
{
    return children;
}

void Isis::Instances::Instance::Srgb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
    }
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationIntervals()
{
    yang_name = "lsp-generation-intervals"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspGenerationIntervals::~LspGenerationIntervals()
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_generation_interval.size(); index++)
    {
        if(lsp_generation_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_generation_interval.size(); index++)
    {
        if(lsp_generation_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspGenerationIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspGenerationIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspGenerationIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspGenerationIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-generation-interval")
    {
        for(auto const & c : lsp_generation_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval>();
        c->parent = this;
        lsp_generation_interval.push_back(std::move(c));
        children[segment_path] = lsp_generation_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspGenerationIntervals::get_children()
{
    for (auto const & c : lsp_generation_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspGenerationIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::LspGenerationInterval()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    maximum_wait{YType::uint32, "maximum-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{
    yang_name = "lsp-generation-interval"; yang_parent_name = "lsp-generation-intervals";
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::~LspGenerationInterval()
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| maximum_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(initial_wait.operation)
	|| is_set(maximum_wait.operation)
	|| is_set(secondary_wait.operation);
}

std::string Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspGenerationInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.operation)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.operation)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
    }
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTimes()
{
    yang_name = "lsp-arrival-times"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspArrivalTimes::~LspArrivalTimes()
{
}

bool Isis::Instances::Instance::LspArrivalTimes::has_data() const
{
    for (std::size_t index=0; index<lsp_arrival_time.size(); index++)
    {
        if(lsp_arrival_time[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspArrivalTimes::has_operation() const
{
    for (std::size_t index=0; index<lsp_arrival_time.size(); index++)
    {
        if(lsp_arrival_time[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspArrivalTimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-arrival-times";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspArrivalTimes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspArrivalTimes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspArrivalTimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-arrival-time")
    {
        for(auto const & c : lsp_arrival_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime>();
        c->parent = this;
        lsp_arrival_time.push_back(std::move(c));
        children[segment_path] = lsp_arrival_time.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspArrivalTimes::get_children()
{
    for (auto const & c : lsp_arrival_time)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspArrivalTimes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::LspArrivalTime()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    maximum_wait{YType::uint32, "maximum-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{
    yang_name = "lsp-arrival-time"; yang_parent_name = "lsp-arrival-times";
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::~LspArrivalTime()
{
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| maximum_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(initial_wait.operation)
	|| is_set(maximum_wait.operation)
	|| is_set(secondary_wait.operation);
}

std::string Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-arrival-time" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspArrivalTime' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.operation)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.operation)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
    }
}

Isis::Instances::Instance::TraceBufferSize::TraceBufferSize()
    :
    detailed{YType::uint32, "detailed"},
    hello{YType::uint32, "hello"},
    severe{YType::uint32, "severe"},
    standard{YType::uint32, "standard"}
{
    yang_name = "trace-buffer-size"; yang_parent_name = "instance";
}

Isis::Instances::Instance::TraceBufferSize::~TraceBufferSize()
{
}

bool Isis::Instances::Instance::TraceBufferSize::has_data() const
{
    return detailed.is_set
	|| hello.is_set
	|| severe.is_set
	|| standard.is_set;
}

bool Isis::Instances::Instance::TraceBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(detailed.operation)
	|| is_set(hello.operation)
	|| is_set(severe.operation)
	|| is_set(standard.operation);
}

std::string Isis::Instances::Instance::TraceBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-buffer-size";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::TraceBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TraceBufferSize' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detailed.is_set || is_set(detailed.operation)) leaf_name_data.push_back(detailed.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (severe.is_set || is_set(severe.operation)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (standard.is_set || is_set(standard.operation)) leaf_name_data.push_back(standard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::TraceBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::TraceBufferSize::get_children()
{
    return children;
}

void Isis::Instances::Instance::TraceBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detailed")
    {
        detailed = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "severe")
    {
        severe = value;
    }
    if(value_path == "standard")
    {
        standard = value;
    }
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetrics()
{
    yang_name = "max-link-metrics"; yang_parent_name = "instance";
}

Isis::Instances::Instance::MaxLinkMetrics::~MaxLinkMetrics()
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_data() const
{
    for (std::size_t index=0; index<max_link_metric.size(); index++)
    {
        if(max_link_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_operation() const
{
    for (std::size_t index=0; index<max_link_metric.size(); index++)
    {
        if(max_link_metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::MaxLinkMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::MaxLinkMetrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxLinkMetrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MaxLinkMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-link-metric")
    {
        for(auto const & c : max_link_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric>();
        c->parent = this;
        max_link_metric.push_back(std::move(c));
        children[segment_path] = max_link_metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::MaxLinkMetrics::get_children()
{
    for (auto const & c : max_link_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::MaxLinkMetrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::MaxLinkMetric()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "max-link-metric"; yang_parent_name = "max-link-metrics";
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::~MaxLinkMetric()
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxLinkMetric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_children()
{
    return children;
}

void Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::AdjacencyStagger::AdjacencyStagger()
    :
    initial_nbr{YType::uint32, "initial-nbr"},
    max_nbr{YType::uint32, "max-nbr"}
{
    yang_name = "adjacency-stagger"; yang_parent_name = "instance";
}

Isis::Instances::Instance::AdjacencyStagger::~AdjacencyStagger()
{
}

bool Isis::Instances::Instance::AdjacencyStagger::has_data() const
{
    return initial_nbr.is_set
	|| max_nbr.is_set;
}

bool Isis::Instances::Instance::AdjacencyStagger::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_nbr.operation)
	|| is_set(max_nbr.operation);
}

std::string Isis::Instances::Instance::AdjacencyStagger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-stagger";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::AdjacencyStagger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyStagger' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_nbr.is_set || is_set(initial_nbr.operation)) leaf_name_data.push_back(initial_nbr.get_name_leafdata());
    if (max_nbr.is_set || is_set(max_nbr.operation)) leaf_name_data.push_back(max_nbr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::AdjacencyStagger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::AdjacencyStagger::get_children()
{
    return children;
}

void Isis::Instances::Instance::AdjacencyStagger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-nbr")
    {
        initial_nbr = value;
    }
    if(value_path == "max-nbr")
    {
        max_nbr = value;
    }
}

Isis::Instances::Instance::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Afs::~Afs()
{
}

bool Isis::Instances::Instance::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Afs' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::get_children()
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

void Isis::Instances::Instance::Afs::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
    	,
    af_data(nullptr) // presence node
{
    yang_name = "af"; yang_parent_name = "afs";
}

Isis::Instances::Instance::Afs::Af::~Af()
{
}

bool Isis::Instances::Instance::Afs::Af::has_data() const
{
    for (std::size_t index=0; index<topology_name.size(); index++)
    {
        if(topology_name[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| saf_name.is_set
	|| (af_data !=  nullptr && af_data->has_data());
}

bool Isis::Instances::Instance::Afs::Af::has_operation() const
{
    for (std::size_t index=0; index<topology_name.size(); index++)
    {
        if(topology_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| (af_data !=  nullptr && af_data->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Af' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(af_data != nullptr)
        {
            children["af-data"] = af_data;
        }
        else
        {
            af_data = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData>();
            af_data->parent = this;
            children["af-data"] = af_data;
        }
        return children.at("af-data");
    }

    if(child_yang_name == "topology-name")
    {
        for(auto const & c : topology_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName>();
        c->parent = this;
        topology_name.push_back(std::move(c));
        children[segment_path] = topology_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::get_children()
{
    if(children.find("af-data") == children.end())
    {
        if(af_data != nullptr)
        {
            children["af-data"] = af_data;
        }
    }

    for (auto const & c : topology_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::AfData()
    :
    adjacency_check{YType::enumeration, "adjacency-check"},
    advertise_link_attributes{YType::boolean, "advertise-link-attributes"},
    advertise_passive_only{YType::empty, "advertise-passive-only"},
    apply_weight{YType::enumeration, "apply-weight"},
    attached_bit{YType::enumeration, "attached-bit"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    ignore_attached_bit{YType::boolean, "ignore-attached-bit"},
    maximum_paths{YType::uint32, "maximum-paths"},
    route_source_first_hop{YType::boolean, "route-source-first-hop"},
    single_topology{YType::empty, "single-topology"},
    topology_id{YType::uint32, "topology-id"}
    	,
    admin_distances(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::AdminDistances>())
	,default_information(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation>())
	,frr_table(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable>())
	,ispf(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf>())
	,max_redist_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes>())
	,metric_styles(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MetricStyles>())
	,metrics(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Metrics>())
	,micro_loop_avoidance(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance>())
	,monitor_convergence(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence>())
	,mpls(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls>())
	,mpls_ldp_global(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal>())
	,propagations(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Propagations>())
	,redistributions(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions>())
	,router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::RouterId>())
	,segment_routing(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting>())
	,spf_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals>())
	,spf_periodic_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals>())
	,spf_prefix_priorities(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities>())
	,summary_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes>())
	,ucmp(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp>())
	,weights(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Weights>())
{
    admin_distances->parent = this;
    children["admin-distances"] = admin_distances;

    default_information->parent = this;
    children["default-information"] = default_information;

    frr_table->parent = this;
    children["frr-table"] = frr_table;

    ispf->parent = this;
    children["ispf"] = ispf;

    max_redist_prefixes->parent = this;
    children["max-redist-prefixes"] = max_redist_prefixes;

    metric_styles->parent = this;
    children["metric-styles"] = metric_styles;

    metrics->parent = this;
    children["metrics"] = metrics;

    micro_loop_avoidance->parent = this;
    children["micro-loop-avoidance"] = micro_loop_avoidance;

    monitor_convergence->parent = this;
    children["monitor-convergence"] = monitor_convergence;

    mpls->parent = this;
    children["mpls"] = mpls;

    mpls_ldp_global->parent = this;
    children["mpls-ldp-global"] = mpls_ldp_global;

    propagations->parent = this;
    children["propagations"] = propagations;

    redistributions->parent = this;
    children["redistributions"] = redistributions;

    router_id->parent = this;
    children["router-id"] = router_id;

    segment_routing->parent = this;
    children["segment-routing"] = segment_routing;

    spf_intervals->parent = this;
    children["spf-intervals"] = spf_intervals;

    spf_periodic_intervals->parent = this;
    children["spf-periodic-intervals"] = spf_periodic_intervals;

    spf_prefix_priorities->parent = this;
    children["spf-prefix-priorities"] = spf_prefix_priorities;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    ucmp->parent = this;
    children["ucmp"] = ucmp;

    weights->parent = this;
    children["weights"] = weights;

    yang_name = "af-data"; yang_parent_name = "af";
}

Isis::Instances::Instance::Afs::Af::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::has_data() const
{
    return adjacency_check.is_set
	|| advertise_link_attributes.is_set
	|| advertise_passive_only.is_set
	|| apply_weight.is_set
	|| attached_bit.is_set
	|| default_admin_distance.is_set
	|| ignore_attached_bit.is_set
	|| maximum_paths.is_set
	|| route_source_first_hop.is_set
	|| single_topology.is_set
	|| topology_id.is_set
	|| (admin_distances !=  nullptr && admin_distances->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (frr_table !=  nullptr && frr_table->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_data())
	|| (metric_styles !=  nullptr && metric_styles->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_data())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_data())
	|| (propagations !=  nullptr && propagations->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (spf_intervals !=  nullptr && spf_intervals->has_data())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_data())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (ucmp !=  nullptr && ucmp->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_check.operation)
	|| is_set(advertise_link_attributes.operation)
	|| is_set(advertise_passive_only.operation)
	|| is_set(apply_weight.operation)
	|| is_set(attached_bit.operation)
	|| is_set(default_admin_distance.operation)
	|| is_set(ignore_attached_bit.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(route_source_first_hop.operation)
	|| is_set(single_topology.operation)
	|| is_set(topology_id.operation)
	|| (admin_distances !=  nullptr && admin_distances->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (frr_table !=  nullptr && frr_table->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_operation())
	|| (metric_styles !=  nullptr && metric_styles->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_operation())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_operation())
	|| (propagations !=  nullptr && propagations->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (spf_intervals !=  nullptr && spf_intervals->has_operation())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_operation())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (ucmp !=  nullptr && ucmp->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_check.is_set || is_set(adjacency_check.operation)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (advertise_link_attributes.is_set || is_set(advertise_link_attributes.operation)) leaf_name_data.push_back(advertise_link_attributes.get_name_leafdata());
    if (advertise_passive_only.is_set || is_set(advertise_passive_only.operation)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (apply_weight.is_set || is_set(apply_weight.operation)) leaf_name_data.push_back(apply_weight.get_name_leafdata());
    if (attached_bit.is_set || is_set(attached_bit.operation)) leaf_name_data.push_back(attached_bit.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.operation)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.operation)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (route_source_first_hop.is_set || is_set(route_source_first_hop.operation)) leaf_name_data.push_back(route_source_first_hop.get_name_leafdata());
    if (single_topology.is_set || is_set(single_topology.operation)) leaf_name_data.push_back(single_topology.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.operation)) leaf_name_data.push_back(topology_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-distances")
    {
        if(admin_distances != nullptr)
        {
            children["admin-distances"] = admin_distances;
        }
        else
        {
            admin_distances = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::AdminDistances>();
            admin_distances->parent = this;
            children["admin-distances"] = admin_distances;
        }
        return children.at("admin-distances");
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "frr-table")
    {
        if(frr_table != nullptr)
        {
            children["frr-table"] = frr_table;
        }
        else
        {
            frr_table = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable>();
            frr_table->parent = this;
            children["frr-table"] = frr_table;
        }
        return children.at("frr-table");
    }

    if(child_yang_name == "ispf")
    {
        if(ispf != nullptr)
        {
            children["ispf"] = ispf;
        }
        else
        {
            ispf = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf>();
            ispf->parent = this;
            children["ispf"] = ispf;
        }
        return children.at("ispf");
    }

    if(child_yang_name == "max-redist-prefixes")
    {
        if(max_redist_prefixes != nullptr)
        {
            children["max-redist-prefixes"] = max_redist_prefixes;
        }
        else
        {
            max_redist_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes>();
            max_redist_prefixes->parent = this;
            children["max-redist-prefixes"] = max_redist_prefixes;
        }
        return children.at("max-redist-prefixes");
    }

    if(child_yang_name == "metric-styles")
    {
        if(metric_styles != nullptr)
        {
            children["metric-styles"] = metric_styles;
        }
        else
        {
            metric_styles = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MetricStyles>();
            metric_styles->parent = this;
            children["metric-styles"] = metric_styles;
        }
        return children.at("metric-styles");
    }

    if(child_yang_name == "metrics")
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
        else
        {
            metrics = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Metrics>();
            metrics->parent = this;
            children["metrics"] = metrics;
        }
        return children.at("metrics");
    }

    if(child_yang_name == "micro-loop-avoidance")
    {
        if(micro_loop_avoidance != nullptr)
        {
            children["micro-loop-avoidance"] = micro_loop_avoidance;
        }
        else
        {
            micro_loop_avoidance = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance>();
            micro_loop_avoidance->parent = this;
            children["micro-loop-avoidance"] = micro_loop_avoidance;
        }
        return children.at("micro-loop-avoidance");
    }

    if(child_yang_name == "monitor-convergence")
    {
        if(monitor_convergence != nullptr)
        {
            children["monitor-convergence"] = monitor_convergence;
        }
        else
        {
            monitor_convergence = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence>();
            monitor_convergence->parent = this;
            children["monitor-convergence"] = monitor_convergence;
        }
        return children.at("monitor-convergence");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "mpls-ldp-global")
    {
        if(mpls_ldp_global != nullptr)
        {
            children["mpls-ldp-global"] = mpls_ldp_global;
        }
        else
        {
            mpls_ldp_global = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal>();
            mpls_ldp_global->parent = this;
            children["mpls-ldp-global"] = mpls_ldp_global;
        }
        return children.at("mpls-ldp-global");
    }

    if(child_yang_name == "propagations")
    {
        if(propagations != nullptr)
        {
            children["propagations"] = propagations;
        }
        else
        {
            propagations = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Propagations>();
            propagations->parent = this;
            children["propagations"] = propagations;
        }
        return children.at("propagations");
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
        else
        {
            redistributions = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions>();
            redistributions->parent = this;
            children["redistributions"] = redistributions;
        }
        return children.at("redistributions");
    }

    if(child_yang_name == "router-id")
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
        else
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::RouterId>();
            router_id->parent = this;
            children["router-id"] = router_id;
        }
        return children.at("router-id");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
        else
        {
            segment_routing = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing;
        }
        return children.at("segment-routing");
    }

    if(child_yang_name == "spf-intervals")
    {
        if(spf_intervals != nullptr)
        {
            children["spf-intervals"] = spf_intervals;
        }
        else
        {
            spf_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals>();
            spf_intervals->parent = this;
            children["spf-intervals"] = spf_intervals;
        }
        return children.at("spf-intervals");
    }

    if(child_yang_name == "spf-periodic-intervals")
    {
        if(spf_periodic_intervals != nullptr)
        {
            children["spf-periodic-intervals"] = spf_periodic_intervals;
        }
        else
        {
            spf_periodic_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals>();
            spf_periodic_intervals->parent = this;
            children["spf-periodic-intervals"] = spf_periodic_intervals;
        }
        return children.at("spf-periodic-intervals");
    }

    if(child_yang_name == "spf-prefix-priorities")
    {
        if(spf_prefix_priorities != nullptr)
        {
            children["spf-prefix-priorities"] = spf_prefix_priorities;
        }
        else
        {
            spf_prefix_priorities = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities>();
            spf_prefix_priorities->parent = this;
            children["spf-prefix-priorities"] = spf_prefix_priorities;
        }
        return children.at("spf-prefix-priorities");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "ucmp")
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
        else
        {
            ucmp = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp>();
            ucmp->parent = this;
            children["ucmp"] = ucmp;
        }
        return children.at("ucmp");
    }

    if(child_yang_name == "weights")
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
        else
        {
            weights = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Weights>();
            weights->parent = this;
            children["weights"] = weights;
        }
        return children.at("weights");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::get_children()
{
    if(children.find("admin-distances") == children.end())
    {
        if(admin_distances != nullptr)
        {
            children["admin-distances"] = admin_distances;
        }
    }

    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("frr-table") == children.end())
    {
        if(frr_table != nullptr)
        {
            children["frr-table"] = frr_table;
        }
    }

    if(children.find("ispf") == children.end())
    {
        if(ispf != nullptr)
        {
            children["ispf"] = ispf;
        }
    }

    if(children.find("max-redist-prefixes") == children.end())
    {
        if(max_redist_prefixes != nullptr)
        {
            children["max-redist-prefixes"] = max_redist_prefixes;
        }
    }

    if(children.find("metric-styles") == children.end())
    {
        if(metric_styles != nullptr)
        {
            children["metric-styles"] = metric_styles;
        }
    }

    if(children.find("metrics") == children.end())
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
    }

    if(children.find("micro-loop-avoidance") == children.end())
    {
        if(micro_loop_avoidance != nullptr)
        {
            children["micro-loop-avoidance"] = micro_loop_avoidance;
        }
    }

    if(children.find("monitor-convergence") == children.end())
    {
        if(monitor_convergence != nullptr)
        {
            children["monitor-convergence"] = monitor_convergence;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("mpls-ldp-global") == children.end())
    {
        if(mpls_ldp_global != nullptr)
        {
            children["mpls-ldp-global"] = mpls_ldp_global;
        }
    }

    if(children.find("propagations") == children.end())
    {
        if(propagations != nullptr)
        {
            children["propagations"] = propagations;
        }
    }

    if(children.find("redistributions") == children.end())
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
    }

    if(children.find("router-id") == children.end())
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
    }

    if(children.find("spf-intervals") == children.end())
    {
        if(spf_intervals != nullptr)
        {
            children["spf-intervals"] = spf_intervals;
        }
    }

    if(children.find("spf-periodic-intervals") == children.end())
    {
        if(spf_periodic_intervals != nullptr)
        {
            children["spf-periodic-intervals"] = spf_periodic_intervals;
        }
    }

    if(children.find("spf-prefix-priorities") == children.end())
    {
        if(spf_prefix_priorities != nullptr)
        {
            children["spf-prefix-priorities"] = spf_prefix_priorities;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    if(children.find("ucmp") == children.end())
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
    }

    if(children.find("weights") == children.end())
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
    }
    if(value_path == "advertise-link-attributes")
    {
        advertise_link_attributes = value;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
    }
    if(value_path == "apply-weight")
    {
        apply_weight = value;
    }
    if(value_path == "attached-bit")
    {
        attached_bit = value;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "route-source-first-hop")
    {
        route_source_first_hop = value;
    }
    if(value_path == "single-topology")
    {
        single_topology = value;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::SegmentRouting()
    :
    mpls{YType::enumeration, "mpls"}
    	,
    prefix_sid_map(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;
    children["prefix-sid-map"] = prefix_sid_map;

    yang_name = "segment-routing"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::~SegmentRouting()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::has_data() const
{
    return mpls.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map != nullptr)
        {
            children["prefix-sid-map"] = prefix_sid_map;
        }
        else
        {
            prefix_sid_map = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap>();
            prefix_sid_map->parent = this;
            children["prefix-sid-map"] = prefix_sid_map;
        }
        return children.at("prefix-sid-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::get_children()
{
    if(children.find("prefix-sid-map") == children.end())
    {
        if(prefix_sid_map != nullptr)
        {
            children["prefix-sid-map"] = prefix_sid_map;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"},
    receive{YType::boolean, "receive"}
{
    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing";
}

Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::has_data() const
{
    return advertise_local.is_set
	|| receive.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_local.operation)
	|| is_set(receive.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSidMap' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.operation)) leaf_name_data.push_back(advertise_local.get_name_leafdata());
    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
    }
    if(value_path == "receive")
    {
        receive = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyles()
{
    yang_name = "metric-styles"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::~MetricStyles()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::has_data() const
{
    for (std::size_t index=0; index<metric_style.size(); index++)
    {
        if(metric_style[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::has_operation() const
{
    for (std::size_t index=0; index<metric_style.size(); index++)
    {
        if(metric_style[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-styles";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricStyles' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "metric-style")
    {
        for(auto const & c : metric_style)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle>();
        c->parent = this;
        metric_style.push_back(std::move(c));
        children[segment_path] = metric_style.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::get_children()
{
    for (auto const & c : metric_style)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::MetricStyle()
    :
    level{YType::enumeration, "level"},
    style{YType::enumeration, "style"},
    transition_state{YType::enumeration, "transition-state"}
{
    yang_name = "metric-style"; yang_parent_name = "metric-styles";
}

Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::~MetricStyle()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::has_data() const
{
    return level.is_set
	|| style.is_set
	|| transition_state.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(style.operation)
	|| is_set(transition_state.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricStyle' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (style.is_set || is_set(style.operation)) leaf_name_data.push_back(style.get_name_leafdata());
    if (transition_state.is_set || is_set(transition_state.operation)) leaf_name_data.push_back(transition_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MetricStyles::MetricStyle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "style")
    {
        style = value;
    }
    if(value_path == "transition-state")
    {
        transition_state = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTable()
    :
    frr_load_sharings(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings>())
	,frr_remote_lfa_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes>())
	,frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers>())
	,frr_use_cand_onlies(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies>())
	,priority_limits(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits>())
{
    frr_load_sharings->parent = this;
    children["frr-load-sharings"] = frr_load_sharings;

    frr_remote_lfa_prefixes->parent = this;
    children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;

    frr_tiebreakers->parent = this;
    children["frr-tiebreakers"] = frr_tiebreakers;

    frr_use_cand_onlies->parent = this;
    children["frr-use-cand-onlies"] = frr_use_cand_onlies;

    priority_limits->parent = this;
    children["priority-limits"] = priority_limits;

    yang_name = "frr-table"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::~FrrTable()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::has_data() const
{
    return (frr_load_sharings !=  nullptr && frr_load_sharings->has_data())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_data())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_data())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_data())
	|| (priority_limits !=  nullptr && priority_limits->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::has_operation() const
{
    return is_set(operation)
	|| (frr_load_sharings !=  nullptr && frr_load_sharings->has_operation())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_operation())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_operation())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_operation())
	|| (priority_limits !=  nullptr && priority_limits->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-table";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTable' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-load-sharings")
    {
        if(frr_load_sharings != nullptr)
        {
            children["frr-load-sharings"] = frr_load_sharings;
        }
        else
        {
            frr_load_sharings = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings>();
            frr_load_sharings->parent = this;
            children["frr-load-sharings"] = frr_load_sharings;
        }
        return children.at("frr-load-sharings");
    }

    if(child_yang_name == "frr-remote-lfa-prefixes")
    {
        if(frr_remote_lfa_prefixes != nullptr)
        {
            children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
        }
        else
        {
            frr_remote_lfa_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes>();
            frr_remote_lfa_prefixes->parent = this;
            children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
        }
        return children.at("frr-remote-lfa-prefixes");
    }

    if(child_yang_name == "frr-tiebreakers")
    {
        if(frr_tiebreakers != nullptr)
        {
            children["frr-tiebreakers"] = frr_tiebreakers;
        }
        else
        {
            frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers>();
            frr_tiebreakers->parent = this;
            children["frr-tiebreakers"] = frr_tiebreakers;
        }
        return children.at("frr-tiebreakers");
    }

    if(child_yang_name == "frr-use-cand-onlies")
    {
        if(frr_use_cand_onlies != nullptr)
        {
            children["frr-use-cand-onlies"] = frr_use_cand_onlies;
        }
        else
        {
            frr_use_cand_onlies = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies>();
            frr_use_cand_onlies->parent = this;
            children["frr-use-cand-onlies"] = frr_use_cand_onlies;
        }
        return children.at("frr-use-cand-onlies");
    }

    if(child_yang_name == "priority-limits")
    {
        if(priority_limits != nullptr)
        {
            children["priority-limits"] = priority_limits;
        }
        else
        {
            priority_limits = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits>();
            priority_limits->parent = this;
            children["priority-limits"] = priority_limits;
        }
        return children.at("priority-limits");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::get_children()
{
    if(children.find("frr-load-sharings") == children.end())
    {
        if(frr_load_sharings != nullptr)
        {
            children["frr-load-sharings"] = frr_load_sharings;
        }
    }

    if(children.find("frr-remote-lfa-prefixes") == children.end())
    {
        if(frr_remote_lfa_prefixes != nullptr)
        {
            children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
        }
    }

    if(children.find("frr-tiebreakers") == children.end())
    {
        if(frr_tiebreakers != nullptr)
        {
            children["frr-tiebreakers"] = frr_tiebreakers;
        }
    }

    if(children.find("frr-use-cand-onlies") == children.end())
    {
        if(frr_use_cand_onlies != nullptr)
        {
            children["frr-use-cand-onlies"] = frr_use_cand_onlies;
        }
    }

    if(children.find("priority-limits") == children.end())
    {
        if(priority_limits != nullptr)
        {
            children["priority-limits"] = priority_limits;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharings()
{
    yang_name = "frr-load-sharings"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::~FrrLoadSharings()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::has_data() const
{
    for (std::size_t index=0; index<frr_load_sharing.size(); index++)
    {
        if(frr_load_sharing[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::has_operation() const
{
    for (std::size_t index=0; index<frr_load_sharing.size(); index++)
    {
        if(frr_load_sharing[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharings";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLoadSharings' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-load-sharing")
    {
        for(auto const & c : frr_load_sharing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing>();
        c->parent = this;
        frr_load_sharing.push_back(std::move(c));
        children[segment_path] = frr_load_sharing.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::get_children()
{
    for (auto const & c : frr_load_sharing)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::FrrLoadSharing()
    :
    level{YType::enumeration, "level"},
    load_sharing{YType::enumeration, "load-sharing"}
{
    yang_name = "frr-load-sharing"; yang_parent_name = "frr-load-sharings";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::~FrrLoadSharing()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::has_data() const
{
    return level.is_set
	|| load_sharing.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(load_sharing.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharing" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLoadSharing' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.operation)) leaf_name_data.push_back(load_sharing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrLoadSharings::FrrLoadSharing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimits()
{
    yang_name = "priority-limits"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::~PriorityLimits()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::has_data() const
{
    for (std::size_t index=0; index<priority_limit.size(); index++)
    {
        if(priority_limit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::has_operation() const
{
    for (std::size_t index=0; index<priority_limit.size(); index++)
    {
        if(priority_limit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limits";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityLimits' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priority-limit")
    {
        for(auto const & c : priority_limit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit>();
        c->parent = this;
        priority_limit.push_back(std::move(c));
        children[segment_path] = priority_limit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::get_children()
{
    for (auto const & c : priority_limit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::PriorityLimit()
    :
    frr_type{YType::enumeration, "frr-type"},
    level{YType::enumeration, "level"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "priority-limit"; yang_parent_name = "priority-limits";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::~PriorityLimit()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::has_data() const
{
    return frr_type.is_set
	|| level.is_set
	|| priority.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(level.operation)
	|| is_set(priority.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limit" <<"[frr-type='" <<frr_type <<"']" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityLimit' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::PriorityLimits::PriorityLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefixes()
{
    yang_name = "frr-remote-lfa-prefixes"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::~FrrRemoteLfaPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_prefix.size(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_prefix.size(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaPrefixes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-remote-lfa-prefix")
    {
        for(auto const & c : frr_remote_lfa_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix>();
        c->parent = this;
        frr_remote_lfa_prefix.push_back(std::move(c));
        children[segment_path] = frr_remote_lfa_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::get_children()
{
    for (auto const & c : frr_remote_lfa_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::FrrRemoteLfaPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_list_name{YType::str, "prefix-list-name"}
{
    yang_name = "frr-remote-lfa-prefix"; yang_parent_name = "frr-remote-lfa-prefixes";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::~FrrRemoteLfaPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_data() const
{
    return level.is_set
	|| prefix_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(prefix_list_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefix" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaPrefix' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreakers()
{
    yang_name = "frr-tiebreakers"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::~FrrTiebreakers()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::has_data() const
{
    for (std::size_t index=0; index<frr_tiebreaker.size(); index++)
    {
        if(frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<frr_tiebreaker.size(); index++)
    {
        if(frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreakers";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTiebreakers' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-tiebreaker")
    {
        for(auto const & c : frr_tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker>();
        c->parent = this;
        frr_tiebreaker.push_back(std::move(c));
        children[segment_path] = frr_tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::get_children()
{
    for (auto const & c : frr_tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::FrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{
    yang_name = "frr-tiebreaker"; yang_parent_name = "frr-tiebreakers";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::~FrrTiebreaker()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::has_data() const
{
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(tiebreaker.operation)
	|| is_set(index_.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreaker" <<"[level='" <<level <<"']" <<"[tiebreaker='" <<tiebreaker <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTiebreaker' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrTiebreakers::FrrTiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnlies()
{
    yang_name = "frr-use-cand-onlies"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::~FrrUseCandOnlies()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::has_data() const
{
    for (std::size_t index=0; index<frr_use_cand_only.size(); index++)
    {
        if(frr_use_cand_only[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::has_operation() const
{
    for (std::size_t index=0; index<frr_use_cand_only.size(); index++)
    {
        if(frr_use_cand_only[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-onlies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrUseCandOnlies' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-use-cand-only")
    {
        for(auto const & c : frr_use_cand_only)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly>();
        c->parent = this;
        frr_use_cand_only.push_back(std::move(c));
        children[segment_path] = frr_use_cand_only.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::get_children()
{
    for (auto const & c : frr_use_cand_only)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::FrrUseCandOnly()
    :
    frr_type{YType::enumeration, "frr-type"},
    level{YType::enumeration, "level"}
{
    yang_name = "frr-use-cand-only"; yang_parent_name = "frr-use-cand-onlies";
}

Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::~FrrUseCandOnly()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_data() const
{
    return frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-only" <<"[frr-type='" <<frr_type <<"']" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrUseCandOnly' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "router-id"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::RouterId::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterId' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::RouterId::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriorities()
{
    yang_name = "spf-prefix-priorities"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::~SpfPrefixPriorities()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::has_data() const
{
    for (std::size_t index=0; index<spf_prefix_priority.size(); index++)
    {
        if(spf_prefix_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::has_operation() const
{
    for (std::size_t index=0; index<spf_prefix_priority.size(); index++)
    {
        if(spf_prefix_priority[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priorities";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPrefixPriorities' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-prefix-priority")
    {
        for(auto const & c : spf_prefix_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority>();
        c->parent = this;
        spf_prefix_priority.push_back(std::move(c));
        children[segment_path] = spf_prefix_priority.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::get_children()
{
    for (auto const & c : spf_prefix_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::SpfPrefixPriority()
    :
    level{YType::enumeration, "level"},
    prefix_priority_type{YType::enumeration, "prefix-priority-type"},
    access_list_name{YType::str, "access-list-name"},
    admin_tag{YType::uint32, "admin-tag"}
{
    yang_name = "spf-prefix-priority"; yang_parent_name = "spf-prefix-priorities";
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::~SpfPrefixPriority()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::has_data() const
{
    return level.is_set
	|| prefix_priority_type.is_set
	|| access_list_name.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(prefix_priority_type.operation)
	|| is_set(access_list_name.operation)
	|| is_set(admin_tag.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priority" <<"[level='" <<level <<"']" <<"[prefix-priority-type='" <<prefix_priority_type <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPrefixPriority' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_priority_type.is_set || is_set(prefix_priority_type.operation)) leaf_name_data.push_back(prefix_priority_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.operation)) leaf_name_data.push_back(admin_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPrefixPriorities::SpfPrefixPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "prefix-priority-type")
    {
        prefix_priority_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefixes()
{
    yang_name = "summary-prefixes"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(std::move(c));
        children[segment_path] = summary_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::get_children()
{
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    address_prefix{YType::str, "address-prefix"},
    level{YType::uint32, "level"},
    tag{YType::uint32, "tag"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes";
}

Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return address_prefix.is_set
	|| level.is_set
	|| tag.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation)
	|| is_set(level.operation)
	|| is_set(tag.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::MicroLoopAvoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "micro-loop-avoidance"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::~MicroLoopAvoidance()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::has_data() const
{
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "micro-loop-avoidance";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroLoopAvoidance' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MicroLoopAvoidance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Ucmp()
    :
    delay_interval{YType::uint32, "delay-interval"}
    	,
    enable(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable>())
	,exclude_interfaces(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces>())
{
    enable->parent = this;
    children["enable"] = enable;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "ucmp"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::~Ucmp()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::has_data() const
{
    return delay_interval.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::has_operation() const
{
    return is_set(operation)
	|| is_set(delay_interval.operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ucmp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_interval.is_set || is_set(delay_interval.operation)) leaf_name_data.push_back(delay_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "enable")
    {
        if(enable != nullptr)
        {
            children["enable"] = enable;
        }
        else
        {
            enable = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable>();
            enable->parent = this;
            children["enable"] = enable;
        }
        return children.at("enable");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ucmp::get_children()
{
    if(children.find("enable") == children.end())
    {
        if(enable != nullptr)
        {
            children["enable"] = enable;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay-interval")
    {
        delay_interval = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::Enable()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    variance{YType::uint32, "variance"}
{
    yang_name = "enable"; yang_parent_name = "ucmp";
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::~Enable()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::has_data() const
{
    return prefix_list_name.is_set
	|| variance.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| is_set(variance.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "ucmp";
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ucmp::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefixes()
{
    yang_name = "max-redist-prefixes"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::~MaxRedistPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::has_data() const
{
    for (std::size_t index=0; index<max_redist_prefix.size(); index++)
    {
        if(max_redist_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::has_operation() const
{
    for (std::size_t index=0; index<max_redist_prefix.size(); index++)
    {
        if(max_redist_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxRedistPrefixes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-redist-prefix")
    {
        for(auto const & c : max_redist_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix>();
        c->parent = this;
        max_redist_prefix.push_back(std::move(c));
        children[segment_path] = max_redist_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::get_children()
{
    for (auto const & c : max_redist_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::MaxRedistPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_limit{YType::uint32, "prefix-limit"}
{
    yang_name = "max-redist-prefix"; yang_parent_name = "max-redist-prefixes";
}

Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::~MaxRedistPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::has_data() const
{
    return level.is_set
	|| prefix_limit.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(prefix_limit.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefix" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxRedistPrefix' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MaxRedistPrefixes::MaxRedistPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagations()
{
    yang_name = "propagations"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::~Propagations()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::has_data() const
{
    for (std::size_t index=0; index<propagation.size(); index++)
    {
        if(propagation[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::has_operation() const
{
    for (std::size_t index=0; index<propagation.size(); index++)
    {
        if(propagation[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagations";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagations' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "propagation")
    {
        for(auto const & c : propagation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation>();
        c->parent = this;
        propagation.push_back(std::move(c));
        children[segment_path] = propagation.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Propagations::get_children()
{
    for (auto const & c : propagation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Propagations::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::Propagation()
    :
    destination_level{YType::enumeration, "destination-level"},
    source_level{YType::enumeration, "source-level"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "propagation"; yang_parent_name = "propagations";
}

Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::~Propagation()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::has_data() const
{
    return destination_level.is_set
	|| source_level.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_level.operation)
	|| is_set(source_level.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagation" <<"[destination-level='" <<destination_level <<"']" <<"[source-level='" <<source_level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagation' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_level.is_set || is_set(destination_level.operation)) leaf_name_data.push_back(destination_level.get_name_leafdata());
    if (source_level.is_set || is_set(source_level.operation)) leaf_name_data.push_back(source_level.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Propagations::Propagation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-level")
    {
        destination_level = value;
    }
    if(value_path == "source-level")
    {
        source_level = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistributions()
{
    yang_name = "redistributions"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::~Redistributions()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::has_data() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistributions' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution")
    {
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.push_back(std::move(c));
        children[segment_path] = redistribution.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Redistributions::get_children()
{
    for (auto const & c : redistribution)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Redistribution()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_rip_or_subscriber_or_mobile(nullptr) // presence node
{
    yang_name = "redistribution"; yang_parent_name = "redistributions";
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::~Redistribution()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp>();
        c->parent = this;
        bgp.push_back(std::move(c));
        children[segment_path] = bgp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-or-static-or-rip-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_rip_or_subscriber_or_mobile != nullptr)
        {
            children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
        }
        else
        {
            connected_or_static_or_rip_or_subscriber_or_mobile = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile>();
            connected_or_static_or_rip_or_subscriber_or_mobile->parent = this;
            children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
        }
        return children.at("connected-or-static-or-rip-or-subscriber-or-mobile");
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp>();
        c->parent = this;
        eigrp.push_back(std::move(c));
        children[segment_path] = eigrp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf-or-ospfv3-or-isis-or-application")
    {
        for(auto const & c : ospf_or_ospfv3_or_isis_or_application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication>();
        c->parent = this;
        ospf_or_ospfv3_or_isis_or_application.push_back(std::move(c));
        children[segment_path] = ospf_or_ospfv3_or_isis_or_application.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::get_children()
{
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connected-or-static-or-rip-or-subscriber-or-mobile") == children.end())
    {
        if(connected_or_static_or_rip_or_subscriber_or_mobile != nullptr)
        {
            children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
        }
    }

    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ospf_or_ospfv3_or_isis_or_application)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::ConnectedOrStaticOrRipOrSubscriberOrMobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "connected-or-static-or-rip-or-subscriber-or-mobile"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::~ConnectedOrStaticOrRipOrSubscriberOrMobile()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-rip-or-subscriber-or-mobile";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedOrStaticOrRipOrSubscriberOrMobile' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::OspfOrOspfv3OrIsisOrApplication()
    :
    instance_name{YType::str, "instance-name"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "ospf-or-ospfv3-or-isis-or-application"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::~OspfOrOspfv3OrIsisOrApplication()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_data() const
{
    return instance_name.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-or-ospfv3-or-isis-or-application" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfOrOspfv3OrIsisOrApplication' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "bgp"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::~Bgp()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::Eigrp()
    :
    as_zz{YType::uint32, "as-zz"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::~Eigrp()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::has_data() const
{
    return as_zz.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_zz.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-zz='" <<as_zz <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_zz.is_set || is_set(as_zz.operation)) leaf_name_data.push_back(as_zz.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Redistributions::Redistribution::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-zz")
    {
        as_zz = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicIntervals()
{
    yang_name = "spf-periodic-intervals"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::~SpfPeriodicIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::has_data() const
{
    for (std::size_t index=0; index<spf_periodic_interval.size(); index++)
    {
        if(spf_periodic_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_periodic_interval.size(); index++)
    {
        if(spf_periodic_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPeriodicIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-periodic-interval")
    {
        for(auto const & c : spf_periodic_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval>();
        c->parent = this;
        spf_periodic_interval.push_back(std::move(c));
        children[segment_path] = spf_periodic_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::get_children()
{
    for (auto const & c : spf_periodic_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::SpfPeriodicInterval()
    :
    level{YType::enumeration, "level"},
    periodic_interval{YType::uint32, "periodic-interval"}
{
    yang_name = "spf-periodic-interval"; yang_parent_name = "spf-periodic-intervals";
}

Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::~SpfPeriodicInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::has_data() const
{
    return level.is_set
	|| periodic_interval.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(periodic_interval.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPeriodicInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.operation)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfPeriodicIntervals::SpfPeriodicInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfIntervals()
{
    yang_name = "spf-intervals"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::~SpfIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::has_data() const
{
    for (std::size_t index=0; index<spf_interval.size(); index++)
    {
        if(spf_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_interval.size(); index++)
    {
        if(spf_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-interval")
    {
        for(auto const & c : spf_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval>();
        c->parent = this;
        spf_interval.push_back(std::move(c));
        children[segment_path] = spf_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::get_children()
{
    for (auto const & c : spf_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::SpfInterval()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    maximum_wait{YType::uint32, "maximum-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{
    yang_name = "spf-interval"; yang_parent_name = "spf-intervals";
}

Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::~SpfInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| maximum_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(initial_wait.operation)
	|| is_set(maximum_wait.operation)
	|| is_set(secondary_wait.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.operation)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.operation)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::SpfIntervals::SpfInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::MonitorConvergence()
    :
    enable{YType::empty, "enable"},
    prefix_list{YType::str, "prefix-list"},
    track_ip_frr{YType::empty, "track-ip-frr"}
{
    yang_name = "monitor-convergence"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::~MonitorConvergence()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::has_data() const
{
    return enable.is_set
	|| prefix_list.is_set
	|| track_ip_frr.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(prefix_list.operation)
	|| is_set(track_ip_frr.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-convergence";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorConvergence' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (track_ip_frr.is_set || is_set(track_ip_frr.operation)) leaf_name_data.push_back(track_ip_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MonitorConvergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::DefaultInformation()
    :
    external{YType::empty, "external"},
    policy_name{YType::str, "policy-name"},
    use_policy{YType::boolean, "use-policy"}
{
    yang_name = "default-information"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::~DefaultInformation()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::has_data() const
{
    return external.is_set
	|| policy_name.is_set
	|| use_policy.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(policy_name.operation)
	|| is_set(use_policy.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (use_policy.is_set || is_set(use_policy.operation)) leaf_name_data.push_back(use_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "use-policy")
    {
        use_policy = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistances()
{
    yang_name = "admin-distances"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::~AdminDistances()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::has_data() const
{
    for (std::size_t index=0; index<admin_distance.size(); index++)
    {
        if(admin_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::has_operation() const
{
    for (std::size_t index=0; index<admin_distance.size(); index++)
    {
        if(admin_distance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distances";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminDistances' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-distance")
    {
        for(auto const & c : admin_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance>();
        c->parent = this;
        admin_distance.push_back(std::move(c));
        children[segment_path] = admin_distance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::get_children()
{
    for (auto const & c : admin_distance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::AdminDistance()
    :
    address_prefix{YType::str, "address-prefix"},
    distance{YType::uint32, "distance"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "admin-distance"; yang_parent_name = "admin-distances";
}

Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::~AdminDistance()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::has_data() const
{
    return address_prefix.is_set
	|| distance.is_set
	|| prefix_list.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation)
	|| is_set(distance.operation)
	|| is_set(prefix_list.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distance" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminDistance' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::AdminDistances::AdminDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::Ispf()
    :
    states(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf::States>())
{
    states->parent = this;
    children["states"] = states;

    yang_name = "ispf"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::~Ispf()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::has_data() const
{
    return (states !=  nullptr && states->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::has_operation() const
{
    return is_set(operation)
	|| (states !=  nullptr && states->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ispf' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "states")
    {
        if(states != nullptr)
        {
            children["states"] = states;
        }
        else
        {
            states = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf::States>();
            states->parent = this;
            children["states"] = states;
        }
        return children.at("states");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ispf::get_children()
{
    if(children.find("states") == children.end())
    {
        if(states != nullptr)
        {
            children["states"] = states;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::States()
{
    yang_name = "states"; yang_parent_name = "ispf";
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::~States()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::has_data() const
{
    for (std::size_t index=0; index<state.size(); index++)
    {
        if(state[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::has_operation() const
{
    for (std::size_t index=0; index<state.size(); index++)
    {
        if(state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "states";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'States' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        for(auto const & c : state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State>();
        c->parent = this;
        state.push_back(std::move(c));
        children[segment_path] = state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::get_children()
{
    for (auto const & c : state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::State()
    :
    level{YType::enumeration, "level"},
    state{YType::enumeration, "state"}
{
    yang_name = "state"; yang_parent_name = "states";
}

Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::~State()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::has_data() const
{
    return level.is_set
	|| state.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(state.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Ispf::States::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::MplsLdpGlobal()
    :
    auto_config{YType::boolean, "auto-config"}
{
    yang_name = "mpls-ldp-global"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::~MplsLdpGlobal()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::has_data() const
{
    return auto_config.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_config.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-global";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsLdpGlobal' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.operation)) leaf_name_data.push_back(auto_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::MplsLdpGlobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::Mpls()
    :
    igp_intact{YType::empty, "igp-intact"},
    level{YType::enumeration, "level"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId>())
{
    router_id->parent = this;
    children["router-id"] = router_id;

    yang_name = "mpls"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::~Mpls()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::has_data() const
{
    return igp_intact.is_set
	|| level.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data());
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_intact.operation)
	|| is_set(level.operation)
	|| is_set(multicast_intact.operation)
	|| (router_id !=  nullptr && router_id->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_intact.is_set || is_set(igp_intact.operation)) leaf_name_data.push_back(igp_intact.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.operation)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "router-id")
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
        else
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId>();
            router_id->parent = this;
            children["router-id"] = router_id;
        }
        return children.at("router-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Mpls::get_children()
{
    if(children.find("router-id") == children.end())
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-intact")
    {
        igp_intact = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "router-id"; yang_parent_name = "mpls";
}

Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterId' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Mpls::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metrics()
{
    yang_name = "metrics"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Metrics::get_children()
{
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Metrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{
    yang_name = "metric"; yang_parent_name = "metrics";
}

Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(metric.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::Weights()
{
    yang_name = "weights"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::has_data() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Weights::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weights' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "weight")
    {
        for(auto const & c : weight)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight>();
        c->parent = this;
        weight.push_back(std::move(c));
        children[segment_path] = weight.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Weights::get_children()
{
    for (auto const & c : weight)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Weights::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{
    yang_name = "weight"; yang_parent_name = "weights";
}

Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::has_data() const
{
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::AfData::Weights::Weight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::TopologyName()
    :
    topology_name{YType::str, "topology-name"},
    adjacency_check{YType::enumeration, "adjacency-check"},
    advertise_link_attributes{YType::boolean, "advertise-link-attributes"},
    advertise_passive_only{YType::empty, "advertise-passive-only"},
    apply_weight{YType::enumeration, "apply-weight"},
    attached_bit{YType::enumeration, "attached-bit"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    ignore_attached_bit{YType::boolean, "ignore-attached-bit"},
    maximum_paths{YType::uint32, "maximum-paths"},
    route_source_first_hop{YType::boolean, "route-source-first-hop"},
    single_topology{YType::empty, "single-topology"},
    topology_id{YType::uint32, "topology-id"}
    	,
    admin_distances(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances>())
	,default_information(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation>())
	,frr_table(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable>())
	,ispf(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf>())
	,max_redist_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes>())
	,metric_styles(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles>())
	,metrics(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Metrics>())
	,micro_loop_avoidance(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance>())
	,monitor_convergence(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence>())
	,mpls(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls>())
	,mpls_ldp_global(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal>())
	,propagations(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Propagations>())
	,redistributions(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions>())
	,router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::RouterId>())
	,segment_routing(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting>())
	,spf_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals>())
	,spf_periodic_intervals(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals>())
	,spf_prefix_priorities(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities>())
	,summary_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes>())
	,ucmp(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp>())
	,weights(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Weights>())
{
    admin_distances->parent = this;
    children["admin-distances"] = admin_distances;

    default_information->parent = this;
    children["default-information"] = default_information;

    frr_table->parent = this;
    children["frr-table"] = frr_table;

    ispf->parent = this;
    children["ispf"] = ispf;

    max_redist_prefixes->parent = this;
    children["max-redist-prefixes"] = max_redist_prefixes;

    metric_styles->parent = this;
    children["metric-styles"] = metric_styles;

    metrics->parent = this;
    children["metrics"] = metrics;

    micro_loop_avoidance->parent = this;
    children["micro-loop-avoidance"] = micro_loop_avoidance;

    monitor_convergence->parent = this;
    children["monitor-convergence"] = monitor_convergence;

    mpls->parent = this;
    children["mpls"] = mpls;

    mpls_ldp_global->parent = this;
    children["mpls-ldp-global"] = mpls_ldp_global;

    propagations->parent = this;
    children["propagations"] = propagations;

    redistributions->parent = this;
    children["redistributions"] = redistributions;

    router_id->parent = this;
    children["router-id"] = router_id;

    segment_routing->parent = this;
    children["segment-routing"] = segment_routing;

    spf_intervals->parent = this;
    children["spf-intervals"] = spf_intervals;

    spf_periodic_intervals->parent = this;
    children["spf-periodic-intervals"] = spf_periodic_intervals;

    spf_prefix_priorities->parent = this;
    children["spf-prefix-priorities"] = spf_prefix_priorities;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    ucmp->parent = this;
    children["ucmp"] = ucmp;

    weights->parent = this;
    children["weights"] = weights;

    yang_name = "topology-name"; yang_parent_name = "af";
}

Isis::Instances::Instance::Afs::Af::TopologyName::~TopologyName()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::has_data() const
{
    return topology_name.is_set
	|| adjacency_check.is_set
	|| advertise_link_attributes.is_set
	|| advertise_passive_only.is_set
	|| apply_weight.is_set
	|| attached_bit.is_set
	|| default_admin_distance.is_set
	|| ignore_attached_bit.is_set
	|| maximum_paths.is_set
	|| route_source_first_hop.is_set
	|| single_topology.is_set
	|| topology_id.is_set
	|| (admin_distances !=  nullptr && admin_distances->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (frr_table !=  nullptr && frr_table->has_data())
	|| (ispf !=  nullptr && ispf->has_data())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_data())
	|| (metric_styles !=  nullptr && metric_styles->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_data())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_data())
	|| (propagations !=  nullptr && propagations->has_data())
	|| (redistributions !=  nullptr && redistributions->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (spf_intervals !=  nullptr && spf_intervals->has_data())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_data())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (ucmp !=  nullptr && ucmp->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_name.operation)
	|| is_set(adjacency_check.operation)
	|| is_set(advertise_link_attributes.operation)
	|| is_set(advertise_passive_only.operation)
	|| is_set(apply_weight.operation)
	|| is_set(attached_bit.operation)
	|| is_set(default_admin_distance.operation)
	|| is_set(ignore_attached_bit.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(route_source_first_hop.operation)
	|| is_set(single_topology.operation)
	|| is_set(topology_id.operation)
	|| (admin_distances !=  nullptr && admin_distances->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (frr_table !=  nullptr && frr_table->has_operation())
	|| (ispf !=  nullptr && ispf->has_operation())
	|| (max_redist_prefixes !=  nullptr && max_redist_prefixes->has_operation())
	|| (metric_styles !=  nullptr && metric_styles->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (micro_loop_avoidance !=  nullptr && micro_loop_avoidance->has_operation())
	|| (monitor_convergence !=  nullptr && monitor_convergence->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (mpls_ldp_global !=  nullptr && mpls_ldp_global->has_operation())
	|| (propagations !=  nullptr && propagations->has_operation())
	|| (redistributions !=  nullptr && redistributions->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (spf_intervals !=  nullptr && spf_intervals->has_operation())
	|| (spf_periodic_intervals !=  nullptr && spf_periodic_intervals->has_operation())
	|| (spf_prefix_priorities !=  nullptr && spf_prefix_priorities->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (ucmp !=  nullptr && ucmp->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-name" <<"[topology-name='" <<topology_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyName' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (adjacency_check.is_set || is_set(adjacency_check.operation)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (advertise_link_attributes.is_set || is_set(advertise_link_attributes.operation)) leaf_name_data.push_back(advertise_link_attributes.get_name_leafdata());
    if (advertise_passive_only.is_set || is_set(advertise_passive_only.operation)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (apply_weight.is_set || is_set(apply_weight.operation)) leaf_name_data.push_back(apply_weight.get_name_leafdata());
    if (attached_bit.is_set || is_set(attached_bit.operation)) leaf_name_data.push_back(attached_bit.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.operation)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (ignore_attached_bit.is_set || is_set(ignore_attached_bit.operation)) leaf_name_data.push_back(ignore_attached_bit.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (route_source_first_hop.is_set || is_set(route_source_first_hop.operation)) leaf_name_data.push_back(route_source_first_hop.get_name_leafdata());
    if (single_topology.is_set || is_set(single_topology.operation)) leaf_name_data.push_back(single_topology.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.operation)) leaf_name_data.push_back(topology_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-distances")
    {
        if(admin_distances != nullptr)
        {
            children["admin-distances"] = admin_distances;
        }
        else
        {
            admin_distances = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances>();
            admin_distances->parent = this;
            children["admin-distances"] = admin_distances;
        }
        return children.at("admin-distances");
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "frr-table")
    {
        if(frr_table != nullptr)
        {
            children["frr-table"] = frr_table;
        }
        else
        {
            frr_table = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable>();
            frr_table->parent = this;
            children["frr-table"] = frr_table;
        }
        return children.at("frr-table");
    }

    if(child_yang_name == "ispf")
    {
        if(ispf != nullptr)
        {
            children["ispf"] = ispf;
        }
        else
        {
            ispf = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf>();
            ispf->parent = this;
            children["ispf"] = ispf;
        }
        return children.at("ispf");
    }

    if(child_yang_name == "max-redist-prefixes")
    {
        if(max_redist_prefixes != nullptr)
        {
            children["max-redist-prefixes"] = max_redist_prefixes;
        }
        else
        {
            max_redist_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes>();
            max_redist_prefixes->parent = this;
            children["max-redist-prefixes"] = max_redist_prefixes;
        }
        return children.at("max-redist-prefixes");
    }

    if(child_yang_name == "metric-styles")
    {
        if(metric_styles != nullptr)
        {
            children["metric-styles"] = metric_styles;
        }
        else
        {
            metric_styles = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles>();
            metric_styles->parent = this;
            children["metric-styles"] = metric_styles;
        }
        return children.at("metric-styles");
    }

    if(child_yang_name == "metrics")
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
        else
        {
            metrics = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Metrics>();
            metrics->parent = this;
            children["metrics"] = metrics;
        }
        return children.at("metrics");
    }

    if(child_yang_name == "micro-loop-avoidance")
    {
        if(micro_loop_avoidance != nullptr)
        {
            children["micro-loop-avoidance"] = micro_loop_avoidance;
        }
        else
        {
            micro_loop_avoidance = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance>();
            micro_loop_avoidance->parent = this;
            children["micro-loop-avoidance"] = micro_loop_avoidance;
        }
        return children.at("micro-loop-avoidance");
    }

    if(child_yang_name == "monitor-convergence")
    {
        if(monitor_convergence != nullptr)
        {
            children["monitor-convergence"] = monitor_convergence;
        }
        else
        {
            monitor_convergence = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence>();
            monitor_convergence->parent = this;
            children["monitor-convergence"] = monitor_convergence;
        }
        return children.at("monitor-convergence");
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "mpls-ldp-global")
    {
        if(mpls_ldp_global != nullptr)
        {
            children["mpls-ldp-global"] = mpls_ldp_global;
        }
        else
        {
            mpls_ldp_global = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal>();
            mpls_ldp_global->parent = this;
            children["mpls-ldp-global"] = mpls_ldp_global;
        }
        return children.at("mpls-ldp-global");
    }

    if(child_yang_name == "propagations")
    {
        if(propagations != nullptr)
        {
            children["propagations"] = propagations;
        }
        else
        {
            propagations = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Propagations>();
            propagations->parent = this;
            children["propagations"] = propagations;
        }
        return children.at("propagations");
    }

    if(child_yang_name == "redistributions")
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
        else
        {
            redistributions = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions>();
            redistributions->parent = this;
            children["redistributions"] = redistributions;
        }
        return children.at("redistributions");
    }

    if(child_yang_name == "router-id")
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
        else
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::RouterId>();
            router_id->parent = this;
            children["router-id"] = router_id;
        }
        return children.at("router-id");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
        else
        {
            segment_routing = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing;
        }
        return children.at("segment-routing");
    }

    if(child_yang_name == "spf-intervals")
    {
        if(spf_intervals != nullptr)
        {
            children["spf-intervals"] = spf_intervals;
        }
        else
        {
            spf_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals>();
            spf_intervals->parent = this;
            children["spf-intervals"] = spf_intervals;
        }
        return children.at("spf-intervals");
    }

    if(child_yang_name == "spf-periodic-intervals")
    {
        if(spf_periodic_intervals != nullptr)
        {
            children["spf-periodic-intervals"] = spf_periodic_intervals;
        }
        else
        {
            spf_periodic_intervals = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals>();
            spf_periodic_intervals->parent = this;
            children["spf-periodic-intervals"] = spf_periodic_intervals;
        }
        return children.at("spf-periodic-intervals");
    }

    if(child_yang_name == "spf-prefix-priorities")
    {
        if(spf_prefix_priorities != nullptr)
        {
            children["spf-prefix-priorities"] = spf_prefix_priorities;
        }
        else
        {
            spf_prefix_priorities = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities>();
            spf_prefix_priorities->parent = this;
            children["spf-prefix-priorities"] = spf_prefix_priorities;
        }
        return children.at("spf-prefix-priorities");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "ucmp")
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
        else
        {
            ucmp = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp>();
            ucmp->parent = this;
            children["ucmp"] = ucmp;
        }
        return children.at("ucmp");
    }

    if(child_yang_name == "weights")
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
        else
        {
            weights = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Weights>();
            weights->parent = this;
            children["weights"] = weights;
        }
        return children.at("weights");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::get_children()
{
    if(children.find("admin-distances") == children.end())
    {
        if(admin_distances != nullptr)
        {
            children["admin-distances"] = admin_distances;
        }
    }

    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("frr-table") == children.end())
    {
        if(frr_table != nullptr)
        {
            children["frr-table"] = frr_table;
        }
    }

    if(children.find("ispf") == children.end())
    {
        if(ispf != nullptr)
        {
            children["ispf"] = ispf;
        }
    }

    if(children.find("max-redist-prefixes") == children.end())
    {
        if(max_redist_prefixes != nullptr)
        {
            children["max-redist-prefixes"] = max_redist_prefixes;
        }
    }

    if(children.find("metric-styles") == children.end())
    {
        if(metric_styles != nullptr)
        {
            children["metric-styles"] = metric_styles;
        }
    }

    if(children.find("metrics") == children.end())
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
    }

    if(children.find("micro-loop-avoidance") == children.end())
    {
        if(micro_loop_avoidance != nullptr)
        {
            children["micro-loop-avoidance"] = micro_loop_avoidance;
        }
    }

    if(children.find("monitor-convergence") == children.end())
    {
        if(monitor_convergence != nullptr)
        {
            children["monitor-convergence"] = monitor_convergence;
        }
    }

    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("mpls-ldp-global") == children.end())
    {
        if(mpls_ldp_global != nullptr)
        {
            children["mpls-ldp-global"] = mpls_ldp_global;
        }
    }

    if(children.find("propagations") == children.end())
    {
        if(propagations != nullptr)
        {
            children["propagations"] = propagations;
        }
    }

    if(children.find("redistributions") == children.end())
    {
        if(redistributions != nullptr)
        {
            children["redistributions"] = redistributions;
        }
    }

    if(children.find("router-id") == children.end())
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
    }

    if(children.find("spf-intervals") == children.end())
    {
        if(spf_intervals != nullptr)
        {
            children["spf-intervals"] = spf_intervals;
        }
    }

    if(children.find("spf-periodic-intervals") == children.end())
    {
        if(spf_periodic_intervals != nullptr)
        {
            children["spf-periodic-intervals"] = spf_periodic_intervals;
        }
    }

    if(children.find("spf-prefix-priorities") == children.end())
    {
        if(spf_prefix_priorities != nullptr)
        {
            children["spf-prefix-priorities"] = spf_prefix_priorities;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
    }

    if(children.find("ucmp") == children.end())
    {
        if(ucmp != nullptr)
        {
            children["ucmp"] = ucmp;
        }
    }

    if(children.find("weights") == children.end())
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
    }
    if(value_path == "advertise-link-attributes")
    {
        advertise_link_attributes = value;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
    }
    if(value_path == "apply-weight")
    {
        apply_weight = value;
    }
    if(value_path == "attached-bit")
    {
        attached_bit = value;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
    }
    if(value_path == "ignore-attached-bit")
    {
        ignore_attached_bit = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "route-source-first-hop")
    {
        route_source_first_hop = value;
    }
    if(value_path == "single-topology")
    {
        single_topology = value;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::SegmentRouting()
    :
    mpls{YType::enumeration, "mpls"}
    	,
    prefix_sid_map(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap>())
{
    prefix_sid_map->parent = this;
    children["prefix-sid-map"] = prefix_sid_map;

    yang_name = "segment-routing"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::~SegmentRouting()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::has_data() const
{
    return mpls.is_set
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls.operation)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.operation)) leaf_name_data.push_back(mpls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map != nullptr)
        {
            children["prefix-sid-map"] = prefix_sid_map;
        }
        else
        {
            prefix_sid_map = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap>();
            prefix_sid_map->parent = this;
            children["prefix-sid-map"] = prefix_sid_map;
        }
        return children.at("prefix-sid-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::get_children()
{
    if(children.find("prefix-sid-map") == children.end())
    {
        if(prefix_sid_map != nullptr)
        {
            children["prefix-sid-map"] = prefix_sid_map;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls")
    {
        mpls = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::PrefixSidMap()
    :
    advertise_local{YType::empty, "advertise-local"},
    receive{YType::boolean, "receive"}
{
    yang_name = "prefix-sid-map"; yang_parent_name = "segment-routing";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::~PrefixSidMap()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::has_data() const
{
    return advertise_local.is_set
	|| receive.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_local.operation)
	|| is_set(receive.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSidMap' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_local.is_set || is_set(advertise_local.operation)) leaf_name_data.push_back(advertise_local.get_name_leafdata());
    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SegmentRouting::PrefixSidMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-local")
    {
        advertise_local = value;
    }
    if(value_path == "receive")
    {
        receive = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyles()
{
    yang_name = "metric-styles"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::~MetricStyles()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::has_data() const
{
    for (std::size_t index=0; index<metric_style.size(); index++)
    {
        if(metric_style[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::has_operation() const
{
    for (std::size_t index=0; index<metric_style.size(); index++)
    {
        if(metric_style[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-styles";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricStyles' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "metric-style")
    {
        for(auto const & c : metric_style)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle>();
        c->parent = this;
        metric_style.push_back(std::move(c));
        children[segment_path] = metric_style.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::get_children()
{
    for (auto const & c : metric_style)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::MetricStyle()
    :
    level{YType::enumeration, "level"},
    style{YType::enumeration, "style"},
    transition_state{YType::enumeration, "transition-state"}
{
    yang_name = "metric-style"; yang_parent_name = "metric-styles";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::~MetricStyle()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::has_data() const
{
    return level.is_set
	|| style.is_set
	|| transition_state.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(style.operation)
	|| is_set(transition_state.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-style" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricStyle' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (style.is_set || is_set(style.operation)) leaf_name_data.push_back(style.get_name_leafdata());
    if (transition_state.is_set || is_set(transition_state.operation)) leaf_name_data.push_back(transition_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MetricStyles::MetricStyle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "style")
    {
        style = value;
    }
    if(value_path == "transition-state")
    {
        transition_state = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTable()
    :
    frr_load_sharings(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings>())
	,frr_remote_lfa_prefixes(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes>())
	,frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers>())
	,frr_use_cand_onlies(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies>())
	,priority_limits(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits>())
{
    frr_load_sharings->parent = this;
    children["frr-load-sharings"] = frr_load_sharings;

    frr_remote_lfa_prefixes->parent = this;
    children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;

    frr_tiebreakers->parent = this;
    children["frr-tiebreakers"] = frr_tiebreakers;

    frr_use_cand_onlies->parent = this;
    children["frr-use-cand-onlies"] = frr_use_cand_onlies;

    priority_limits->parent = this;
    children["priority-limits"] = priority_limits;

    yang_name = "frr-table"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::~FrrTable()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::has_data() const
{
    return (frr_load_sharings !=  nullptr && frr_load_sharings->has_data())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_data())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_data())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_data())
	|| (priority_limits !=  nullptr && priority_limits->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::has_operation() const
{
    return is_set(operation)
	|| (frr_load_sharings !=  nullptr && frr_load_sharings->has_operation())
	|| (frr_remote_lfa_prefixes !=  nullptr && frr_remote_lfa_prefixes->has_operation())
	|| (frr_tiebreakers !=  nullptr && frr_tiebreakers->has_operation())
	|| (frr_use_cand_onlies !=  nullptr && frr_use_cand_onlies->has_operation())
	|| (priority_limits !=  nullptr && priority_limits->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-table";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTable' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-load-sharings")
    {
        if(frr_load_sharings != nullptr)
        {
            children["frr-load-sharings"] = frr_load_sharings;
        }
        else
        {
            frr_load_sharings = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings>();
            frr_load_sharings->parent = this;
            children["frr-load-sharings"] = frr_load_sharings;
        }
        return children.at("frr-load-sharings");
    }

    if(child_yang_name == "frr-remote-lfa-prefixes")
    {
        if(frr_remote_lfa_prefixes != nullptr)
        {
            children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
        }
        else
        {
            frr_remote_lfa_prefixes = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes>();
            frr_remote_lfa_prefixes->parent = this;
            children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
        }
        return children.at("frr-remote-lfa-prefixes");
    }

    if(child_yang_name == "frr-tiebreakers")
    {
        if(frr_tiebreakers != nullptr)
        {
            children["frr-tiebreakers"] = frr_tiebreakers;
        }
        else
        {
            frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers>();
            frr_tiebreakers->parent = this;
            children["frr-tiebreakers"] = frr_tiebreakers;
        }
        return children.at("frr-tiebreakers");
    }

    if(child_yang_name == "frr-use-cand-onlies")
    {
        if(frr_use_cand_onlies != nullptr)
        {
            children["frr-use-cand-onlies"] = frr_use_cand_onlies;
        }
        else
        {
            frr_use_cand_onlies = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies>();
            frr_use_cand_onlies->parent = this;
            children["frr-use-cand-onlies"] = frr_use_cand_onlies;
        }
        return children.at("frr-use-cand-onlies");
    }

    if(child_yang_name == "priority-limits")
    {
        if(priority_limits != nullptr)
        {
            children["priority-limits"] = priority_limits;
        }
        else
        {
            priority_limits = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits>();
            priority_limits->parent = this;
            children["priority-limits"] = priority_limits;
        }
        return children.at("priority-limits");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::get_children()
{
    if(children.find("frr-load-sharings") == children.end())
    {
        if(frr_load_sharings != nullptr)
        {
            children["frr-load-sharings"] = frr_load_sharings;
        }
    }

    if(children.find("frr-remote-lfa-prefixes") == children.end())
    {
        if(frr_remote_lfa_prefixes != nullptr)
        {
            children["frr-remote-lfa-prefixes"] = frr_remote_lfa_prefixes;
        }
    }

    if(children.find("frr-tiebreakers") == children.end())
    {
        if(frr_tiebreakers != nullptr)
        {
            children["frr-tiebreakers"] = frr_tiebreakers;
        }
    }

    if(children.find("frr-use-cand-onlies") == children.end())
    {
        if(frr_use_cand_onlies != nullptr)
        {
            children["frr-use-cand-onlies"] = frr_use_cand_onlies;
        }
    }

    if(children.find("priority-limits") == children.end())
    {
        if(priority_limits != nullptr)
        {
            children["priority-limits"] = priority_limits;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharings()
{
    yang_name = "frr-load-sharings"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::~FrrLoadSharings()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::has_data() const
{
    for (std::size_t index=0; index<frr_load_sharing.size(); index++)
    {
        if(frr_load_sharing[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::has_operation() const
{
    for (std::size_t index=0; index<frr_load_sharing.size(); index++)
    {
        if(frr_load_sharing[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharings";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLoadSharings' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-load-sharing")
    {
        for(auto const & c : frr_load_sharing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing>();
        c->parent = this;
        frr_load_sharing.push_back(std::move(c));
        children[segment_path] = frr_load_sharing.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::get_children()
{
    for (auto const & c : frr_load_sharing)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::FrrLoadSharing()
    :
    level{YType::enumeration, "level"},
    load_sharing{YType::enumeration, "load-sharing"}
{
    yang_name = "frr-load-sharing"; yang_parent_name = "frr-load-sharings";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::~FrrLoadSharing()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::has_data() const
{
    return level.is_set
	|| load_sharing.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(load_sharing.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-load-sharing" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLoadSharing' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.operation)) leaf_name_data.push_back(load_sharing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrLoadSharings::FrrLoadSharing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimits()
{
    yang_name = "priority-limits"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::~PriorityLimits()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::has_data() const
{
    for (std::size_t index=0; index<priority_limit.size(); index++)
    {
        if(priority_limit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::has_operation() const
{
    for (std::size_t index=0; index<priority_limit.size(); index++)
    {
        if(priority_limit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limits";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityLimits' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priority-limit")
    {
        for(auto const & c : priority_limit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit>();
        c->parent = this;
        priority_limit.push_back(std::move(c));
        children[segment_path] = priority_limit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::get_children()
{
    for (auto const & c : priority_limit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::PriorityLimit()
    :
    frr_type{YType::enumeration, "frr-type"},
    level{YType::enumeration, "level"},
    priority{YType::enumeration, "priority"}
{
    yang_name = "priority-limit"; yang_parent_name = "priority-limits";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::~PriorityLimit()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::has_data() const
{
    return frr_type.is_set
	|| level.is_set
	|| priority.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(level.operation)
	|| is_set(priority.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-limit" <<"[frr-type='" <<frr_type <<"']" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityLimit' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::PriorityLimits::PriorityLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefixes()
{
    yang_name = "frr-remote-lfa-prefixes"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::~FrrRemoteLfaPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_prefix.size(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_prefix.size(); index++)
    {
        if(frr_remote_lfa_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaPrefixes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-remote-lfa-prefix")
    {
        for(auto const & c : frr_remote_lfa_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix>();
        c->parent = this;
        frr_remote_lfa_prefix.push_back(std::move(c));
        children[segment_path] = frr_remote_lfa_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::get_children()
{
    for (auto const & c : frr_remote_lfa_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::FrrRemoteLfaPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_list_name{YType::str, "prefix-list-name"}
{
    yang_name = "frr-remote-lfa-prefix"; yang_parent_name = "frr-remote-lfa-prefixes";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::~FrrRemoteLfaPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_data() const
{
    return level.is_set
	|| prefix_list_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(prefix_list_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-prefix" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaPrefix' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrRemoteLfaPrefixes::FrrRemoteLfaPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreakers()
{
    yang_name = "frr-tiebreakers"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::~FrrTiebreakers()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::has_data() const
{
    for (std::size_t index=0; index<frr_tiebreaker.size(); index++)
    {
        if(frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<frr_tiebreaker.size(); index++)
    {
        if(frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreakers";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTiebreakers' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-tiebreaker")
    {
        for(auto const & c : frr_tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker>();
        c->parent = this;
        frr_tiebreaker.push_back(std::move(c));
        children[segment_path] = frr_tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::get_children()
{
    for (auto const & c : frr_tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::FrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{
    yang_name = "frr-tiebreaker"; yang_parent_name = "frr-tiebreakers";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::~FrrTiebreaker()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::has_data() const
{
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(tiebreaker.operation)
	|| is_set(index_.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tiebreaker" <<"[level='" <<level <<"']" <<"[tiebreaker='" <<tiebreaker <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTiebreaker' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrTiebreakers::FrrTiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnlies()
{
    yang_name = "frr-use-cand-onlies"; yang_parent_name = "frr-table";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::~FrrUseCandOnlies()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::has_data() const
{
    for (std::size_t index=0; index<frr_use_cand_only.size(); index++)
    {
        if(frr_use_cand_only[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::has_operation() const
{
    for (std::size_t index=0; index<frr_use_cand_only.size(); index++)
    {
        if(frr_use_cand_only[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-onlies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrUseCandOnlies' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-use-cand-only")
    {
        for(auto const & c : frr_use_cand_only)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly>();
        c->parent = this;
        frr_use_cand_only.push_back(std::move(c));
        children[segment_path] = frr_use_cand_only.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::get_children()
{
    for (auto const & c : frr_use_cand_only)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::FrrUseCandOnly()
    :
    frr_type{YType::enumeration, "frr-type"},
    level{YType::enumeration, "level"}
{
    yang_name = "frr-use-cand-only"; yang_parent_name = "frr-use-cand-onlies";
}

Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::~FrrUseCandOnly()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_data() const
{
    return frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-use-cand-only" <<"[frr-type='" <<frr_type <<"']" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrUseCandOnly' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::FrrTable::FrrUseCandOnlies::FrrUseCandOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "router-id"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterId' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriorities()
{
    yang_name = "spf-prefix-priorities"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::~SpfPrefixPriorities()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::has_data() const
{
    for (std::size_t index=0; index<spf_prefix_priority.size(); index++)
    {
        if(spf_prefix_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::has_operation() const
{
    for (std::size_t index=0; index<spf_prefix_priority.size(); index++)
    {
        if(spf_prefix_priority[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priorities";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPrefixPriorities' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-prefix-priority")
    {
        for(auto const & c : spf_prefix_priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority>();
        c->parent = this;
        spf_prefix_priority.push_back(std::move(c));
        children[segment_path] = spf_prefix_priority.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::get_children()
{
    for (auto const & c : spf_prefix_priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::SpfPrefixPriority()
    :
    level{YType::enumeration, "level"},
    prefix_priority_type{YType::enumeration, "prefix-priority-type"},
    access_list_name{YType::str, "access-list-name"},
    admin_tag{YType::uint32, "admin-tag"}
{
    yang_name = "spf-prefix-priority"; yang_parent_name = "spf-prefix-priorities";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::~SpfPrefixPriority()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::has_data() const
{
    return level.is_set
	|| prefix_priority_type.is_set
	|| access_list_name.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(prefix_priority_type.operation)
	|| is_set(access_list_name.operation)
	|| is_set(admin_tag.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-prefix-priority" <<"[level='" <<level <<"']" <<"[prefix-priority-type='" <<prefix_priority_type <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPrefixPriority' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_priority_type.is_set || is_set(prefix_priority_type.operation)) leaf_name_data.push_back(prefix_priority_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.operation)) leaf_name_data.push_back(admin_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPrefixPriorities::SpfPrefixPriority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "prefix-priority-type")
    {
        prefix_priority_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefixes()
{
    yang_name = "summary-prefixes"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(std::move(c));
        children[segment_path] = summary_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::get_children()
{
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    address_prefix{YType::str, "address-prefix"},
    level{YType::uint32, "level"},
    tag{YType::uint32, "tag"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return address_prefix.is_set
	|| level.is_set
	|| tag.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation)
	|| is_set(level.operation)
	|| is_set(tag.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::MicroLoopAvoidance()
    :
    enable{YType::enumeration, "enable"},
    rib_update_delay{YType::uint32, "rib-update-delay"}
{
    yang_name = "micro-loop-avoidance"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::~MicroLoopAvoidance()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::has_data() const
{
    return enable.is_set
	|| rib_update_delay.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(rib_update_delay.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "micro-loop-avoidance";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MicroLoopAvoidance' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MicroLoopAvoidance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Ucmp()
    :
    delay_interval{YType::uint32, "delay-interval"}
    	,
    enable(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable>())
	,exclude_interfaces(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces>())
{
    enable->parent = this;
    children["enable"] = enable;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "ucmp"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::~Ucmp()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::has_data() const
{
    return delay_interval.is_set
	|| (enable !=  nullptr && enable->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::has_operation() const
{
    return is_set(operation)
	|| is_set(delay_interval.operation)
	|| (enable !=  nullptr && enable->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucmp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ucmp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_interval.is_set || is_set(delay_interval.operation)) leaf_name_data.push_back(delay_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "enable")
    {
        if(enable != nullptr)
        {
            children["enable"] = enable;
        }
        else
        {
            enable = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable>();
            enable->parent = this;
            children["enable"] = enable;
        }
        return children.at("enable");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::get_children()
{
    if(children.find("enable") == children.end())
    {
        if(enable != nullptr)
        {
            children["enable"] = enable;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay-interval")
    {
        delay_interval = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::Enable()
    :
    prefix_list_name{YType::str, "prefix-list-name"},
    variance{YType::uint32, "variance"}
{
    yang_name = "enable"; yang_parent_name = "ucmp";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::~Enable()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::has_data() const
{
    return prefix_list_name.is_set
	|| variance.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list_name.operation)
	|| is_set(variance.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "ucmp";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ucmp::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefixes()
{
    yang_name = "max-redist-prefixes"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::~MaxRedistPrefixes()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::has_data() const
{
    for (std::size_t index=0; index<max_redist_prefix.size(); index++)
    {
        if(max_redist_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::has_operation() const
{
    for (std::size_t index=0; index<max_redist_prefix.size(); index++)
    {
        if(max_redist_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefixes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxRedistPrefixes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-redist-prefix")
    {
        for(auto const & c : max_redist_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix>();
        c->parent = this;
        max_redist_prefix.push_back(std::move(c));
        children[segment_path] = max_redist_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::get_children()
{
    for (auto const & c : max_redist_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::MaxRedistPrefix()
    :
    level{YType::enumeration, "level"},
    prefix_limit{YType::uint32, "prefix-limit"}
{
    yang_name = "max-redist-prefix"; yang_parent_name = "max-redist-prefixes";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::~MaxRedistPrefix()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::has_data() const
{
    return level.is_set
	|| prefix_limit.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(prefix_limit.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-redist-prefix" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxRedistPrefix' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (prefix_limit.is_set || is_set(prefix_limit.operation)) leaf_name_data.push_back(prefix_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MaxRedistPrefixes::MaxRedistPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "prefix-limit")
    {
        prefix_limit = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagations()
{
    yang_name = "propagations"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::~Propagations()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::has_data() const
{
    for (std::size_t index=0; index<propagation.size(); index++)
    {
        if(propagation[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::has_operation() const
{
    for (std::size_t index=0; index<propagation.size(); index++)
    {
        if(propagation[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagations";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagations' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "propagation")
    {
        for(auto const & c : propagation)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation>();
        c->parent = this;
        propagation.push_back(std::move(c));
        children[segment_path] = propagation.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::get_children()
{
    for (auto const & c : propagation)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::Propagation()
    :
    destination_level{YType::enumeration, "destination-level"},
    source_level{YType::enumeration, "source-level"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "propagation"; yang_parent_name = "propagations";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::~Propagation()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::has_data() const
{
    return destination_level.is_set
	|| source_level.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_level.operation)
	|| is_set(source_level.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagation" <<"[destination-level='" <<destination_level <<"']" <<"[source-level='" <<source_level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagation' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_level.is_set || is_set(destination_level.operation)) leaf_name_data.push_back(destination_level.get_name_leafdata());
    if (source_level.is_set || is_set(source_level.operation)) leaf_name_data.push_back(source_level.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Propagations::Propagation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-level")
    {
        destination_level = value;
    }
    if(value_path == "source-level")
    {
        source_level = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistributions()
{
    yang_name = "redistributions"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::~Redistributions()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::has_data() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::has_operation() const
{
    for (std::size_t index=0; index<redistribution.size(); index++)
    {
        if(redistribution[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributions";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistributions' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution")
    {
        for(auto const & c : redistribution)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution>();
        c->parent = this;
        redistribution.push_back(std::move(c));
        children[segment_path] = redistribution.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::get_children()
{
    for (auto const & c : redistribution)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Redistribution()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_rip_or_subscriber_or_mobile(nullptr) // presence node
{
    yang_name = "redistribution"; yang_parent_name = "redistributions";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::~Redistribution()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf_or_ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospf_or_ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (connected_or_static_or_rip_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_rip_or_subscriber_or_mobile->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp>();
        c->parent = this;
        bgp.push_back(std::move(c));
        children[segment_path] = bgp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connected-or-static-or-rip-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_rip_or_subscriber_or_mobile != nullptr)
        {
            children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
        }
        else
        {
            connected_or_static_or_rip_or_subscriber_or_mobile = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile>();
            connected_or_static_or_rip_or_subscriber_or_mobile->parent = this;
            children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
        }
        return children.at("connected-or-static-or-rip-or-subscriber-or-mobile");
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp>();
        c->parent = this;
        eigrp.push_back(std::move(c));
        children[segment_path] = eigrp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf-or-ospfv3-or-isis-or-application")
    {
        for(auto const & c : ospf_or_ospfv3_or_isis_or_application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication>();
        c->parent = this;
        ospf_or_ospfv3_or_isis_or_application.push_back(std::move(c));
        children[segment_path] = ospf_or_ospfv3_or_isis_or_application.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::get_children()
{
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connected-or-static-or-rip-or-subscriber-or-mobile") == children.end())
    {
        if(connected_or_static_or_rip_or_subscriber_or_mobile != nullptr)
        {
            children["connected-or-static-or-rip-or-subscriber-or-mobile"] = connected_or_static_or_rip_or_subscriber_or_mobile;
        }
    }

    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ospf_or_ospfv3_or_isis_or_application)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::ConnectedOrStaticOrRipOrSubscriberOrMobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "connected-or-static-or-rip-or-subscriber-or-mobile"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::~ConnectedOrStaticOrRipOrSubscriberOrMobile()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-rip-or-subscriber-or-mobile";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectedOrStaticOrRipOrSubscriberOrMobile' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::ConnectedOrStaticOrRipOrSubscriberOrMobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::OspfOrOspfv3OrIsisOrApplication()
    :
    instance_name{YType::str, "instance-name"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "ospf-or-ospfv3-or-isis-or-application"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::~OspfOrOspfv3OrIsisOrApplication()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_data() const
{
    return instance_name.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-or-ospfv3-or-isis-or-application" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfOrOspfv3OrIsisOrApplication' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::OspfOrOspfv3OrIsisOrApplication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "bgp"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::~Bgp()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::Eigrp()
    :
    as_zz{YType::uint32, "as-zz"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    ospf_route_type{YType::int32, "ospf-route-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribution";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::~Eigrp()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::has_data() const
{
    return as_zz.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| ospf_route_type.is_set
	|| route_policy_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_zz.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(ospf_route_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-zz='" <<as_zz <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_zz.is_set || is_set(as_zz.operation)) leaf_name_data.push_back(as_zz.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (ospf_route_type.is_set || is_set(ospf_route_type.operation)) leaf_name_data.push_back(ospf_route_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Redistributions::Redistribution::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-zz")
    {
        as_zz = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "ospf-route-type")
    {
        ospf_route_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicIntervals()
{
    yang_name = "spf-periodic-intervals"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::~SpfPeriodicIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::has_data() const
{
    for (std::size_t index=0; index<spf_periodic_interval.size(); index++)
    {
        if(spf_periodic_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_periodic_interval.size(); index++)
    {
        if(spf_periodic_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPeriodicIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-periodic-interval")
    {
        for(auto const & c : spf_periodic_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval>();
        c->parent = this;
        spf_periodic_interval.push_back(std::move(c));
        children[segment_path] = spf_periodic_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::get_children()
{
    for (auto const & c : spf_periodic_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::SpfPeriodicInterval()
    :
    level{YType::enumeration, "level"},
    periodic_interval{YType::uint32, "periodic-interval"}
{
    yang_name = "spf-periodic-interval"; yang_parent_name = "spf-periodic-intervals";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::~SpfPeriodicInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::has_data() const
{
    return level.is_set
	|| periodic_interval.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(periodic_interval.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-periodic-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfPeriodicInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.operation)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfPeriodicIntervals::SpfPeriodicInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfIntervals()
{
    yang_name = "spf-intervals"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::~SpfIntervals()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::has_data() const
{
    for (std::size_t index=0; index<spf_interval.size(); index++)
    {
        if(spf_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::has_operation() const
{
    for (std::size_t index=0; index<spf_interval.size(); index++)
    {
        if(spf_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spf-interval")
    {
        for(auto const & c : spf_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval>();
        c->parent = this;
        spf_interval.push_back(std::move(c));
        children[segment_path] = spf_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::get_children()
{
    for (auto const & c : spf_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::SpfInterval()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    maximum_wait{YType::uint32, "maximum-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{
    yang_name = "spf-interval"; yang_parent_name = "spf-intervals";
}

Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::~SpfInterval()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| maximum_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(initial_wait.operation)
	|| is_set(maximum_wait.operation)
	|| is_set(secondary_wait.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.operation)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.operation)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::SpfIntervals::SpfInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::MonitorConvergence()
    :
    enable{YType::empty, "enable"},
    prefix_list{YType::str, "prefix-list"},
    track_ip_frr{YType::empty, "track-ip-frr"}
{
    yang_name = "monitor-convergence"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::~MonitorConvergence()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::has_data() const
{
    return enable.is_set
	|| prefix_list.is_set
	|| track_ip_frr.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(prefix_list.operation)
	|| is_set(track_ip_frr.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-convergence";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorConvergence' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (track_ip_frr.is_set || is_set(track_ip_frr.operation)) leaf_name_data.push_back(track_ip_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MonitorConvergence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
    if(value_path == "track-ip-frr")
    {
        track_ip_frr = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::DefaultInformation()
    :
    external{YType::empty, "external"},
    policy_name{YType::str, "policy-name"},
    use_policy{YType::boolean, "use-policy"}
{
    yang_name = "default-information"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::~DefaultInformation()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::has_data() const
{
    return external.is_set
	|| policy_name.is_set
	|| use_policy.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(policy_name.operation)
	|| is_set(use_policy.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (use_policy.is_set || is_set(use_policy.operation)) leaf_name_data.push_back(use_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "use-policy")
    {
        use_policy = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistances()
{
    yang_name = "admin-distances"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::~AdminDistances()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::has_data() const
{
    for (std::size_t index=0; index<admin_distance.size(); index++)
    {
        if(admin_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::has_operation() const
{
    for (std::size_t index=0; index<admin_distance.size(); index++)
    {
        if(admin_distance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distances";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminDistances' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-distance")
    {
        for(auto const & c : admin_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance>();
        c->parent = this;
        admin_distance.push_back(std::move(c));
        children[segment_path] = admin_distance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::get_children()
{
    for (auto const & c : admin_distance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::AdminDistance()
    :
    address_prefix{YType::str, "address-prefix"},
    distance{YType::uint32, "distance"},
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "admin-distance"; yang_parent_name = "admin-distances";
}

Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::~AdminDistance()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::has_data() const
{
    return address_prefix.is_set
	|| distance.is_set
	|| prefix_list.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation)
	|| is_set(distance.operation)
	|| is_set(prefix_list.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-distance" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminDistance' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::AdminDistances::AdminDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::Ispf()
    :
    states(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States>())
{
    states->parent = this;
    children["states"] = states;

    yang_name = "ispf"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::~Ispf()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::has_data() const
{
    return (states !=  nullptr && states->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::has_operation() const
{
    return is_set(operation)
	|| (states !=  nullptr && states->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ispf";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ispf' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "states")
    {
        if(states != nullptr)
        {
            children["states"] = states;
        }
        else
        {
            states = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States>();
            states->parent = this;
            children["states"] = states;
        }
        return children.at("states");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::get_children()
{
    if(children.find("states") == children.end())
    {
        if(states != nullptr)
        {
            children["states"] = states;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::States()
{
    yang_name = "states"; yang_parent_name = "ispf";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::~States()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::has_data() const
{
    for (std::size_t index=0; index<state.size(); index++)
    {
        if(state[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::has_operation() const
{
    for (std::size_t index=0; index<state.size(); index++)
    {
        if(state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "states";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'States' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state")
    {
        for(auto const & c : state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State>();
        c->parent = this;
        state.push_back(std::move(c));
        children[segment_path] = state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::get_children()
{
    for (auto const & c : state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::State()
    :
    level{YType::enumeration, "level"},
    state{YType::enumeration, "state"}
{
    yang_name = "state"; yang_parent_name = "states";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::~State()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::has_data() const
{
    return level.is_set
	|| state.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(state.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'State' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Ispf::States::State::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::MplsLdpGlobal()
    :
    auto_config{YType::boolean, "auto-config"}
{
    yang_name = "mpls-ldp-global"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::~MplsLdpGlobal()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::has_data() const
{
    return auto_config.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_config.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp-global";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsLdpGlobal' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.operation)) leaf_name_data.push_back(auto_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::MplsLdpGlobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::Mpls()
    :
    igp_intact{YType::empty, "igp-intact"},
    level{YType::enumeration, "level"},
    multicast_intact{YType::empty, "multicast-intact"}
    	,
    router_id(std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId>())
{
    router_id->parent = this;
    children["router-id"] = router_id;

    yang_name = "mpls"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::~Mpls()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::has_data() const
{
    return igp_intact.is_set
	|| level.is_set
	|| multicast_intact.is_set
	|| (router_id !=  nullptr && router_id->has_data());
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_intact.operation)
	|| is_set(level.operation)
	|| is_set(multicast_intact.operation)
	|| (router_id !=  nullptr && router_id->has_operation());
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_intact.is_set || is_set(igp_intact.operation)) leaf_name_data.push_back(igp_intact.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (multicast_intact.is_set || is_set(multicast_intact.operation)) leaf_name_data.push_back(multicast_intact.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "router-id")
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
        else
        {
            router_id = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId>();
            router_id->parent = this;
            children["router-id"] = router_id;
        }
        return children.at("router-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::get_children()
{
    if(children.find("router-id") == children.end())
    {
        if(router_id != nullptr)
        {
            children["router-id"] = router_id;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-intact")
    {
        igp_intact = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "multicast-intact")
    {
        multicast_intact = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::RouterId()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "router-id"; yang_parent_name = "mpls";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::~RouterId()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::has_data() const
{
    return address.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouterId' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Mpls::RouterId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metrics()
{
    yang_name = "metrics"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::get_children()
{
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{
    yang_name = "metric"; yang_parent_name = "metrics";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(metric.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weights()
{
    yang_name = "weights"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::has_data() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weights' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "weight")
    {
        for(auto const & c : weight)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight>();
        c->parent = this;
        weight.push_back(std::move(c));
        children[segment_path] = weight.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Weights::get_children()
{
    for (auto const & c : weight)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Weights::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{
    yang_name = "weight"; yang_parent_name = "weights";
}

Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::has_data() const
{
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::get_children()
{
    return children;
}

void Isis::Instances::Instance::Afs::Af::TopologyName::Weights::Weight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshIntervals()
{
    yang_name = "lsp-refresh-intervals"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspRefreshIntervals::~LspRefreshIntervals()
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_refresh_interval.size(); index++)
    {
        if(lsp_refresh_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_refresh_interval.size(); index++)
    {
        if(lsp_refresh_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspRefreshIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-refresh-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspRefreshIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRefreshIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspRefreshIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-refresh-interval")
    {
        for(auto const & c : lsp_refresh_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval>();
        c->parent = this;
        lsp_refresh_interval.push_back(std::move(c));
        children[segment_path] = lsp_refresh_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspRefreshIntervals::get_children()
{
    for (auto const & c : lsp_refresh_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspRefreshIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::LspRefreshInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "lsp-refresh-interval"; yang_parent_name = "lsp-refresh-intervals";
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::~LspRefreshInterval()
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-refresh-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRefreshInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::Distribute::Distribute()
    :
    dist_inst_id{YType::uint32, "dist-inst-id"},
    dist_throttle{YType::uint32, "dist-throttle"},
    level{YType::enumeration, "level"}
{
    yang_name = "distribute"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Distribute::~Distribute()
{
}

bool Isis::Instances::Instance::Distribute::has_data() const
{
    return dist_inst_id.is_set
	|| dist_throttle.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Distribute::has_operation() const
{
    return is_set(operation)
	|| is_set(dist_inst_id.operation)
	|| is_set(dist_throttle.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Distribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distribute' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_inst_id.is_set || is_set(dist_inst_id.operation)) leaf_name_data.push_back(dist_inst_id.get_name_leafdata());
    if (dist_throttle.is_set || is_set(dist_throttle.operation)) leaf_name_data.push_back(dist_throttle.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Distribute::get_children()
{
    return children;
}

void Isis::Instances::Instance::Distribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dist-inst-id")
    {
        dist_inst_id = value;
    }
    if(value_path == "dist-throttle")
    {
        dist_throttle = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPasswords()
{
    yang_name = "lsp-accept-passwords"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspAcceptPasswords::~LspAcceptPasswords()
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_data() const
{
    for (std::size_t index=0; index<lsp_accept_password.size(); index++)
    {
        if(lsp_accept_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_operation() const
{
    for (std::size_t index=0; index<lsp_accept_password.size(); index++)
    {
        if(lsp_accept_password[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspAcceptPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-accept-passwords";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspAcceptPasswords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspAcceptPasswords' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspAcceptPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-accept-password")
    {
        for(auto const & c : lsp_accept_password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword>();
        c->parent = this;
        lsp_accept_password.push_back(std::move(c));
        children[segment_path] = lsp_accept_password.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspAcceptPasswords::get_children()
{
    for (auto const & c : lsp_accept_password)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspAcceptPasswords::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::LspAcceptPassword()
    :
    level{YType::enumeration, "level"},
    password{YType::str, "password"}
{
    yang_name = "lsp-accept-password"; yang_parent_name = "lsp-accept-passwords";
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::~LspAcceptPassword()
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_data() const
{
    return level.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(password.operation);
}

std::string Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-accept-password" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspAcceptPassword' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Isis::Instances::Instance::LspMtus::LspMtus()
{
    yang_name = "lsp-mtus"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspMtus::~LspMtus()
{
}

bool Isis::Instances::Instance::LspMtus::has_data() const
{
    for (std::size_t index=0; index<lsp_mtu.size(); index++)
    {
        if(lsp_mtu[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspMtus::has_operation() const
{
    for (std::size_t index=0; index<lsp_mtu.size(); index++)
    {
        if(lsp_mtu[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspMtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-mtus";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspMtus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspMtus' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspMtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-mtu")
    {
        for(auto const & c : lsp_mtu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspMtus::LspMtu>();
        c->parent = this;
        lsp_mtu.push_back(std::move(c));
        children[segment_path] = lsp_mtu.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspMtus::get_children()
{
    for (auto const & c : lsp_mtu)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspMtus::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspMtus::LspMtu::LspMtu()
    :
    level{YType::enumeration, "level"},
    mtu{YType::uint32, "mtu"}
{
    yang_name = "lsp-mtu"; yang_parent_name = "lsp-mtus";
}

Isis::Instances::Instance::LspMtus::LspMtu::~LspMtu()
{
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_data() const
{
    return level.is_set
	|| mtu.is_set;
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(mtu.operation);
}

std::string Isis::Instances::Instance::LspMtus::LspMtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-mtu" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspMtus::LspMtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspMtu' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspMtus::LspMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspMtus::LspMtu::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspMtus::LspMtu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Isis::Instances::Instance::Nsf::Nsf()
    :
    flavor{YType::enumeration, "flavor"},
    interface_timer{YType::uint32, "interface-timer"},
    lifetime{YType::uint32, "lifetime"},
    max_interface_timer_expiry{YType::uint32, "max-interface-timer-expiry"}
{
    yang_name = "nsf"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Nsf::~Nsf()
{
}

bool Isis::Instances::Instance::Nsf::has_data() const
{
    return flavor.is_set
	|| interface_timer.is_set
	|| lifetime.is_set
	|| max_interface_timer_expiry.is_set;
}

bool Isis::Instances::Instance::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(flavor.operation)
	|| is_set(interface_timer.operation)
	|| is_set(lifetime.operation)
	|| is_set(max_interface_timer_expiry.operation);
}

std::string Isis::Instances::Instance::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flavor.is_set || is_set(flavor.operation)) leaf_name_data.push_back(flavor.get_name_leafdata());
    if (interface_timer.is_set || is_set(interface_timer.operation)) leaf_name_data.push_back(interface_timer.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (max_interface_timer_expiry.is_set || is_set(max_interface_timer_expiry.operation)) leaf_name_data.push_back(max_interface_timer_expiry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Nsf::get_children()
{
    return children;
}

void Isis::Instances::Instance::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flavor")
    {
        flavor = value;
    }
    if(value_path == "interface-timer")
    {
        interface_timer = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
    if(value_path == "max-interface-timer-expiry")
    {
        max_interface_timer_expiry = value;
    }
}

Isis::Instances::Instance::LinkGroups::LinkGroups()
{
    yang_name = "link-groups"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LinkGroups::~LinkGroups()
{
}

bool Isis::Instances::Instance::LinkGroups::has_data() const
{
    for (std::size_t index=0; index<link_group.size(); index++)
    {
        if(link_group[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LinkGroups::has_operation() const
{
    for (std::size_t index=0; index<link_group.size(); index++)
    {
        if(link_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LinkGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-groups";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LinkGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkGroups' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LinkGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-group")
    {
        for(auto const & c : link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LinkGroups::LinkGroup>();
        c->parent = this;
        link_group.push_back(std::move(c));
        children[segment_path] = link_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LinkGroups::get_children()
{
    for (auto const & c : link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LinkGroups::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LinkGroups::LinkGroup::LinkGroup()
    :
    link_group_name{YType::str, "link-group-name"},
    enable{YType::empty, "enable"},
    metric_offset{YType::uint32, "metric-offset"},
    minimum_members{YType::uint32, "minimum-members"},
    revert_members{YType::uint32, "revert-members"}
{
    yang_name = "link-group"; yang_parent_name = "link-groups";
}

Isis::Instances::Instance::LinkGroups::LinkGroup::~LinkGroup()
{
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_data() const
{
    return link_group_name.is_set
	|| enable.is_set
	|| metric_offset.is_set
	|| minimum_members.is_set
	|| revert_members.is_set;
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(link_group_name.operation)
	|| is_set(enable.operation)
	|| is_set(metric_offset.operation)
	|| is_set(minimum_members.operation)
	|| is_set(revert_members.operation);
}

std::string Isis::Instances::Instance::LinkGroups::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group" <<"[link-group-name='" <<link_group_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LinkGroups::LinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkGroup' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_group_name.is_set || is_set(link_group_name.operation)) leaf_name_data.push_back(link_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (metric_offset.is_set || is_set(metric_offset.operation)) leaf_name_data.push_back(metric_offset.get_name_leafdata());
    if (minimum_members.is_set || is_set(minimum_members.operation)) leaf_name_data.push_back(minimum_members.get_name_leafdata());
    if (revert_members.is_set || is_set(revert_members.operation)) leaf_name_data.push_back(revert_members.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LinkGroups::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LinkGroups::LinkGroup::get_children()
{
    return children;
}

void Isis::Instances::Instance::LinkGroups::LinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-group-name")
    {
        link_group_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "metric-offset")
    {
        metric_offset = value;
    }
    if(value_path == "minimum-members")
    {
        minimum_members = value;
    }
    if(value_path == "revert-members")
    {
        revert_members = value;
    }
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckIntervals()
{
    yang_name = "lsp-check-intervals"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspCheckIntervals::~LspCheckIntervals()
{
}

bool Isis::Instances::Instance::LspCheckIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_check_interval.size(); index++)
    {
        if(lsp_check_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspCheckIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_check_interval.size(); index++)
    {
        if(lsp_check_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspCheckIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-check-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspCheckIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspCheckIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspCheckIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-check-interval")
    {
        for(auto const & c : lsp_check_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval>();
        c->parent = this;
        lsp_check_interval.push_back(std::move(c));
        children[segment_path] = lsp_check_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspCheckIntervals::get_children()
{
    for (auto const & c : lsp_check_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspCheckIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::LspCheckInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "lsp-check-interval"; yang_parent_name = "lsp-check-intervals";
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::~LspCheckInterval()
{
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-check-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspCheckInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::LspPasswords::LspPasswords()
{
    yang_name = "lsp-passwords"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspPasswords::~LspPasswords()
{
}

bool Isis::Instances::Instance::LspPasswords::has_data() const
{
    for (std::size_t index=0; index<lsp_password.size(); index++)
    {
        if(lsp_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspPasswords::has_operation() const
{
    for (std::size_t index=0; index<lsp_password.size(); index++)
    {
        if(lsp_password[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-passwords";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspPasswords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspPasswords' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-password")
    {
        for(auto const & c : lsp_password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspPasswords::LspPassword>();
        c->parent = this;
        lsp_password.push_back(std::move(c));
        children[segment_path] = lsp_password.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspPasswords::get_children()
{
    for (auto const & c : lsp_password)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspPasswords::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspPasswords::LspPassword::LspPassword()
    :
    level{YType::enumeration, "level"},
    algorithm{YType::enumeration, "algorithm"},
    authentication_type{YType::enumeration, "authentication-type"},
    failure_mode{YType::enumeration, "failure-mode"},
    password{YType::str, "password"}
{
    yang_name = "lsp-password"; yang_parent_name = "lsp-passwords";
}

Isis::Instances::Instance::LspPasswords::LspPassword::~LspPassword()
{
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_data() const
{
    return level.is_set
	|| algorithm.is_set
	|| authentication_type.is_set
	|| failure_mode.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(algorithm.operation)
	|| is_set(authentication_type.operation)
	|| is_set(failure_mode.operation)
	|| is_set(password.operation);
}

std::string Isis::Instances::Instance::LspPasswords::LspPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-password" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspPasswords::LspPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspPassword' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (failure_mode.is_set || is_set(failure_mode.operation)) leaf_name_data.push_back(failure_mode.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspPasswords::LspPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspPasswords::LspPassword::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspPasswords::LspPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
    if(value_path == "failure-mode")
    {
        failure_mode = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Isis::Instances::Instance::Nets::Nets()
{
    yang_name = "nets"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Nets::~Nets()
{
}

bool Isis::Instances::Instance::Nets::has_data() const
{
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Nets::has_operation() const
{
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Nets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nets";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Nets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nets' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Nets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "net")
    {
        for(auto const & c : net)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Nets::Net>();
        c->parent = this;
        net.push_back(std::move(c));
        children[segment_path] = net.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Nets::get_children()
{
    for (auto const & c : net)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Nets::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Nets::Net::Net()
    :
    net_name{YType::str, "net-name"}
{
    yang_name = "net"; yang_parent_name = "nets";
}

Isis::Instances::Instance::Nets::Net::~Net()
{
}

bool Isis::Instances::Instance::Nets::Net::has_data() const
{
    return net_name.is_set;
}

bool Isis::Instances::Instance::Nets::Net::has_operation() const
{
    return is_set(operation)
	|| is_set(net_name.operation);
}

std::string Isis::Instances::Instance::Nets::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net" <<"[net-name='" <<net_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Nets::Net::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Net' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net_name.is_set || is_set(net_name.operation)) leaf_name_data.push_back(net_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Nets::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Nets::Net::get_children()
{
    return children;
}

void Isis::Instances::Instance::Nets::Net::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "net-name")
    {
        net_name = value;
    }
}

Isis::Instances::Instance::LspLifetimes::LspLifetimes()
{
    yang_name = "lsp-lifetimes"; yang_parent_name = "instance";
}

Isis::Instances::Instance::LspLifetimes::~LspLifetimes()
{
}

bool Isis::Instances::Instance::LspLifetimes::has_data() const
{
    for (std::size_t index=0; index<lsp_lifetime.size(); index++)
    {
        if(lsp_lifetime[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspLifetimes::has_operation() const
{
    for (std::size_t index=0; index<lsp_lifetime.size(); index++)
    {
        if(lsp_lifetime[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::LspLifetimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-lifetimes";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspLifetimes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspLifetimes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspLifetimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-lifetime")
    {
        for(auto const & c : lsp_lifetime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspLifetimes::LspLifetime>();
        c->parent = this;
        lsp_lifetime.push_back(std::move(c));
        children[segment_path] = lsp_lifetime.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspLifetimes::get_children()
{
    for (auto const & c : lsp_lifetime)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::LspLifetimes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::LspLifetimes::LspLifetime::LspLifetime()
    :
    level{YType::enumeration, "level"},
    lifetime{YType::uint32, "lifetime"}
{
    yang_name = "lsp-lifetime"; yang_parent_name = "lsp-lifetimes";
}

Isis::Instances::Instance::LspLifetimes::LspLifetime::~LspLifetime()
{
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_data() const
{
    return level.is_set
	|| lifetime.is_set;
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(lifetime.operation);
}

std::string Isis::Instances::Instance::LspLifetimes::LspLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-lifetime" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::LspLifetimes::LspLifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspLifetime' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspLifetimes::LspLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::LspLifetimes::LspLifetime::get_children()
{
    return children;
}

void Isis::Instances::Instance::LspLifetimes::LspLifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
}

Isis::Instances::Instance::OverloadBits::OverloadBits()
{
    yang_name = "overload-bits"; yang_parent_name = "instance";
}

Isis::Instances::Instance::OverloadBits::~OverloadBits()
{
}

bool Isis::Instances::Instance::OverloadBits::has_data() const
{
    for (std::size_t index=0; index<overload_bit.size(); index++)
    {
        if(overload_bit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::OverloadBits::has_operation() const
{
    for (std::size_t index=0; index<overload_bit.size(); index++)
    {
        if(overload_bit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::OverloadBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bits";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::OverloadBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OverloadBits' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::OverloadBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "overload-bit")
    {
        for(auto const & c : overload_bit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::OverloadBits::OverloadBit>();
        c->parent = this;
        overload_bit.push_back(std::move(c));
        children[segment_path] = overload_bit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::OverloadBits::get_children()
{
    for (auto const & c : overload_bit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::OverloadBits::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::OverloadBits::OverloadBit::OverloadBit()
    :
    level{YType::enumeration, "level"},
    external_adv_type{YType::enumeration, "external-adv-type"},
    hippity_period{YType::uint32, "hippity-period"},
    inter_level_adv_type{YType::enumeration, "inter-level-adv-type"},
    overload_bit_mode{YType::enumeration, "overload-bit-mode"}
{
    yang_name = "overload-bit"; yang_parent_name = "overload-bits";
}

Isis::Instances::Instance::OverloadBits::OverloadBit::~OverloadBit()
{
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_data() const
{
    return level.is_set
	|| external_adv_type.is_set
	|| hippity_period.is_set
	|| inter_level_adv_type.is_set
	|| overload_bit_mode.is_set;
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(external_adv_type.operation)
	|| is_set(hippity_period.operation)
	|| is_set(inter_level_adv_type.operation)
	|| is_set(overload_bit_mode.operation);
}

std::string Isis::Instances::Instance::OverloadBits::OverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bit" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::OverloadBits::OverloadBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OverloadBit' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (external_adv_type.is_set || is_set(external_adv_type.operation)) leaf_name_data.push_back(external_adv_type.get_name_leafdata());
    if (hippity_period.is_set || is_set(hippity_period.operation)) leaf_name_data.push_back(hippity_period.get_name_leafdata());
    if (inter_level_adv_type.is_set || is_set(inter_level_adv_type.operation)) leaf_name_data.push_back(inter_level_adv_type.get_name_leafdata());
    if (overload_bit_mode.is_set || is_set(overload_bit_mode.operation)) leaf_name_data.push_back(overload_bit_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::OverloadBits::OverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::OverloadBits::OverloadBit::get_children()
{
    return children;
}

void Isis::Instances::Instance::OverloadBits::OverloadBit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "external-adv-type")
    {
        external_adv_type = value;
    }
    if(value_path == "hippity-period")
    {
        hippity_period = value;
    }
    if(value_path == "inter-level-adv-type")
    {
        inter_level_adv_type = value;
    }
    if(value_path == "overload-bit-mode")
    {
        overload_bit_mode = value;
    }
}

Isis::Instances::Instance::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Interfaces::~Interfaces()
{
}

bool Isis::Instances::Instance::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    circuit_type{YType::enumeration, "circuit-type"},
    link_down_fast_detect{YType::empty, "link-down-fast-detect"},
    mesh_group{YType::str, "mesh-group"},
    point_to_point{YType::empty, "point-to-point"},
    running{YType::empty, "running"},
    state{YType::enumeration, "state"}
    	,
    bfd(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Bfd>())
	,csnp_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals>())
	,hello_accept_passwords(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords>())
	,hello_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloIntervals>())
	,hello_multipliers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers>())
	,hello_paddings(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPaddings>())
	,hello_passwords(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPasswords>())
	,interface_afs(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs>())
	,lsp_fast_flood_thresholds(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds>())
	,lsp_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals>())
	,lsp_retransmit_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals>())
	,lsp_retransmit_throttle_intervals(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals>())
	,prefix_attribute_n_flag_clears(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears>())
	,priorities(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities>())
{
    bfd->parent = this;
    children["bfd"] = bfd;

    csnp_intervals->parent = this;
    children["csnp-intervals"] = csnp_intervals;

    hello_accept_passwords->parent = this;
    children["hello-accept-passwords"] = hello_accept_passwords;

    hello_intervals->parent = this;
    children["hello-intervals"] = hello_intervals;

    hello_multipliers->parent = this;
    children["hello-multipliers"] = hello_multipliers;

    hello_paddings->parent = this;
    children["hello-paddings"] = hello_paddings;

    hello_passwords->parent = this;
    children["hello-passwords"] = hello_passwords;

    interface_afs->parent = this;
    children["interface-afs"] = interface_afs;

    lsp_fast_flood_thresholds->parent = this;
    children["lsp-fast-flood-thresholds"] = lsp_fast_flood_thresholds;

    lsp_intervals->parent = this;
    children["lsp-intervals"] = lsp_intervals;

    lsp_retransmit_intervals->parent = this;
    children["lsp-retransmit-intervals"] = lsp_retransmit_intervals;

    lsp_retransmit_throttle_intervals->parent = this;
    children["lsp-retransmit-throttle-intervals"] = lsp_retransmit_throttle_intervals;

    prefix_attribute_n_flag_clears->parent = this;
    children["prefix-attribute-n-flag-clears"] = prefix_attribute_n_flag_clears;

    priorities->parent = this;
    children["priorities"] = priorities;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Isis::Instances::Instance::Interfaces::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| circuit_type.is_set
	|| link_down_fast_detect.is_set
	|| mesh_group.is_set
	|| point_to_point.is_set
	|| running.is_set
	|| state.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (csnp_intervals !=  nullptr && csnp_intervals->has_data())
	|| (hello_accept_passwords !=  nullptr && hello_accept_passwords->has_data())
	|| (hello_intervals !=  nullptr && hello_intervals->has_data())
	|| (hello_multipliers !=  nullptr && hello_multipliers->has_data())
	|| (hello_paddings !=  nullptr && hello_paddings->has_data())
	|| (hello_passwords !=  nullptr && hello_passwords->has_data())
	|| (interface_afs !=  nullptr && interface_afs->has_data())
	|| (lsp_fast_flood_thresholds !=  nullptr && lsp_fast_flood_thresholds->has_data())
	|| (lsp_intervals !=  nullptr && lsp_intervals->has_data())
	|| (lsp_retransmit_intervals !=  nullptr && lsp_retransmit_intervals->has_data())
	|| (lsp_retransmit_throttle_intervals !=  nullptr && lsp_retransmit_throttle_intervals->has_data())
	|| (prefix_attribute_n_flag_clears !=  nullptr && prefix_attribute_n_flag_clears->has_data())
	|| (priorities !=  nullptr && priorities->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(circuit_type.operation)
	|| is_set(link_down_fast_detect.operation)
	|| is_set(mesh_group.operation)
	|| is_set(point_to_point.operation)
	|| is_set(running.operation)
	|| is_set(state.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (csnp_intervals !=  nullptr && csnp_intervals->has_operation())
	|| (hello_accept_passwords !=  nullptr && hello_accept_passwords->has_operation())
	|| (hello_intervals !=  nullptr && hello_intervals->has_operation())
	|| (hello_multipliers !=  nullptr && hello_multipliers->has_operation())
	|| (hello_paddings !=  nullptr && hello_paddings->has_operation())
	|| (hello_passwords !=  nullptr && hello_passwords->has_operation())
	|| (interface_afs !=  nullptr && interface_afs->has_operation())
	|| (lsp_fast_flood_thresholds !=  nullptr && lsp_fast_flood_thresholds->has_operation())
	|| (lsp_intervals !=  nullptr && lsp_intervals->has_operation())
	|| (lsp_retransmit_intervals !=  nullptr && lsp_retransmit_intervals->has_operation())
	|| (lsp_retransmit_throttle_intervals !=  nullptr && lsp_retransmit_throttle_intervals->has_operation())
	|| (prefix_attribute_n_flag_clears !=  nullptr && prefix_attribute_n_flag_clears->has_operation())
	|| (priorities !=  nullptr && priorities->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (circuit_type.is_set || is_set(circuit_type.operation)) leaf_name_data.push_back(circuit_type.get_name_leafdata());
    if (link_down_fast_detect.is_set || is_set(link_down_fast_detect.operation)) leaf_name_data.push_back(link_down_fast_detect.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "csnp-intervals")
    {
        if(csnp_intervals != nullptr)
        {
            children["csnp-intervals"] = csnp_intervals;
        }
        else
        {
            csnp_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals>();
            csnp_intervals->parent = this;
            children["csnp-intervals"] = csnp_intervals;
        }
        return children.at("csnp-intervals");
    }

    if(child_yang_name == "hello-accept-passwords")
    {
        if(hello_accept_passwords != nullptr)
        {
            children["hello-accept-passwords"] = hello_accept_passwords;
        }
        else
        {
            hello_accept_passwords = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords>();
            hello_accept_passwords->parent = this;
            children["hello-accept-passwords"] = hello_accept_passwords;
        }
        return children.at("hello-accept-passwords");
    }

    if(child_yang_name == "hello-intervals")
    {
        if(hello_intervals != nullptr)
        {
            children["hello-intervals"] = hello_intervals;
        }
        else
        {
            hello_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloIntervals>();
            hello_intervals->parent = this;
            children["hello-intervals"] = hello_intervals;
        }
        return children.at("hello-intervals");
    }

    if(child_yang_name == "hello-multipliers")
    {
        if(hello_multipliers != nullptr)
        {
            children["hello-multipliers"] = hello_multipliers;
        }
        else
        {
            hello_multipliers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers>();
            hello_multipliers->parent = this;
            children["hello-multipliers"] = hello_multipliers;
        }
        return children.at("hello-multipliers");
    }

    if(child_yang_name == "hello-paddings")
    {
        if(hello_paddings != nullptr)
        {
            children["hello-paddings"] = hello_paddings;
        }
        else
        {
            hello_paddings = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPaddings>();
            hello_paddings->parent = this;
            children["hello-paddings"] = hello_paddings;
        }
        return children.at("hello-paddings");
    }

    if(child_yang_name == "hello-passwords")
    {
        if(hello_passwords != nullptr)
        {
            children["hello-passwords"] = hello_passwords;
        }
        else
        {
            hello_passwords = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPasswords>();
            hello_passwords->parent = this;
            children["hello-passwords"] = hello_passwords;
        }
        return children.at("hello-passwords");
    }

    if(child_yang_name == "interface-afs")
    {
        if(interface_afs != nullptr)
        {
            children["interface-afs"] = interface_afs;
        }
        else
        {
            interface_afs = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs>();
            interface_afs->parent = this;
            children["interface-afs"] = interface_afs;
        }
        return children.at("interface-afs");
    }

    if(child_yang_name == "lsp-fast-flood-thresholds")
    {
        if(lsp_fast_flood_thresholds != nullptr)
        {
            children["lsp-fast-flood-thresholds"] = lsp_fast_flood_thresholds;
        }
        else
        {
            lsp_fast_flood_thresholds = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds>();
            lsp_fast_flood_thresholds->parent = this;
            children["lsp-fast-flood-thresholds"] = lsp_fast_flood_thresholds;
        }
        return children.at("lsp-fast-flood-thresholds");
    }

    if(child_yang_name == "lsp-intervals")
    {
        if(lsp_intervals != nullptr)
        {
            children["lsp-intervals"] = lsp_intervals;
        }
        else
        {
            lsp_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals>();
            lsp_intervals->parent = this;
            children["lsp-intervals"] = lsp_intervals;
        }
        return children.at("lsp-intervals");
    }

    if(child_yang_name == "lsp-retransmit-intervals")
    {
        if(lsp_retransmit_intervals != nullptr)
        {
            children["lsp-retransmit-intervals"] = lsp_retransmit_intervals;
        }
        else
        {
            lsp_retransmit_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals>();
            lsp_retransmit_intervals->parent = this;
            children["lsp-retransmit-intervals"] = lsp_retransmit_intervals;
        }
        return children.at("lsp-retransmit-intervals");
    }

    if(child_yang_name == "lsp-retransmit-throttle-intervals")
    {
        if(lsp_retransmit_throttle_intervals != nullptr)
        {
            children["lsp-retransmit-throttle-intervals"] = lsp_retransmit_throttle_intervals;
        }
        else
        {
            lsp_retransmit_throttle_intervals = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals>();
            lsp_retransmit_throttle_intervals->parent = this;
            children["lsp-retransmit-throttle-intervals"] = lsp_retransmit_throttle_intervals;
        }
        return children.at("lsp-retransmit-throttle-intervals");
    }

    if(child_yang_name == "prefix-attribute-n-flag-clears")
    {
        if(prefix_attribute_n_flag_clears != nullptr)
        {
            children["prefix-attribute-n-flag-clears"] = prefix_attribute_n_flag_clears;
        }
        else
        {
            prefix_attribute_n_flag_clears = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears>();
            prefix_attribute_n_flag_clears->parent = this;
            children["prefix-attribute-n-flag-clears"] = prefix_attribute_n_flag_clears;
        }
        return children.at("prefix-attribute-n-flag-clears");
    }

    if(child_yang_name == "priorities")
    {
        if(priorities != nullptr)
        {
            children["priorities"] = priorities;
        }
        else
        {
            priorities = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities>();
            priorities->parent = this;
            children["priorities"] = priorities;
        }
        return children.at("priorities");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::get_children()
{
    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("csnp-intervals") == children.end())
    {
        if(csnp_intervals != nullptr)
        {
            children["csnp-intervals"] = csnp_intervals;
        }
    }

    if(children.find("hello-accept-passwords") == children.end())
    {
        if(hello_accept_passwords != nullptr)
        {
            children["hello-accept-passwords"] = hello_accept_passwords;
        }
    }

    if(children.find("hello-intervals") == children.end())
    {
        if(hello_intervals != nullptr)
        {
            children["hello-intervals"] = hello_intervals;
        }
    }

    if(children.find("hello-multipliers") == children.end())
    {
        if(hello_multipliers != nullptr)
        {
            children["hello-multipliers"] = hello_multipliers;
        }
    }

    if(children.find("hello-paddings") == children.end())
    {
        if(hello_paddings != nullptr)
        {
            children["hello-paddings"] = hello_paddings;
        }
    }

    if(children.find("hello-passwords") == children.end())
    {
        if(hello_passwords != nullptr)
        {
            children["hello-passwords"] = hello_passwords;
        }
    }

    if(children.find("interface-afs") == children.end())
    {
        if(interface_afs != nullptr)
        {
            children["interface-afs"] = interface_afs;
        }
    }

    if(children.find("lsp-fast-flood-thresholds") == children.end())
    {
        if(lsp_fast_flood_thresholds != nullptr)
        {
            children["lsp-fast-flood-thresholds"] = lsp_fast_flood_thresholds;
        }
    }

    if(children.find("lsp-intervals") == children.end())
    {
        if(lsp_intervals != nullptr)
        {
            children["lsp-intervals"] = lsp_intervals;
        }
    }

    if(children.find("lsp-retransmit-intervals") == children.end())
    {
        if(lsp_retransmit_intervals != nullptr)
        {
            children["lsp-retransmit-intervals"] = lsp_retransmit_intervals;
        }
    }

    if(children.find("lsp-retransmit-throttle-intervals") == children.end())
    {
        if(lsp_retransmit_throttle_intervals != nullptr)
        {
            children["lsp-retransmit-throttle-intervals"] = lsp_retransmit_throttle_intervals;
        }
    }

    if(children.find("prefix-attribute-n-flag-clears") == children.end())
    {
        if(prefix_attribute_n_flag_clears != nullptr)
        {
            children["prefix-attribute-n-flag-clears"] = prefix_attribute_n_flag_clears;
        }
    }

    if(children.find("priorities") == children.end())
    {
        if(priorities != nullptr)
        {
            children["priorities"] = priorities;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "circuit-type")
    {
        circuit_type = value;
    }
    if(value_path == "link-down-fast-detect")
    {
        link_down_fast_detect = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleIntervals()
{
    yang_name = "lsp-retransmit-throttle-intervals"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::~LspRetransmitThrottleIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_retransmit_throttle_interval.size(); index++)
    {
        if(lsp_retransmit_throttle_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_retransmit_throttle_interval.size(); index++)
    {
        if(lsp_retransmit_throttle_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-throttle-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRetransmitThrottleIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-retransmit-throttle-interval")
    {
        for(auto const & c : lsp_retransmit_throttle_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval>();
        c->parent = this;
        lsp_retransmit_throttle_interval.push_back(std::move(c));
        children[segment_path] = lsp_retransmit_throttle_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_children()
{
    for (auto const & c : lsp_retransmit_throttle_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::LspRetransmitThrottleInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "lsp-retransmit-throttle-interval"; yang_parent_name = "lsp-retransmit-throttle-intervals";
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::~LspRetransmitThrottleInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-throttle-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRetransmitThrottleInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitIntervals()
{
    yang_name = "lsp-retransmit-intervals"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::~LspRetransmitIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_retransmit_interval.size(); index++)
    {
        if(lsp_retransmit_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_retransmit_interval.size(); index++)
    {
        if(lsp_retransmit_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRetransmitIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-retransmit-interval")
    {
        for(auto const & c : lsp_retransmit_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval>();
        c->parent = this;
        lsp_retransmit_interval.push_back(std::move(c));
        children[segment_path] = lsp_retransmit_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_children()
{
    for (auto const & c : lsp_retransmit_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::LspRetransmitInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "lsp-retransmit-interval"; yang_parent_name = "lsp-retransmit-intervals";
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::~LspRetransmitInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRetransmitInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable_ipv4{YType::boolean, "enable-ipv4"},
    enable_ipv6{YType::boolean, "enable-ipv6"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| enable_ipv4.is_set
	|| enable_ipv6.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(enable_ipv4.operation)
	|| is_set(enable_ipv6.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable_ipv4.is_set || is_set(enable_ipv4.operation)) leaf_name_data.push_back(enable_ipv4.get_name_leafdata());
    if (enable_ipv6.is_set || is_set(enable_ipv6.operation)) leaf_name_data.push_back(enable_ipv6.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "enable-ipv4")
    {
        enable_ipv4 = value;
    }
    if(value_path == "enable-ipv6")
    {
        enable_ipv6 = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priorities()
{
    yang_name = "priorities"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::~Priorities()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Priorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorities";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::Priorities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priorities' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::Priorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority>();
        c->parent = this;
        priority.push_back(std::move(c));
        children[segment_path] = priority.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::Priorities::get_children()
{
    for (auto const & c : priority)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf IsisSnpAuthEnum::send_only {0, "send-only"};
const Enum::YLeaf IsisSnpAuthEnum::full {1, "full"};

const Enum::YLeaf IsisMibMaxAreaAddressMismatchBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibMaxAreaAddressMismatchBooleanEnum::true_ {6, "true"};

const Enum::YLeaf IsisMibLspTooLargeToPropagateBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibLspTooLargeToPropagateBooleanEnum::true_ {14, "true"};

const Enum::YLeaf IsisMibSequenceNumberSkipBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibSequenceNumberSkipBooleanEnum::true_ {8, "true"};

const Enum::YLeaf IsisInterfaceFrrTiebreakerEnum::node_protecting {3, "node-protecting"};
const Enum::YLeaf IsisInterfaceFrrTiebreakerEnum::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf IsisAuthenticationAlgorithmEnum::cleartext {1, "cleartext"};
const Enum::YLeaf IsisAuthenticationAlgorithmEnum::hmac_md5 {2, "hmac-md5"};
const Enum::YLeaf IsisAuthenticationAlgorithmEnum::keychain {3, "keychain"};

const Enum::YLeaf IsisOverloadBitModeEnum::permanently_set {1, "permanently-set"};
const Enum::YLeaf IsisOverloadBitModeEnum::startup_period {2, "startup-period"};
const Enum::YLeaf IsisOverloadBitModeEnum::wait_for_bgp {3, "wait-for-bgp"};

const Enum::YLeaf IsisMibRejectedAdjacencyBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibRejectedAdjacencyBooleanEnum::true_ {13, "true"};

const Enum::YLeaf IsisMibCorruptedLspDetectedBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibCorruptedLspDetectedBooleanEnum::true_ {3, "true"};

const Enum::YLeaf IsisAdjCheckEnum::disabled {0, "disabled"};

const Enum::YLeaf IsisispfStateEnum::enabled {1, "enabled"};

const Enum::YLeaf IsisfrrLoadSharingEnum::disable {1, "disable"};

const Enum::YLeaf IsisMibAuthenticationFailureBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibAuthenticationFailureBooleanEnum::true_ {10, "true"};

const Enum::YLeaf IsisInterfaceStateEnum::shutdown {0, "shutdown"};
const Enum::YLeaf IsisInterfaceStateEnum::suppressed {1, "suppressed"};
const Enum::YLeaf IsisInterfaceStateEnum::passive {2, "passive"};

const Enum::YLeaf IsisTracingModeEnum::off {0, "off"};
const Enum::YLeaf IsisTracingModeEnum::basic {1, "basic"};
const Enum::YLeaf IsisTracingModeEnum::enhanced {2, "enhanced"};

const Enum::YLeaf IsisMetricStyleEnum::old_metric_style {0, "old-metric-style"};
const Enum::YLeaf IsisMetricStyleEnum::new_metric_style {1, "new-metric-style"};
const Enum::YLeaf IsisMetricStyleEnum::both_metric_style {2, "both-metric-style"};

const Enum::YLeaf IsisNsfFlavorEnum::cisco_proprietary_nsf {1, "cisco-proprietary-nsf"};
const Enum::YLeaf IsisNsfFlavorEnum::ietf_standard_nsf {2, "ietf-standard-nsf"};

const Enum::YLeaf IsisInterfaceAfStateEnum::disable {0, "disable"};

const Enum::YLeaf IsisApplyWeightEnum::ecmp_only {1, "ecmp-only"};
const Enum::YLeaf IsisApplyWeightEnum::ucmp_only {2, "ucmp-only"};

const Enum::YLeaf IsisPrefixPriorityEnum::critical_priority {0, "critical-priority"};
const Enum::YLeaf IsisPrefixPriorityEnum::high_priority {1, "high-priority"};
const Enum::YLeaf IsisPrefixPriorityEnum::medium_priority {2, "medium-priority"};

const Enum::YLeaf IsisMibAuthenticationTypeFailureBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibAuthenticationTypeFailureBooleanEnum::true_ {9, "true"};

const Enum::YLeaf IsisMicroLoopAvoidanceEnum::not_set {0, "not-set"};
const Enum::YLeaf IsisMicroLoopAvoidanceEnum::micro_loop_avoidance_all {1, "micro-loop-avoidance-all"};
const Enum::YLeaf IsisMicroLoopAvoidanceEnum::micro_loop_avoidance_protected {2, "micro-loop-avoidance-protected"};
const Enum::YLeaf IsisMicroLoopAvoidanceEnum::micro_loop_avoidance_segement_routing {3, "micro-loop-avoidance-segement-routing"};

const Enum::YLeaf IsisAdvTypeExternalEnum::external {1, "external"};

const Enum::YLeaf IsisRemoteLfaEnum::remote_lfa_none {0, "remote-lfa-none"};
const Enum::YLeaf IsisRemoteLfaEnum::remote_lfa_tunnel_ldp {1, "remote-lfa-tunnel-ldp"};

const Enum::YLeaf IsisMibAreaMismatchBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibAreaMismatchBooleanEnum::true_ {12, "true"};

const Enum::YLeaf IsisMibAttemptToExceedMaxSequenceBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibAttemptToExceedMaxSequenceBooleanEnum::true_ {4, "true"};

const Enum::YLeaf IsisConfigurableLevelsEnum::level1 {1, "level1"};
const Enum::YLeaf IsisConfigurableLevelsEnum::level2 {2, "level2"};
const Enum::YLeaf IsisConfigurableLevelsEnum::level1_and2 {3, "level1-and2"};

const Enum::YLeaf IsisfrrTiebreakerEnum::downstream {0, "downstream"};
const Enum::YLeaf IsisfrrTiebreakerEnum::lc_disjoint {1, "lc-disjoint"};
const Enum::YLeaf IsisfrrTiebreakerEnum::lowest_backup_metric {2, "lowest-backup-metric"};
const Enum::YLeaf IsisfrrTiebreakerEnum::node_protecting {3, "node-protecting"};
const Enum::YLeaf IsisfrrTiebreakerEnum::primary_path {4, "primary-path"};
const Enum::YLeaf IsisfrrTiebreakerEnum::secondary_path {5, "secondary-path"};
const Enum::YLeaf IsisfrrTiebreakerEnum::srlg_disjoint {6, "srlg-disjoint"};

const Enum::YLeaf IsisMibManualAddressDropsBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibManualAddressDropsBooleanEnum::true_ {2, "true"};

const Enum::YLeaf IsisMetricStyleTransitionEnum::disabled {0, "disabled"};
const Enum::YLeaf IsisMetricStyleTransitionEnum::enabled {1, "enabled"};

const Enum::YLeaf IsisexplicitNullFlagEnum::disable {0, "disable"};
const Enum::YLeaf IsisexplicitNullFlagEnum::enable {1, "enable"};

const Enum::YLeaf IsisMetricEnum::internal {0, "internal"};
const Enum::YLeaf IsisMetricEnum::external {1, "external"};

const Enum::YLeaf IsisHelloPaddingEnum::never {0, "never"};
const Enum::YLeaf IsisHelloPaddingEnum::sometimes {1, "sometimes"};

const Enum::YLeaf IsisMibDatabaseOverFlowBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibDatabaseOverFlowBooleanEnum::true_ {1, "true"};

const Enum::YLeaf IsisAdvTypeInterLevelEnum::inter_level {1, "inter-level"};

const Enum::YLeaf IsisAuthenticationFailureModeEnum::drop {0, "drop"};
const Enum::YLeaf IsisAuthenticationFailureModeEnum::send_only {1, "send-only"};

const Enum::YLeaf IsisMibProtocolsSupportedMismatchBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibProtocolsSupportedMismatchBooleanEnum::true_ {16, "true"};

const Enum::YLeaf IsisRedistProtoEnum::connected {0, "connected"};
const Enum::YLeaf IsisRedistProtoEnum::static_ {1, "static"};
const Enum::YLeaf IsisRedistProtoEnum::ospf {2, "ospf"};
const Enum::YLeaf IsisRedistProtoEnum::bgp {3, "bgp"};
const Enum::YLeaf IsisRedistProtoEnum::isis {4, "isis"};
const Enum::YLeaf IsisRedistProtoEnum::ospfv3 {5, "ospfv3"};
const Enum::YLeaf IsisRedistProtoEnum::rip {6, "rip"};
const Enum::YLeaf IsisRedistProtoEnum::eigrp {7, "eigrp"};
const Enum::YLeaf IsisRedistProtoEnum::subscriber {8, "subscriber"};
const Enum::YLeaf IsisRedistProtoEnum::application {9, "application"};
const Enum::YLeaf IsisRedistProtoEnum::mobile {10, "mobile"};

const Enum::YLeaf IsisphpFlagEnum::enable {0, "enable"};
const Enum::YLeaf IsisphpFlagEnum::disable {1, "disable"};

const Enum::YLeaf IsisMibIdLengthMismatchBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibIdLengthMismatchBooleanEnum::true_ {5, "true"};

const Enum::YLeaf IsisMibAllBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibAllBooleanEnum::true_ {19, "true"};

const Enum::YLeaf IsisMibOriginatedLspBufferSizeMismatchBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibOriginatedLspBufferSizeMismatchBooleanEnum::true_ {15, "true"};

const Enum::YLeaf IsissidEnum::index_ {1, "index"};
const Enum::YLeaf IsissidEnum::absolute {2, "absolute"};

const Enum::YLeaf IsisfrrEnum::per_link {1, "per-link"};
const Enum::YLeaf IsisfrrEnum::per_prefix {2, "per-prefix"};

const Enum::YLeaf IsisAttachedBitEnum::area {0, "area"};
const Enum::YLeaf IsisAttachedBitEnum::on {1, "on"};
const Enum::YLeaf IsisAttachedBitEnum::off {2, "off"};

const Enum::YLeaf NflagClearEnum::disable {0, "disable"};
const Enum::YLeaf NflagClearEnum::enable {1, "enable"};

const Enum::YLeaf IsisLabelPreferenceEnum::ldp {0, "ldp"};
const Enum::YLeaf IsisLabelPreferenceEnum::segment_routing {1, "segment-routing"};

const Enum::YLeaf IsisMibAdjacencyChangeBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibAdjacencyChangeBooleanEnum::true_ {17, "true"};

const Enum::YLeaf IsisMibLspErrorDetectedBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibLspErrorDetectedBooleanEnum::true_ {18, "true"};

const Enum::YLeaf IsisMibOwnLspPurgeBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibOwnLspPurgeBooleanEnum::true_ {7, "true"};

const Enum::YLeaf IsisMibVersionSkewBooleanEnum::false_ {0, "false"};
const Enum::YLeaf IsisMibVersionSkewBooleanEnum::true_ {11, "true"};

const Enum::YLeaf Isis::Instances::Instance::Afs::Af::AfData::Metrics::Metric::MetricEnum::maximum {16777215, "maximum"};

const Enum::YLeaf Isis::Instances::Instance::Afs::Af::TopologyName::Metrics::Metric::MetricEnum::maximum {16777215, "maximum"};

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::MeshGroupEnum::blocked {0, "blocked"};


}
}
