
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {

MplsLdp::MplsLdp()
    :
    global(std::make_shared<MplsLdp::Global>())
	,nodes(std::make_shared<MplsLdp::Nodes>())
{
    global->parent = this;
    children["global"] = global;

    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mpls-ldp"; yang_parent_name = "Cisco-IOS-XR-mpls-ldp-oper";
}

MplsLdp::~MplsLdp()
{
}

bool MplsLdp::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool MplsLdp::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp";

    return path_buffer.str();

}

EntityPath MplsLdp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLdp::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<MplsLdp::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void MplsLdp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsLdp::clone_ptr() const
{
    return std::make_shared<MplsLdp>();
}

std::string MplsLdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLdp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLdp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsLdp::Global::Global()
    :
    active(std::make_shared<MplsLdp::Global::Active>())
	,standby(std::make_shared<MplsLdp::Global::Standby>())
{
    active->parent = this;
    children["active"] = active;

    standby->parent = this;
    children["standby"] = standby;

    yang_name = "global"; yang_parent_name = "mpls-ldp";
}

MplsLdp::Global::~Global()
{
}

bool MplsLdp::Global::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool MplsLdp::Global::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string MplsLdp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
        else
        {
            active = std::make_shared<MplsLdp::Global::Active>();
            active->parent = this;
            children["active"] = active;
        }
        return children.at("active");
    }

    if(child_yang_name == "standby")
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
        else
        {
            standby = std::make_shared<MplsLdp::Global::Standby>();
            standby->parent = this;
            children["standby"] = standby;
        }
        return children.at("standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
    }

    if(children.find("standby") == children.end())
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
    }

    return children;
}

void MplsLdp::Global::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Standby()
    :
    ato_mdb_table_entries(std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries>())
	,bindings_summary_all(std::make_shared<MplsLdp::Global::Standby::BindingsSummaryAll>())
	,default_vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf>())
	,discovery_summary_all(std::make_shared<MplsLdp::Global::Standby::DiscoverySummaryAll>())
	,forwarding_summary_all(std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll>())
	,nsr_summary_all(std::make_shared<MplsLdp::Global::Standby::NsrSummaryAll>())
	,summary(std::make_shared<MplsLdp::Global::Standby::Summary>())
	,vrfs(std::make_shared<MplsLdp::Global::Standby::Vrfs>())
{
    ato_mdb_table_entries->parent = this;
    children["ato-mdb-table-entries"] = ato_mdb_table_entries;

    bindings_summary_all->parent = this;
    children["bindings-summary-all"] = bindings_summary_all;

    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    discovery_summary_all->parent = this;
    children["discovery-summary-all"] = discovery_summary_all;

    forwarding_summary_all->parent = this;
    children["forwarding-summary-all"] = forwarding_summary_all;

    nsr_summary_all->parent = this;
    children["nsr-summary-all"] = nsr_summary_all;

    summary->parent = this;
    children["summary"] = summary;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "standby"; yang_parent_name = "global";
}

MplsLdp::Global::Standby::~Standby()
{
}

bool MplsLdp::Global::Standby::has_data() const
{
    return (ato_mdb_table_entries !=  nullptr && ato_mdb_table_entries->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (discovery_summary_all !=  nullptr && discovery_summary_all->has_data())
	|| (forwarding_summary_all !=  nullptr && forwarding_summary_all->has_data())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::Global::Standby::has_operation() const
{
    return is_set(operation)
	|| (ato_mdb_table_entries !=  nullptr && ato_mdb_table_entries->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (discovery_summary_all !=  nullptr && discovery_summary_all->has_operation())
	|| (forwarding_summary_all !=  nullptr && forwarding_summary_all->has_operation())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::Global::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ato-mdb-table-entries")
    {
        if(ato_mdb_table_entries != nullptr)
        {
            children["ato-mdb-table-entries"] = ato_mdb_table_entries;
        }
        else
        {
            ato_mdb_table_entries = std::make_shared<MplsLdp::Global::Standby::AtoMdbTableEntries>();
            ato_mdb_table_entries->parent = this;
            children["ato-mdb-table-entries"] = ato_mdb_table_entries;
        }
        return children.at("ato-mdb-table-entries");
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
        else
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Standby::BindingsSummaryAll>();
            bindings_summary_all->parent = this;
            children["bindings-summary-all"] = bindings_summary_all;
        }
        return children.at("bindings-summary-all");
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "discovery-summary-all")
    {
        if(discovery_summary_all != nullptr)
        {
            children["discovery-summary-all"] = discovery_summary_all;
        }
        else
        {
            discovery_summary_all = std::make_shared<MplsLdp::Global::Standby::DiscoverySummaryAll>();
            discovery_summary_all->parent = this;
            children["discovery-summary-all"] = discovery_summary_all;
        }
        return children.at("discovery-summary-all");
    }

    if(child_yang_name == "forwarding-summary-all")
    {
        if(forwarding_summary_all != nullptr)
        {
            children["forwarding-summary-all"] = forwarding_summary_all;
        }
        else
        {
            forwarding_summary_all = std::make_shared<MplsLdp::Global::Standby::ForwardingSummaryAll>();
            forwarding_summary_all->parent = this;
            children["forwarding-summary-all"] = forwarding_summary_all;
        }
        return children.at("forwarding-summary-all");
    }

    if(child_yang_name == "nsr-summary-all")
    {
        if(nsr_summary_all != nullptr)
        {
            children["nsr-summary-all"] = nsr_summary_all;
        }
        else
        {
            nsr_summary_all = std::make_shared<MplsLdp::Global::Standby::NsrSummaryAll>();
            nsr_summary_all->parent = this;
            children["nsr-summary-all"] = nsr_summary_all;
        }
        return children.at("nsr-summary-all");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Standby::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<MplsLdp::Global::Standby::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::get_children()
{
    if(children.find("ato-mdb-table-entries") == children.end())
    {
        if(ato_mdb_table_entries != nullptr)
        {
            children["ato-mdb-table-entries"] = ato_mdb_table_entries;
        }
    }

    if(children.find("bindings-summary-all") == children.end())
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
    }

    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("discovery-summary-all") == children.end())
    {
        if(discovery_summary_all != nullptr)
        {
            children["discovery-summary-all"] = discovery_summary_all;
        }
    }

    if(children.find("forwarding-summary-all") == children.end())
    {
        if(forwarding_summary_all != nullptr)
        {
            children["forwarding-summary-all"] = forwarding_summary_all;
        }
    }

    if(children.find("nsr-summary-all") == children.end())
    {
        if(nsr_summary_all != nullptr)
        {
            children["nsr-summary-all"] = nsr_summary_all;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs>())
	,backoff_parameters(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::BackoffParameters>())
	,backoffs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Backoffs>())
	,capabilities(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Capabilities>())
	,graceful_restart(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart>())
	,issu(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu>())
	,ldp_id(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::LdpId>())
	,neighbor_briefs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs>())
	,neighbor_capabilities(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities>())
	,neighbors(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors>())
	,nsr(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr>())
	,parameters(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters>())
	,statistics(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics>())
	,summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Summary>())
{
    afs->parent = this;
    children["afs"] = afs;

    backoff_parameters->parent = this;
    children["backoff-parameters"] = backoff_parameters;

    backoffs->parent = this;
    children["backoffs"] = backoffs;

    capabilities->parent = this;
    children["capabilities"] = capabilities;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    issu->parent = this;
    children["issu"] = issu;

    ldp_id->parent = this;
    children["ldp-id"] = ldp_id;

    neighbor_briefs->parent = this;
    children["neighbor-briefs"] = neighbor_briefs;

    neighbor_capabilities->parent = this;
    children["neighbor-capabilities"] = neighbor_capabilities;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    nsr->parent = this;
    children["nsr"] = nsr;

    parameters->parent = this;
    children["parameters"] = parameters;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "default-vrf"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (backoffs !=  nullptr && backoffs->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (ldp_id !=  nullptr && ldp_id->has_data())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_data())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (ldp_id !=  nullptr && ldp_id->has_operation())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_operation())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            afs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters != nullptr)
        {
            children["backoff-parameters"] = backoff_parameters;
        }
        else
        {
            backoff_parameters = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::BackoffParameters>();
            backoff_parameters->parent = this;
            children["backoff-parameters"] = backoff_parameters;
        }
        return children.at("backoff-parameters");
    }

    if(child_yang_name == "backoffs")
    {
        if(backoffs != nullptr)
        {
            children["backoffs"] = backoffs;
        }
        else
        {
            backoffs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Backoffs>();
            backoffs->parent = this;
            children["backoffs"] = backoffs;
        }
        return children.at("backoffs");
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
        else
        {
            capabilities = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Capabilities>();
            capabilities->parent = this;
            children["capabilities"] = capabilities;
        }
        return children.at("capabilities");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "ldp-id")
    {
        if(ldp_id != nullptr)
        {
            children["ldp-id"] = ldp_id;
        }
        else
        {
            ldp_id = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::LdpId>();
            ldp_id->parent = this;
            children["ldp-id"] = ldp_id;
        }
        return children.at("ldp-id");
    }

    if(child_yang_name == "neighbor-briefs")
    {
        if(neighbor_briefs != nullptr)
        {
            children["neighbor-briefs"] = neighbor_briefs;
        }
        else
        {
            neighbor_briefs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs>();
            neighbor_briefs->parent = this;
            children["neighbor-briefs"] = neighbor_briefs;
        }
        return children.at("neighbor-briefs");
    }

    if(child_yang_name == "neighbor-capabilities")
    {
        if(neighbor_capabilities != nullptr)
        {
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
        else
        {
            neighbor_capabilities = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities>();
            neighbor_capabilities->parent = this;
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
        return children.at("neighbor-capabilities");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("backoff-parameters") == children.end())
    {
        if(backoff_parameters != nullptr)
        {
            children["backoff-parameters"] = backoff_parameters;
        }
    }

    if(children.find("backoffs") == children.end())
    {
        if(backoffs != nullptr)
        {
            children["backoffs"] = backoffs;
        }
    }

    if(children.find("capabilities") == children.end())
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("ldp-id") == children.end())
    {
        if(ldp_id != nullptr)
        {
            children["ldp-id"] = ldp_id;
        }
    }

    if(children.find("neighbor-briefs") == children.end())
    {
        if(neighbor_briefs != nullptr)
        {
            children["neighbor-briefs"] = neighbor_briefs;
        }
    }

    if(children.find("neighbor-capabilities") == children.end())
    {
        if(neighbor_capabilities != nullptr)
        {
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestart()
    :
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"},
    is_forwarding_state_hold_timer_running{YType::boolean, "is-forwarding-state-hold-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "graceful-restart"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_data())
            return true;
    }
    return forwarding_state_hold_timer_remaining_seconds.is_set
	|| is_forwarding_state_hold_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(forwarding_state_hold_timer_remaining_seconds.operation)
	|| is_set(is_forwarding_state_hold_timer_running.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.operation)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());
    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.operation)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restartable-neighbor")
    {
        for(auto const & c : graceful_restartable_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor>();
        c->parent = this;
        graceful_restartable_neighbor.push_back(std::move(c));
        children[segment_path] = graceful_restartable_neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::get_children()
{
    for (auto const & c : graceful_restartable_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GracefulRestartableNeighbor()
    :
    connect_count{YType::uint32, "connect-count"},
    down_nbr_down_reason{YType::uint32, "down-nbr-down-reason"},
    down_nbr_flags{YType::uint32, "down-nbr-flags"},
    down_nbr_flap_count{YType::uint8, "down-nbr-flap-count"},
    is_liveness_timer_running{YType::boolean, "is-liveness-timer-running"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"}
    	,
    gr_peer(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>())
{
    gr_peer->parent = this;
    children["gr-peer"] = gr_peer;

    yang_name = "graceful-restartable-neighbor"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::~GracefulRestartableNeighbor()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_data() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_data())
            return true;
    }
    return connect_count.is_set
	|| down_nbr_down_reason.is_set
	|| down_nbr_flags.is_set
	|| down_nbr_flap_count.is_set
	|| is_liveness_timer_running.is_set
	|| is_neighbor_up.is_set
	|| is_recovery_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| recovery_timer_remaining_seconds.is_set
	|| (gr_peer !=  nullptr && gr_peer->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_operation() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_count.operation)
	|| is_set(down_nbr_down_reason.operation)
	|| is_set(down_nbr_flags.operation)
	|| is_set(down_nbr_flap_count.operation)
	|| is_set(is_liveness_timer_running.operation)
	|| is_set(is_neighbor_up.operation)
	|| is_set(is_recovery_timer_running.operation)
	|| is_set(liveness_timer_remaining_seconds.operation)
	|| is_set(recovery_timer_remaining_seconds.operation)
	|| (gr_peer !=  nullptr && gr_peer->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restartable-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.operation)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());
    if (down_nbr_flags.is_set || is_set(down_nbr_flags.operation)) leaf_name_data.push_back(down_nbr_flags.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.operation)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.operation)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.operation)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.operation)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.operation)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.operation)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "down-nbr-address")
    {
        for(auto const & c : down_nbr_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress>();
        c->parent = this;
        down_nbr_address.push_back(std::move(c));
        children[segment_path] = down_nbr_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "down-nbr-interface")
    {
        for(auto const & c : down_nbr_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface>();
        c->parent = this;
        down_nbr_interface.push_back(std::move(c));
        children[segment_path] = down_nbr_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "gr-peer")
    {
        if(gr_peer != nullptr)
        {
            children["gr-peer"] = gr_peer;
        }
        else
        {
            gr_peer = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>();
            gr_peer->parent = this;
            children["gr-peer"] = gr_peer;
        }
        return children.at("gr-peer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_children()
{
    for (auto const & c : down_nbr_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : down_nbr_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("gr-peer") == children.end())
    {
        if(gr_peer != nullptr)
        {
            children["gr-peer"] = gr_peer;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags = value;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::GrPeer()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "gr-peer"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::~GrPeer()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::DownNbrInterface()
    :
    address_family{YType::enumeration, "address-family"},
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "down-nbr-interface"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::~DownNbrInterface()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_data() const
{
    return address_family.is_set
	|| interface_handle.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(interface_handle.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-interface";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::DownNbrAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "down-nbr-address"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::~DownNbrAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Capabilities::has_data() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capability")
    {
        for(auto const & c : capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability>();
        c->parent = this;
        capability.push_back(std::move(c));
        children[segment_path] = capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Capabilities::get_children()
{
    for (auto const & c : capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability()
    :
    capability_type{YType::int32, "capability-type"},
    capability_owner{YType::str, "capability-owner"}
    	,
    capability(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_>())
{
    capability->parent = this;
    children["capability"] = capability;

    yang_name = "capability"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::has_data() const
{
    return capability_type.is_set
	|| capability_owner.is_set
	|| (capability !=  nullptr && capability->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_type.operation)
	|| is_set(capability_owner.operation)
	|| (capability !=  nullptr && capability->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[capability-type='" <<capability_type <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.operation)) leaf_name_data.push_back(capability_type.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.operation)) leaf_name_data.push_back(capability_owner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capability")
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
        else
        {
            capability = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_>();
            capability->parent = this;
            children["capability"] = capability;
        }
        return children.at("capability");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::get_children()
{
    if(children.find("capability") == children.end())
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::Capability_()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "capability"; yang_parent_name = "capability";
}

MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::~Capability_()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Capabilities::Capability::Capability_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Summary::Summary()
    :
    common(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Summary::Common>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf>())
{
    common->parent = this;
    children["common"] = common;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "summary"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Summary::~Summary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Summary::has_data() const
{
    return (common !=  nullptr && common->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Summary::has_operation() const
{
    return is_set(operation)
	|| (common !=  nullptr && common->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
        else
        {
            common = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Summary::Common>();
            common->parent = this;
            children["common"] = common;
        }
        return children.at("common");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Summary::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Summary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Summary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{
    yang_name = "common"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::DefaultVrf::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Summary::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(address_families.operation)
	|| is_set(number_of_bindings_ipv4.operation)
	|| is_set(number_of_bindings_ipv6.operation)
	|| is_set(number_of_downstream_on_demand_neighbors.operation)
	|| is_set(number_of_graceful_restart_neighbors.operation)
	|| is_set(number_of_ipv4_hello_adj.operation)
	|| is_set(number_of_ipv4_local_addresses.operation)
	|| is_set(number_of_ipv4_routes.operation)
	|| is_set(number_of_ipv4af.operation)
	|| is_set(number_of_ipv4ldp_interfaces.operation)
	|| is_set(number_of_ipv6_hello_adj.operation)
	|| is_set(number_of_ipv6_local_addresses.operation)
	|| is_set(number_of_ipv6_routes.operation)
	|| is_set(number_of_ipv6af.operation)
	|| is_set(number_of_ipv6ldp_interfaces.operation)
	|| is_set(number_of_ldp_interfaces.operation)
	|| is_set(number_of_local_bindings_ipv4.operation)
	|| is_set(number_of_local_bindings_ipv6.operation)
	|| is_set(number_of_neighbors.operation)
	|| is_set(number_of_nsr_synced_neighbors.operation)
	|| is_set(number_of_remote_bindings_ipv4.operation)
	|| is_set(number_of_remote_bindings_ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Summary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.operation)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.operation)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.operation)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.operation)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.operation)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.operation)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.operation)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.operation)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Summary::Common::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Summary::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-families")
    {
        address_families = value;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::get_children()
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

void MplsLdp::Global::Standby::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    bindings(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings>())
	,bindings_advertise_spec(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec>())
	,bindings_summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary>())
	,bindings_summary_all(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll>())
	,discovery(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery>())
	,forwarding_summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary>())
	,forwardings(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings>())
	,igp(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp>())
	,interface_summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary>())
	,interfaces(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces>())
{
    bindings->parent = this;
    children["bindings"] = bindings;

    bindings_advertise_spec->parent = this;
    children["bindings-advertise-spec"] = bindings_advertise_spec;

    bindings_summary->parent = this;
    children["bindings-summary"] = bindings_summary;

    bindings_summary_all->parent = this;
    children["bindings-summary-all"] = bindings_summary_all;

    discovery->parent = this;
    children["discovery"] = discovery;

    forwarding_summary->parent = this;
    children["forwarding-summary"] = forwarding_summary;

    forwardings->parent = this;
    children["forwardings"] = forwardings;

    igp->parent = this;
    children["igp"] = igp;

    interface_summary->parent = this;
    children["interface-summary"] = interface_summary;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (bindings !=  nullptr && bindings->has_data())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (forwardings !=  nullptr && forwardings->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (forwardings !=  nullptr && forwardings->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/afs/" << get_segment_path();
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

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bindings")
    {
        if(bindings != nullptr)
        {
            children["bindings"] = bindings;
        }
        else
        {
            bindings = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings>();
            bindings->parent = this;
            children["bindings"] = bindings;
        }
        return children.at("bindings");
    }

    if(child_yang_name == "bindings-advertise-spec")
    {
        if(bindings_advertise_spec != nullptr)
        {
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
        else
        {
            bindings_advertise_spec = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec>();
            bindings_advertise_spec->parent = this;
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
        return children.at("bindings-advertise-spec");
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary != nullptr)
        {
            children["bindings-summary"] = bindings_summary;
        }
        else
        {
            bindings_summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary>();
            bindings_summary->parent = this;
            children["bindings-summary"] = bindings_summary;
        }
        return children.at("bindings-summary");
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
        else
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll>();
            bindings_summary_all->parent = this;
            children["bindings-summary-all"] = bindings_summary_all;
        }
        return children.at("bindings-summary-all");
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery;
        }
        else
        {
            discovery = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery;
        }
        return children.at("discovery");
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
        else
        {
            forwarding_summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary>();
            forwarding_summary->parent = this;
            children["forwarding-summary"] = forwarding_summary;
        }
        return children.at("forwarding-summary");
    }

    if(child_yang_name == "forwardings")
    {
        if(forwardings != nullptr)
        {
            children["forwardings"] = forwardings;
        }
        else
        {
            forwardings = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings>();
            forwardings->parent = this;
            children["forwardings"] = forwardings;
        }
        return children.at("forwardings");
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
        else
        {
            igp = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp>();
            igp->parent = this;
            children["igp"] = igp;
        }
        return children.at("igp");
    }

    if(child_yang_name == "interface-summary")
    {
        if(interface_summary != nullptr)
        {
            children["interface-summary"] = interface_summary;
        }
        else
        {
            interface_summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary>();
            interface_summary->parent = this;
            children["interface-summary"] = interface_summary;
        }
        return children.at("interface-summary");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::get_children()
{
    if(children.find("bindings") == children.end())
    {
        if(bindings != nullptr)
        {
            children["bindings"] = bindings;
        }
    }

    if(children.find("bindings-advertise-spec") == children.end())
    {
        if(bindings_advertise_spec != nullptr)
        {
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
    }

    if(children.find("bindings-summary") == children.end())
    {
        if(bindings_summary != nullptr)
        {
            children["bindings-summary"] = bindings_summary;
        }
    }

    if(children.find("bindings-summary-all") == children.end())
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
    }

    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery;
        }
    }

    if(children.find("forwarding-summary") == children.end())
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
    }

    if(children.find("forwardings") == children.end())
    {
        if(forwardings != nullptr)
        {
            children["forwardings"] = forwardings;
        }
    }

    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
    }

    if(children.find("interface-summary") == children.end())
    {
        if(interface_summary != nullptr)
        {
            children["interface-summary"] = interface_summary;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    auto_config{YType::uint32, "auto-config"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"},
    forward_references{YType::uint32, "forward-references"},
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"},
    ldp_configured_attached_interface{YType::uint32, "ldp-configured-attached-interface"},
    ldp_configured_te_interface{YType::uint32, "ldp-configured-te-interface"}
{
    yang_name = "interface-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::has_data() const
{
    return auto_config.is_set
	|| auto_config_disabled.is_set
	|| auto_config_forward_reference_interfaces.is_set
	|| forward_references.is_set
	|| known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set
	|| ldp_configured_attached_interface.is_set
	|| ldp_configured_te_interface.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_config.operation)
	|| is_set(auto_config_disabled.operation)
	|| is_set(auto_config_forward_reference_interfaces.operation)
	|| is_set(forward_references.operation)
	|| is_set(known_ip_interface_count.operation)
	|| is_set(known_ip_interface_ldp_enabled.operation)
	|| is_set(ldp_configured_attached_interface.operation)
	|| is_set(ldp_configured_te_interface.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.operation)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.operation)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.operation)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.operation)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.operation)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.operation)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());
    if (ldp_configured_attached_interface.is_set || is_set(ldp_configured_attached_interface.operation)) leaf_name_data.push_back(ldp_configured_attached_interface.get_name_leafdata());
    if (ldp_configured_te_interface.is_set || is_set(ldp_configured_te_interface.operation)) leaf_name_data.push_back(ldp_configured_te_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
    }
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface = value;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Bindings()
{
    yang_name = "bindings"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::~Bindings()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bindings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding>();
        c->parent = this;
        binding.push_back(std::move(c));
        children[segment_path] = binding.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::get_children()
{
    for (auto const & c : binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Binding()
    :
    prefix{YType::str, "prefix"},
    advertise_prefix_acl{YType::str, "advertise-prefix-acl"},
    advertise_tsr_acl{YType::str, "advertise-tsr-acl"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"},
    is_elc{YType::boolean, "is-elc"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    local_label{YType::uint32, "local-label"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf>())
{
    prefix_xr->parent = this;
    children["prefix-xr"] = prefix_xr;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "binding"; yang_parent_name = "bindings";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::~Binding()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| advertise_prefix_acl.is_set
	|| advertise_tsr_acl.is_set
	|| config_enforced_local_label_value.is_set
	|| is_elc.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| local_label.is_set
	|| prefix_length.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(advertise_prefix_acl.operation)
	|| is_set(advertise_tsr_acl.operation)
	|| is_set(config_enforced_local_label_value.operation)
	|| is_set(is_elc.operation)
	|| is_set(is_no_route.operation)
	|| is_set(label_oor.operation)
	|| is_set(le_local_binding_revision.operation)
	|| is_set(le_local_label_state.operation)
	|| is_set(local_label.operation)
	|| is_set(prefix_length.operation)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise_prefix_acl.is_set || is_set(advertise_prefix_acl.operation)) leaf_name_data.push_back(advertise_prefix_acl.get_name_leafdata());
    if (advertise_tsr_acl.is_set || is_set(advertise_tsr_acl.operation)) leaf_name_data.push_back(advertise_tsr_acl.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.operation)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());
    if (is_elc.is_set || is_set(is_elc.operation)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.operation)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.operation)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.operation)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.operation)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peers-acked")
    {
        for(auto const & c : peers_acked)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked>();
        c->parent = this;
        peers_acked.push_back(std::move(c));
        children[segment_path] = peers_acked.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "peers-advertised-to")
    {
        for(auto const & c : peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo>();
        c->parent = this;
        peers_advertised_to.push_back(std::move(c));
        children[segment_path] = peers_advertised_to.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
        else
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr>();
            prefix_xr->parent = this;
            children["prefix-xr"] = prefix_xr;
        }
        return children.at("prefix-xr");
    }

    if(child_yang_name == "remote-binding")
    {
        for(auto const & c : remote_binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding>();
        c->parent = this;
        remote_binding.push_back(std::move(c));
        children[segment_path] = remote_binding.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::get_children()
{
    for (auto const & c : peers_acked)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : peers_advertised_to)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("prefix-xr") == children.end())
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
    }

    for (auto const & c : remote_binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl = value;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl = value;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
    }
    if(value_path == "is-elc")
    {
        is_elc = value;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    is_elc{YType::boolean, "is-elc"},
    is_stale{YType::boolean, "is-stale"},
    remote_label{YType::uint32, "remote-label"}
    	,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;
    children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;

    yang_name = "remote-binding"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_data() const
{
    return is_elc.is_set
	|| is_stale.is_set
	|| remote_label.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(operation)
	|| is_set(is_elc.operation)
	|| is_set(is_stale.operation)
	|| is_set(remote_label.operation)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteBinding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_elc.is_set || is_set(is_elc.operation)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "assigning-peer-ldp-ident")
    {
        if(assigning_peer_ldp_ident != nullptr)
        {
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
        else
        {
            assigning_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>();
            assigning_peer_ldp_ident->parent = this;
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
        return children.at("assigning-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_children()
{
    if(children.find("assigning-peer-ldp-ident") == children.end())
    {
        if(assigning_peer_ldp_ident != nullptr)
        {
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-elc")
    {
        is_elc = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssigningPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-advertised-to"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAdvertisedTo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::PeersAcked()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-acked"; yang_parent_name = "binding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::~PeersAcked()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-acked";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAcked' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Igp()
    :
    sync_delay_restart(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart>())
	,syncs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs>())
{
    sync_delay_restart->parent = this;
    children["sync-delay-restart"] = sync_delay_restart;

    syncs->parent = this;
    children["syncs"] = syncs;

    yang_name = "igp"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::has_data() const
{
    return (sync_delay_restart !=  nullptr && sync_delay_restart->has_data())
	|| (syncs !=  nullptr && syncs->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::has_operation() const
{
    return is_set(operation)
	|| (sync_delay_restart !=  nullptr && sync_delay_restart->has_operation())
	|| (syncs !=  nullptr && syncs->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-delay-restart")
    {
        if(sync_delay_restart != nullptr)
        {
            children["sync-delay-restart"] = sync_delay_restart;
        }
        else
        {
            sync_delay_restart = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart>();
            sync_delay_restart->parent = this;
            children["sync-delay-restart"] = sync_delay_restart;
        }
        return children.at("sync-delay-restart");
    }

    if(child_yang_name == "syncs")
    {
        if(syncs != nullptr)
        {
            children["syncs"] = syncs;
        }
        else
        {
            syncs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs>();
            syncs->parent = this;
            children["syncs"] = syncs;
        }
        return children.at("syncs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::get_children()
{
    if(children.find("sync-delay-restart") == children.end())
    {
        if(sync_delay_restart != nullptr)
        {
            children["sync-delay-restart"] = sync_delay_restart;
        }
    }

    if(children.find("syncs") == children.end())
    {
        if(syncs != nullptr)
        {
            children["syncs"] = syncs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Syncs()
{
    yang_name = "syncs"; yang_parent_name = "igp";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::~Syncs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::has_data() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::has_operation() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syncs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync")
    {
        for(auto const & c : sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync>();
        c->parent = this;
        sync.push_back(std::move(c));
        children[segment_path] = sync.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::get_children()
{
    for (auto const & c : sync)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Sync()
    :
    interface_name{YType::str, "interface-name"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_delay{YType::uint32, "igp-sync-delay"},
    igp_sync_down_reason{YType::enumeration, "igp-sync-down-reason"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_delay_timer_running{YType::boolean, "is-delay-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "sync"; yang_parent_name = "syncs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::~Sync()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_data() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| delay_timer_remaining.is_set
	|| igp_sync_delay.is_set
	|| igp_sync_down_reason.is_set
	|| igp_sync_state.is_set
	|| interface_name_xr.is_set
	|| is_delay_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_operation() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(delay_timer_remaining.operation)
	|| is_set(igp_sync_delay.operation)
	|| is_set(igp_sync_down_reason.operation)
	|| is_set(igp_sync_state.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_delay_timer_running.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.operation)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_delay.is_set || is_set(igp_sync_delay.operation)) leaf_name_data.push_back(igp_sync_delay.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.operation)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.operation)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.operation)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gr-only-peer")
    {
        for(auto const & c : gr_only_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer>();
        c->parent = this;
        gr_only_peer.push_back(std::move(c));
        children[segment_path] = gr_only_peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers>();
        c->parent = this;
        peers.push_back(std::move(c));
        children[segment_path] = peers.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_children()
{
    for (auto const & c : gr_only_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : peers)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay = value;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "sync";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::Peers()
    :
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "peers"; yang_parent_name = "sync";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::~Peers()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_data() const
{
    return is_gr_enabled.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_operation() const
{
    return is_set(operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::GrOnlyPeer()
    :
    is_chkpt_created{YType::boolean, "is-chkpt-created"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "gr-only-peer"; yang_parent_name = "sync";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::~GrOnlyPeer()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_data() const
{
    return is_chkpt_created.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_chkpt_created.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-only-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrOnlyPeer' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_chkpt_created.is_set || is_set(is_chkpt_created.operation)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::SyncDelayRestart()
    :
    configured{YType::boolean, "configured"},
    delay_secs{YType::uint32, "delay-secs"},
    remaining_secs{YType::uint32, "remaining-secs"},
    timer_running{YType::boolean, "timer-running"}
{
    yang_name = "sync-delay-restart"; yang_parent_name = "igp";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::~SyncDelayRestart()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_data() const
{
    return configured.is_set
	|| delay_secs.is_set
	|| remaining_secs.is_set
	|| timer_running.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(delay_secs.operation)
	|| is_set(remaining_secs.operation)
	|| is_set(timer_running.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-delay-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SyncDelayRestart' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (delay_secs.is_set || is_set(delay_secs.operation)) leaf_name_data.push_back(delay_secs.get_name_leafdata());
    if (remaining_secs.is_set || is_set(remaining_secs.operation)) leaf_name_data.push_back(remaining_secs.get_name_leafdata());
    if (timer_running.is_set || is_set(timer_running.operation)) leaf_name_data.push_back(timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "delay-secs")
    {
        delay_secs = value;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs = value;
    }
    if(value_path == "timer-running")
    {
        timer_running = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindingsSummary()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "bindings-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf>();
        c->parent = this;
        bind_af.push_back(std::move(c));
        children[segment_path] = bind_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::get_children()
{
    for (auto const & c : bind_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(last_lib_update.operation)
	|| is_set(lib_minimum_revision_sent_all.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.operation)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.operation)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummary::BindAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::~Interfaces()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::get_children()
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

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_im_stale{YType::boolean, "is-im-stale"},
    ldp_autoconfig_disable{YType::boolean, "ldp-autoconfig-disable"},
    ldp_config_mode{YType::boolean, "ldp-config-mode"},
    ldp_enabled{YType::boolean, "ldp-enabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| is_im_stale.is_set
	|| ldp_autoconfig_disable.is_set
	|| ldp_config_mode.is_set
	|| ldp_enabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_im_stale.operation)
	|| is_set(ldp_autoconfig_disable.operation)
	|| is_set(ldp_config_mode.operation)
	|| is_set(ldp_enabled.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_im_stale.is_set || is_set(is_im_stale.operation)) leaf_name_data.push_back(is_im_stale.get_name_leafdata());
    if (ldp_autoconfig_disable.is_set || is_set(ldp_autoconfig_disable.operation)) leaf_name_data.push_back(ldp_autoconfig_disable.get_name_leafdata());
    if (ldp_config_mode.is_set || is_set(ldp_config_mode.operation)) leaf_name_data.push_back(ldp_config_mode.get_name_leafdata());
    if (ldp_enabled.is_set || is_set(ldp_enabled.operation)) leaf_name_data.push_back(ldp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-config")
    {
        for(auto const & c : auto_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig>();
        c->parent = this;
        auto_config.push_back(std::move(c));
        children[segment_path] = auto_config.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "te-mesh-grp")
    {
        for(auto const & c : te_mesh_grp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp>();
        c->parent = this;
        te_mesh_grp.push_back(std::move(c));
        children[segment_path] = te_mesh_grp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::get_children()
{
    for (auto const & c : auto_config)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : te_mesh_grp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale = value;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable = value;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode = value;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "interface";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::TeMeshGrp()
    :
    ldp_mesh_group_enabled{YType::boolean, "ldp-mesh-group-enabled"},
    ldp_te_mesh_group_all_cfgd{YType::boolean, "ldp-te-mesh-group-all-cfgd"},
    te_mesh_group_id{YType::uint32, "te-mesh-group-id"}
{
    yang_name = "te-mesh-grp"; yang_parent_name = "interface";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::~TeMeshGrp()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_data() const
{
    return ldp_mesh_group_enabled.is_set
	|| ldp_te_mesh_group_all_cfgd.is_set
	|| te_mesh_group_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_operation() const
{
    return is_set(operation)
	|| is_set(ldp_mesh_group_enabled.operation)
	|| is_set(ldp_te_mesh_group_all_cfgd.operation)
	|| is_set(te_mesh_group_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mesh-grp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeMeshGrp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_mesh_group_enabled.is_set || is_set(ldp_mesh_group_enabled.operation)) leaf_name_data.push_back(ldp_mesh_group_enabled.get_name_leafdata());
    if (ldp_te_mesh_group_all_cfgd.is_set || is_set(ldp_te_mesh_group_all_cfgd.operation)) leaf_name_data.push_back(ldp_te_mesh_group_all_cfgd.get_name_leafdata());
    if (te_mesh_group_id.is_set || is_set(te_mesh_group_id.operation)) leaf_name_data.push_back(te_mesh_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled = value;
    }
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd = value;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::AutoConfig()
    :
    tuple{YType::str, "tuple"}
{
    yang_name = "auto-config"; yang_parent_name = "interface";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::~AutoConfig()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_data() const
{
    return tuple.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(tuple.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-config";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoConfig' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.operation)) leaf_name_data.push_back(tuple.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tuple")
    {
        tuple = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Discovery()
    :
    brief(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief>())
	,link_hellos(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos>())
	,stats(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats>())
	,summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary>())
	,targeted_hellos(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos>())
{
    brief->parent = this;
    children["brief"] = brief;

    link_hellos->parent = this;
    children["link-hellos"] = link_hellos;

    stats->parent = this;
    children["stats"] = stats;

    summary->parent = this;
    children["summary"] = summary;

    targeted_hellos->parent = this;
    children["targeted-hellos"] = targeted_hellos;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (link_hellos !=  nullptr && link_hellos->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (link_hellos !=  nullptr && link_hellos->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
        else
        {
            brief = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "link-hellos")
    {
        if(link_hellos != nullptr)
        {
            children["link-hellos"] = link_hellos;
        }
        else
        {
            link_hellos = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos>();
            link_hellos->parent = this;
            children["link-hellos"] = link_hellos;
        }
        return children.at("link-hellos");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "targeted-hellos")
    {
        if(targeted_hellos != nullptr)
        {
            children["targeted-hellos"] = targeted_hellos;
        }
        else
        {
            targeted_hellos = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos>();
            targeted_hellos->parent = this;
            children["targeted-hellos"] = targeted_hellos;
        }
        return children.at("targeted-hellos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("link-hellos") == children.end())
    {
        if(link_hellos != nullptr)
        {
            children["link-hellos"] = link_hellos;
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("targeted-hellos") == children.end())
    {
        if(targeted_hellos != nullptr)
        {
            children["targeted-hellos"] = targeted_hellos;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHellos()
{
    yang_name = "link-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_data() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_operation() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello")
    {
        for(auto const & c : link_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello>();
        c->parent = this;
        link_hello.push_back(std::move(c));
        children[segment_path] = link_hello.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_children()
{
    for (auto const & c : link_hello)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::LinkHello()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "link-hello"; yang_parent_name = "link-hellos";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_data() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_operation() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(next_hello.operation)
	|| is_set(quick_start_disabled.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.operation)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-link-af")
    {
        for(auto const & c : discovery_link_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf>();
        c->parent = this;
        discovery_link_af.push_back(std::move(c));
        children[segment_path] = discovery_link_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_children()
{
    for (auto const & c : discovery_link_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::HelloInformation()
    :
    disc_expiry{YType::uint32, "disc-expiry"},
    established_age{YType::uint64, "established-age"},
    established_time{YType::uint64, "established-time"},
    hold_time{YType::uint32, "hold-time"},
    is_no_route{YType::boolean, "is-no-route"},
    is_targeted{YType::boolean, "is-targeted"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"},
    session_up{YType::boolean, "session-up"}
    	,
    neighbor_src_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>())
	,neighbor_transport_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>())
	,target(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>())
{
    neighbor_src_address->parent = this;
    children["neighbor-src-address"] = neighbor_src_address;

    neighbor_transport_address->parent = this;
    children["neighbor-transport-address"] = neighbor_transport_address;

    target->parent = this;
    children["target"] = target;

    yang_name = "hello-information"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_data() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return disc_expiry.is_set
	|| established_age.is_set
	|| established_time.is_set
	|| hold_time.is_set
	|| is_no_route.is_set
	|| is_targeted.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_bringup_failure_reason.is_set
	|| session_up.is_set
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_data())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_data())
	|| (target !=  nullptr && target->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disc_expiry.operation)
	|| is_set(established_age.operation)
	|| is_set(established_time.operation)
	|| is_set(hold_time.operation)
	|| is_set(is_no_route.operation)
	|| is_set(is_targeted.operation)
	|| is_set(local_hold_time.operation)
	|| is_set(neighbor_hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(session_bringup_failure_reason.operation)
	|| is_set(session_up.operation)
	|| (neighbor_src_address !=  nullptr && neighbor_src_address->has_operation())
	|| (neighbor_transport_address !=  nullptr && neighbor_transport_address->has_operation())
	|| (target !=  nullptr && target->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_expiry.is_set || is_set(disc_expiry.operation)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.operation)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.operation)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.operation)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (is_targeted.is_set || is_set(is_targeted.operation)) leaf_name_data.push_back(is_targeted.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.operation)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.operation)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.operation)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-session-down-info")
    {
        for(auto const & c : last_session_down_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo>();
        c->parent = this;
        last_session_down_info.push_back(std::move(c));
        children[segment_path] = last_session_down_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-src-address")
    {
        if(neighbor_src_address != nullptr)
        {
            children["neighbor-src-address"] = neighbor_src_address;
        }
        else
        {
            neighbor_src_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress>();
            neighbor_src_address->parent = this;
            children["neighbor-src-address"] = neighbor_src_address;
        }
        return children.at("neighbor-src-address");
    }

    if(child_yang_name == "neighbor-transport-address")
    {
        if(neighbor_transport_address != nullptr)
        {
            children["neighbor-transport-address"] = neighbor_transport_address;
        }
        else
        {
            neighbor_transport_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress>();
            neighbor_transport_address->parent = this;
            children["neighbor-transport-address"] = neighbor_transport_address;
        }
        return children.at("neighbor-transport-address");
    }

    if(child_yang_name == "target")
    {
        if(target != nullptr)
        {
            children["target"] = target;
        }
        else
        {
            target = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target>();
            target->parent = this;
            children["target"] = target;
        }
        return children.at("target");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::get_children()
{
    for (auto const & c : last_session_down_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("neighbor-src-address") == children.end())
    {
        if(neighbor_src_address != nullptr)
        {
            children["neighbor-src-address"] = neighbor_src_address;
        }
    }

    if(children.find("neighbor-transport-address") == children.end())
    {
        if(neighbor_transport_address != nullptr)
        {
            children["neighbor-transport-address"] = neighbor_transport_address;
        }
    }

    if(children.find("target") == children.end())
    {
        if(target != nullptr)
        {
            children["target"] = target;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
    }
    if(value_path == "established-age")
    {
        established_age = value;
    }
    if(value_path == "established-time")
    {
        established_time = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
    }
    if(value_path == "is-targeted")
    {
        is_targeted = value;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::NeighborSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "neighbor-src-address"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::~NeighborSrcAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-src-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSrcAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborSrcAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::NeighborTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "neighbor-transport-address"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::~NeighborTransportAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::NeighborTransportAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::Target()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::~Target()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Target' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::Target::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{
    yang_name = "last-session-down-info"; yang_parent_name = "hello-information";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_data() const
{
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(last_session_down_reason.operation)
	|| is_set(last_session_down_time.operation)
	|| is_set(last_session_up_time.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastSessionDownInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.operation)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.operation)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.operation)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation::LastSessionDownInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::DiscoveryLinkAf()
    :
    interval{YType::uint32, "interval"}
    	,
    local_src_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress>())
	,local_transport_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress>())
{
    local_src_address->parent = this;
    children["local-src-address"] = local_src_address;

    local_transport_address->parent = this;
    children["local-transport-address"] = local_transport_address;

    yang_name = "discovery-link-af"; yang_parent_name = "link-hello";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::~DiscoveryLinkAf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_data() const
{
    return interval.is_set
	|| (local_src_address !=  nullptr && local_src_address->has_data())
	|| (local_transport_address !=  nullptr && local_transport_address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| (local_src_address !=  nullptr && local_src_address->has_operation())
	|| (local_transport_address !=  nullptr && local_transport_address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-link-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscoveryLinkAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-src-address")
    {
        if(local_src_address != nullptr)
        {
            children["local-src-address"] = local_src_address;
        }
        else
        {
            local_src_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress>();
            local_src_address->parent = this;
            children["local-src-address"] = local_src_address;
        }
        return children.at("local-src-address");
    }

    if(child_yang_name == "local-transport-address")
    {
        if(local_transport_address != nullptr)
        {
            children["local-transport-address"] = local_transport_address;
        }
        else
        {
            local_transport_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress>();
            local_transport_address->parent = this;
            children["local-transport-address"] = local_transport_address;
        }
        return children.at("local-transport-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::get_children()
{
    if(children.find("local-src-address") == children.end())
    {
        if(local_src_address != nullptr)
        {
            children["local-src-address"] = local_src_address;
        }
    }

    if(children.find("local-transport-address") == children.end())
    {
        if(local_transport_address != nullptr)
        {
            children["local-transport-address"] = local_transport_address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::LocalSrcAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-src-address"; yang_parent_name = "discovery-link-af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::~LocalSrcAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-src-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalSrcAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalSrcAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::LocalTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-transport-address"; yang_parent_name = "discovery-link-af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::~LocalTransportAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf::LocalTransportAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Summary()
    :
    local_ldp_id{YType::str, "local-ldp-id"},
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_disc_with_bad_addr_recv{YType::uint32, "num-of-disc-with-bad-addr-recv"},
    num_of_disc_with_bad_hello_pdu{YType::uint32, "num-of-disc-with-bad-hello-pdu"},
    num_of_disc_with_bad_xport_addr{YType::uint32, "num-of-disc-with-bad-xport-addr"},
    num_of_disc_with_same_router_id{YType::uint32, "num-of-disc-with-same-router-id"},
    num_of_disc_with_wrong_router_id{YType::uint32, "num-of-disc-with-wrong-router-id"},
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "summary"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::~Summary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::has_data() const
{
    return local_ldp_id.is_set
	|| num_of_active_ldp_interfaces.is_set
	|| num_of_disc_with_bad_addr_recv.is_set
	|| num_of_disc_with_bad_hello_pdu.is_set
	|| num_of_disc_with_bad_xport_addr.is_set
	|| num_of_disc_with_same_router_id.is_set
	|| num_of_disc_with_wrong_router_id.is_set
	|| num_of_ldp_interfaces.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_recv.is_set
	|| num_of_tgt_disc_xmit.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(local_ldp_id.operation)
	|| is_set(num_of_active_ldp_interfaces.operation)
	|| is_set(num_of_disc_with_bad_addr_recv.operation)
	|| is_set(num_of_disc_with_bad_hello_pdu.operation)
	|| is_set(num_of_disc_with_bad_xport_addr.operation)
	|| is_set(num_of_disc_with_same_router_id.operation)
	|| is_set(num_of_disc_with_wrong_router_id.operation)
	|| is_set(num_of_ldp_interfaces.operation)
	|| is_set(num_of_lnk_disc_recv.operation)
	|| is_set(num_of_lnk_disc_xmit.operation)
	|| is_set(num_of_tgt_disc_recv.operation)
	|| is_set(num_of_tgt_disc_xmit.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ldp_id.is_set || is_set(local_ldp_id.operation)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_disc_with_bad_addr_recv.is_set || is_set(num_of_disc_with_bad_addr_recv.operation)) leaf_name_data.push_back(num_of_disc_with_bad_addr_recv.get_name_leafdata());
    if (num_of_disc_with_bad_hello_pdu.is_set || is_set(num_of_disc_with_bad_hello_pdu.operation)) leaf_name_data.push_back(num_of_disc_with_bad_hello_pdu.get_name_leafdata());
    if (num_of_disc_with_bad_xport_addr.is_set || is_set(num_of_disc_with_bad_xport_addr.operation)) leaf_name_data.push_back(num_of_disc_with_bad_xport_addr.get_name_leafdata());
    if (num_of_disc_with_same_router_id.is_set || is_set(num_of_disc_with_same_router_id.operation)) leaf_name_data.push_back(num_of_disc_with_same_router_id.get_name_leafdata());
    if (num_of_disc_with_wrong_router_id.is_set || is_set(num_of_disc_with_wrong_router_id.operation)) leaf_name_data.push_back(num_of_disc_with_wrong_router_id.get_name_leafdata());
    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.operation)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.operation)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.operation)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.operation)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::get_children()
{
    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv = value;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu = value;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr = value;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id = value;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id = value;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Summary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHellos()
{
    yang_name = "targeted-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::~TargetedHellos()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::has_data() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello.size(); index++)
    {
        if(targeted_hello[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hellos";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "targeted-hello")
    {
        for(auto const & c : targeted_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello>();
        c->parent = this;
        targeted_hello.push_back(std::move(c));
        children[segment_path] = targeted_hello.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::get_children()
{
    for (auto const & c : targeted_hello)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::TargetedHello()
    :
    adjacency_ldp_identifier{YType::str, "adjacency-ldp-identifier"},
    disc_expiry{YType::uint32, "disc-expiry"},
    established_age{YType::uint64, "established-age"},
    established_time{YType::uint64, "established-time"},
    hold_time{YType::uint32, "hold-time"},
    interval{YType::uint32, "interval"},
    local_address{YType::str, "local-address"},
    local_hold_time{YType::uint32, "local-hold-time"},
    neighbor_hold_time{YType::uint32, "neighbor-hold-time"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"},
    session_bringup_failure_reason{YType::str, "session-bringup-failure-reason"},
    session_up{YType::boolean, "session-up"},
    state{YType::enumeration, "state"},
    target_address{YType::str, "target-address"}
    	,
    dhcb_local_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress>())
	,dhcb_target_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress>())
{
    dhcb_local_address->parent = this;
    children["dhcb-local-address"] = dhcb_local_address;

    dhcb_target_address->parent = this;
    children["dhcb-target-address"] = dhcb_target_address;

    yang_name = "targeted-hello"; yang_parent_name = "targeted-hellos";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_data() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_data())
            return true;
    }
    return adjacency_ldp_identifier.is_set
	|| disc_expiry.is_set
	|| established_age.is_set
	|| established_time.is_set
	|| hold_time.is_set
	|| interval.is_set
	|| local_address.is_set
	|| local_hold_time.is_set
	|| neighbor_hold_time.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| session_bringup_failure_reason.is_set
	|| session_up.is_set
	|| state.is_set
	|| target_address.is_set
	|| (dhcb_local_address !=  nullptr && dhcb_local_address->has_data())
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::has_operation() const
{
    for (std::size_t index=0; index<last_session_down_info.size(); index++)
    {
        if(last_session_down_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(adjacency_ldp_identifier.operation)
	|| is_set(disc_expiry.operation)
	|| is_set(established_age.operation)
	|| is_set(established_time.operation)
	|| is_set(hold_time.operation)
	|| is_set(interval.operation)
	|| is_set(local_address.operation)
	|| is_set(local_hold_time.operation)
	|| is_set(neighbor_hold_time.operation)
	|| is_set(next_hello.operation)
	|| is_set(quick_start_disabled.operation)
	|| is_set(session_bringup_failure_reason.operation)
	|| is_set(session_up.operation)
	|| is_set(state.operation)
	|| is_set(target_address.operation)
	|| (dhcb_local_address !=  nullptr && dhcb_local_address->has_operation())
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_ldp_identifier.is_set || is_set(adjacency_ldp_identifier.operation)) leaf_name_data.push_back(adjacency_ldp_identifier.get_name_leafdata());
    if (disc_expiry.is_set || is_set(disc_expiry.operation)) leaf_name_data.push_back(disc_expiry.get_name_leafdata());
    if (established_age.is_set || is_set(established_age.operation)) leaf_name_data.push_back(established_age.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.operation)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_hold_time.is_set || is_set(local_hold_time.operation)) leaf_name_data.push_back(local_hold_time.get_name_leafdata());
    if (neighbor_hold_time.is_set || is_set(neighbor_hold_time.operation)) leaf_name_data.push_back(neighbor_hold_time.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.operation)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());
    if (session_bringup_failure_reason.is_set || is_set(session_bringup_failure_reason.operation)) leaf_name_data.push_back(session_bringup_failure_reason.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.operation)) leaf_name_data.push_back(target_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcb-local-address")
    {
        if(dhcb_local_address != nullptr)
        {
            children["dhcb-local-address"] = dhcb_local_address;
        }
        else
        {
            dhcb_local_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress>();
            dhcb_local_address->parent = this;
            children["dhcb-local-address"] = dhcb_local_address;
        }
        return children.at("dhcb-local-address");
    }

    if(child_yang_name == "dhcb-target-address")
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
        else
        {
            dhcb_target_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress>();
            dhcb_target_address->parent = this;
            children["dhcb-target-address"] = dhcb_target_address;
        }
        return children.at("dhcb-target-address");
    }

    if(child_yang_name == "last-session-down-info")
    {
        for(auto const & c : last_session_down_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo>();
        c->parent = this;
        last_session_down_info.push_back(std::move(c));
        children[segment_path] = last_session_down_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::get_children()
{
    if(children.find("dhcb-local-address") == children.end())
    {
        if(dhcb_local_address != nullptr)
        {
            children["dhcb-local-address"] = dhcb_local_address;
        }
    }

    if(children.find("dhcb-target-address") == children.end())
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
    }

    for (auto const & c : last_session_down_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-ldp-identifier")
    {
        adjacency_ldp_identifier = value;
    }
    if(value_path == "disc-expiry")
    {
        disc_expiry = value;
    }
    if(value_path == "established-age")
    {
        established_age = value;
    }
    if(value_path == "established-time")
    {
        established_time = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "local-hold-time")
    {
        local_hold_time = value;
    }
    if(value_path == "neighbor-hold-time")
    {
        neighbor_hold_time = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
    }
    if(value_path == "session-bringup-failure-reason")
    {
        session_bringup_failure_reason = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "target-address")
    {
        target_address = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::DhcbLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-local-address"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::~DhcbLocalAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-local-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbLocalAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::DhcbTargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-target-address"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::~DhcbTargetAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbTargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::DhcbTargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::LastSessionDownInfo()
    :
    last_session_down_reason{YType::str, "last-session-down-reason"},
    last_session_down_time{YType::uint64, "last-session-down-time"},
    last_session_up_time{YType::uint32, "last-session-up-time"}
{
    yang_name = "last-session-down-info"; yang_parent_name = "targeted-hello";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::~LastSessionDownInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_data() const
{
    return last_session_down_reason.is_set
	|| last_session_down_time.is_set
	|| last_session_up_time.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(last_session_down_reason.operation)
	|| is_set(last_session_down_time.operation)
	|| is_set(last_session_up_time.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-session-down-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastSessionDownInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_session_down_reason.is_set || is_set(last_session_down_reason.operation)) leaf_name_data.push_back(last_session_down_reason.get_name_leafdata());
    if (last_session_down_time.is_set || is_set(last_session_down_time.operation)) leaf_name_data.push_back(last_session_down_time.get_name_leafdata());
    if (last_session_up_time.is_set || is_set(last_session_up_time.operation)) leaf_name_data.push_back(last_session_up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::TargetedHellos::TargetedHello::LastSessionDownInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-session-down-reason")
    {
        last_session_down_reason = value;
    }
    if(value_path == "last-session-down-time")
    {
        last_session_down_time = value;
    }
    if(value_path == "last-session-up-time")
    {
        last_session_up_time = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::Brief()
    :
    link_hello_briefs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs>())
	,targeted_hello_briefs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs>())
{
    link_hello_briefs->parent = this;
    children["link-hello-briefs"] = link_hello_briefs;

    targeted_hello_briefs->parent = this;
    children["targeted-hello-briefs"] = targeted_hello_briefs;

    yang_name = "brief"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::~Brief()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::has_data() const
{
    return (link_hello_briefs !=  nullptr && link_hello_briefs->has_data())
	|| (targeted_hello_briefs !=  nullptr && targeted_hello_briefs->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::has_operation() const
{
    return is_set(operation)
	|| (link_hello_briefs !=  nullptr && link_hello_briefs->has_operation())
	|| (targeted_hello_briefs !=  nullptr && targeted_hello_briefs->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-briefs")
    {
        if(link_hello_briefs != nullptr)
        {
            children["link-hello-briefs"] = link_hello_briefs;
        }
        else
        {
            link_hello_briefs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs>();
            link_hello_briefs->parent = this;
            children["link-hello-briefs"] = link_hello_briefs;
        }
        return children.at("link-hello-briefs");
    }

    if(child_yang_name == "targeted-hello-briefs")
    {
        if(targeted_hello_briefs != nullptr)
        {
            children["targeted-hello-briefs"] = targeted_hello_briefs;
        }
        else
        {
            targeted_hello_briefs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs>();
            targeted_hello_briefs->parent = this;
            children["targeted-hello-briefs"] = targeted_hello_briefs;
        }
        return children.at("targeted-hello-briefs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::get_children()
{
    if(children.find("link-hello-briefs") == children.end())
    {
        if(link_hello_briefs != nullptr)
        {
            children["link-hello-briefs"] = link_hello_briefs;
        }
    }

    if(children.find("targeted-hello-briefs") == children.end())
    {
        if(targeted_hello_briefs != nullptr)
        {
            children["targeted-hello-briefs"] = targeted_hello_briefs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBriefs()
{
    yang_name = "link-hello-briefs"; yang_parent_name = "brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::~LinkHelloBriefs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_data() const
{
    for (std::size_t index=0; index<link_hello_brief.size(); index++)
    {
        if(link_hello_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::has_operation() const
{
    for (std::size_t index=0; index<link_hello_brief.size(); index++)
    {
        if(link_hello_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-briefs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-brief")
    {
        for(auto const & c : link_hello_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief>();
        c->parent = this;
        link_hello_brief.push_back(std::move(c));
        children[segment_path] = link_hello_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::get_children()
{
    for (auto const & c : link_hello_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::LinkHelloBrief()
    :
    interface_name{YType::str, "interface-name"},
    address_family{YType::enumeration, "address-family"},
    address_family_set{YType::enumeration, "address-family-set"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "link-hello-brief"; yang_parent_name = "link-hello-briefs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::~LinkHelloBrief()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_data() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| address_family.is_set
	|| address_family_set.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::has_operation() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(address_family.operation)
	|| is_set(address_family_set.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (address_family_set.is_set || is_set(address_family_set.operation)) leaf_name_data.push_back(address_family_set.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::get_children()
{
    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "address-family-set")
    {
        address_family_set = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "link-hello-brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::HelloInformation()
    :
    hold_time{YType::uint32, "hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_up{YType::boolean, "session-up"}
{
    yang_name = "hello-information"; yang_parent_name = "link-hello-brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_data() const
{
    return hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_up.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(session_up.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::LinkHelloBriefs::LinkHelloBrief::HelloInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBriefs()
{
    yang_name = "targeted-hello-briefs"; yang_parent_name = "brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::~TargetedHelloBriefs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_data() const
{
    for (std::size_t index=0; index<targeted_hello_brief.size(); index++)
    {
        if(targeted_hello_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::has_operation() const
{
    for (std::size_t index=0; index<targeted_hello_brief.size(); index++)
    {
        if(targeted_hello_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-briefs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "targeted-hello-brief")
    {
        for(auto const & c : targeted_hello_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief>();
        c->parent = this;
        targeted_hello_brief.push_back(std::move(c));
        children[segment_path] = targeted_hello_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::get_children()
{
    for (auto const & c : targeted_hello_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::TargetedHelloBrief()
    :
    address_family{YType::enumeration, "address-family"},
    local_address{YType::str, "local-address"},
    target_address{YType::str, "target-address"}
    	,
    dhcb_target_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf>())
{
    dhcb_target_address->parent = this;
    children["dhcb-target-address"] = dhcb_target_address;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "targeted-hello-brief"; yang_parent_name = "targeted-hello-briefs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::~TargetedHelloBrief()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_data() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| local_address.is_set
	|| target_address.is_set
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::has_operation() const
{
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(local_address.operation)
	|| is_set(target_address.operation)
	|| (dhcb_target_address !=  nullptr && dhcb_target_address->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-brief";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetedHelloBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (target_address.is_set || is_set(target_address.operation)) leaf_name_data.push_back(target_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcb-target-address")
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
        else
        {
            dhcb_target_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress>();
            dhcb_target_address->parent = this;
            children["dhcb-target-address"] = dhcb_target_address;
        }
        return children.at("dhcb-target-address");
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::get_children()
{
    if(children.find("dhcb-target-address") == children.end())
    {
        if(dhcb_target_address != nullptr)
        {
            children["dhcb-target-address"] = dhcb_target_address;
        }
    }

    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "target-address")
    {
        target_address = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::DhcbTargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dhcb-target-address"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::~DhcbTargetAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcb-target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcbTargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::DhcbTargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::HelloInformation()
    :
    hold_time{YType::uint32, "hold-time"},
    neighbor_ldp_identifier{YType::str, "neighbor-ldp-identifier"},
    session_up{YType::boolean, "session-up"}
{
    yang_name = "hello-information"; yang_parent_name = "targeted-hello-brief";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::~HelloInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_data() const
{
    return hold_time.is_set
	|| neighbor_ldp_identifier.is_set
	|| session_up.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(neighbor_ldp_identifier.operation)
	|| is_set(session_up.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (neighbor_ldp_identifier.is_set || is_set(neighbor_ldp_identifier.operation)) leaf_name_data.push_back(neighbor_ldp_identifier.get_name_leafdata());
    if (session_up.is_set || is_set(session_up.operation)) leaf_name_data.push_back(session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Brief::TargetedHelloBriefs::TargetedHelloBrief::HelloInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "neighbor-ldp-identifier")
    {
        neighbor_ldp_identifier = value;
    }
    if(value_path == "session-up")
    {
        session_up = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stats()
{
    yang_name = "stats"; yang_parent_name = "discovery";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::~Stats()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::has_data() const
{
    for (std::size_t index=0; index<stat.size(); index++)
    {
        if(stat[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::has_operation() const
{
    for (std::size_t index=0; index<stat.size(); index++)
    {
        if(stat[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stat")
    {
        for(auto const & c : stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat>();
        c->parent = this;
        stat.push_back(std::move(c));
        children[segment_path] = stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::get_children()
{
    for (auto const & c : stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::Stat()
    :
    adjacency_group_up_time{YType::uint32, "adjacency-group-up-time"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    tcp_arb_chg_count{YType::uint32, "tcp-arb-chg-count"},
    tcp_open_count{YType::uint32, "tcp-open-count"},
    tcp_role{YType::uint32, "tcp-role"}
{
    yang_name = "stat"; yang_parent_name = "stats";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::~Stat()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::has_data() const
{
    return adjacency_group_up_time.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| tcp_arb_chg_count.is_set
	|| tcp_open_count.is_set
	|| tcp_role.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_group_up_time.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(tcp_arb_chg_count.operation)
	|| is_set(tcp_open_count.operation)
	|| is_set(tcp_role.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stat' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_group_up_time.is_set || is_set(adjacency_group_up_time.operation)) leaf_name_data.push_back(adjacency_group_up_time.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (tcp_arb_chg_count.is_set || is_set(tcp_arb_chg_count.operation)) leaf_name_data.push_back(tcp_arb_chg_count.get_name_leafdata());
    if (tcp_open_count.is_set || is_set(tcp_open_count.operation)) leaf_name_data.push_back(tcp_open_count.get_name_leafdata());
    if (tcp_role.is_set || is_set(tcp_role.operation)) leaf_name_data.push_back(tcp_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Discovery::Stats::Stat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-group-up-time")
    {
        adjacency_group_up_time = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "tcp-arb-chg-count")
    {
        tcp_arb_chg_count = value;
    }
    if(value_path == "tcp-open-count")
    {
        tcp_open_count = value;
    }
    if(value_path == "tcp-role")
    {
        tcp_role = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindingsSummaryAll()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "bindings-summary-all"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::~BindingsSummaryAll()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary-all";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummaryAll' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf>();
        c->parent = this;
        bind_af.push_back(std::move(c));
        children[segment_path] = bind_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::get_children()
{
    for (auto const & c : bind_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary-all";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(last_lib_update.operation)
	|| is_set(lib_minimum_revision_sent_all.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.operation)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.operation)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsSummaryAll::BindAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwardings()
{
    yang_name = "forwardings"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::~Forwardings()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::has_data() const
{
    for (std::size_t index=0; index<forwarding.size(); index++)
    {
        if(forwarding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::has_operation() const
{
    for (std::size_t index=0; index<forwarding.size(); index++)
    {
        if(forwarding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwardings";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwardings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding")
    {
        for(auto const & c : forwarding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding>();
        c->parent = this;
        forwarding.push_back(std::move(c));
        children[segment_path] = forwarding.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::get_children()
{
    for (auto const & c : forwarding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Forwarding()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    table_id{YType::uint32, "table-id"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr>())
	,route(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf>())
{
    prefix_xr->parent = this;
    children["prefix-xr"] = prefix_xr;

    route->parent = this;
    children["route"] = route;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "forwarding"; yang_parent_name = "forwardings";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::~Forwarding()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::has_data() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| table_id.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::has_operation() const
{
    for (std::size_t index=0; index<paths.size(); index++)
    {
        if(paths[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(table_id.operation)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "paths")
    {
        for(auto const & c : paths)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths>();
        c->parent = this;
        paths.push_back(std::move(c));
        children[segment_path] = paths.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
        else
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr>();
            prefix_xr->parent = this;
            children["prefix-xr"] = prefix_xr;
        }
        return children.at("prefix-xr");
    }

    if(child_yang_name == "route")
    {
        if(route != nullptr)
        {
            children["route"] = route;
        }
        else
        {
            route = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route>();
            route->parent = this;
            children["route"] = route;
        }
        return children.at("route");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::get_children()
{
    for (auto const & c : paths)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("prefix-xr") == children.end())
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
    }

    if(children.find("route") == children.end())
    {
        if(route != nullptr)
        {
            children["route"] = route;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::PrefixXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Route()
    :
    mpls(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls>())
	,routing(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing>())
{
    mpls->parent = this;
    children["mpls"] = mpls;

    routing->parent = this;
    children["routing"] = routing;

    yang_name = "route"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::~Route()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "routing")
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
        else
        {
            routing = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing>();
            routing->parent = this;
            children["routing"] = routing;
        }
        return children.at("routing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::get_children()
{
    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("routing") == children.end())
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::Routing()
    :
    flags{YType::uint32, "flags"},
    is_local_vrf_leaked{YType::boolean, "is-local-vrf-leaked"},
    metric{YType::uint32, "metric"},
    priority{YType::uint8, "priority"},
    routing_update_age{YType::uint64, "routing-update-age"},
    routing_update_count{YType::uint32, "routing-update-count"},
    routing_update_timestamp{YType::uint64, "routing-update-timestamp"},
    source{YType::uint16, "source"},
    sr_local_label{YType::uint32, "sr-local-label"},
    type{YType::uint16, "type"},
    version{YType::uint32, "version"}
{
    yang_name = "routing"; yang_parent_name = "route";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::~Routing()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_data() const
{
    return flags.is_set
	|| is_local_vrf_leaked.is_set
	|| metric.is_set
	|| priority.is_set
	|| routing_update_age.is_set
	|| routing_update_count.is_set
	|| routing_update_timestamp.is_set
	|| source.is_set
	|| sr_local_label.is_set
	|| type.is_set
	|| version.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(is_local_vrf_leaked.operation)
	|| is_set(metric.operation)
	|| is_set(priority.operation)
	|| is_set(routing_update_age.operation)
	|| is_set(routing_update_count.operation)
	|| is_set(routing_update_timestamp.operation)
	|| is_set(source.operation)
	|| is_set(sr_local_label.operation)
	|| is_set(type.operation)
	|| is_set(version.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_local_vrf_leaked.is_set || is_set(is_local_vrf_leaked.operation)) leaf_name_data.push_back(is_local_vrf_leaked.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (routing_update_age.is_set || is_set(routing_update_age.operation)) leaf_name_data.push_back(routing_update_age.get_name_leafdata());
    if (routing_update_count.is_set || is_set(routing_update_count.operation)) leaf_name_data.push_back(routing_update_count.get_name_leafdata());
    if (routing_update_timestamp.is_set || is_set(routing_update_timestamp.operation)) leaf_name_data.push_back(routing_update_timestamp.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.operation)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Routing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age = value;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count = value;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::Mpls()
    :
    forwarding_update_age{YType::uint64, "forwarding-update-age"},
    forwarding_update_count{YType::uint32, "forwarding-update-count"},
    forwarding_update_timestamp{YType::uint64, "forwarding-update-timestamp"},
    local_label{YType::uint32, "local-label"}
{
    yang_name = "mpls"; yang_parent_name = "route";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_data() const
{
    return forwarding_update_age.is_set
	|| forwarding_update_count.is_set
	|| forwarding_update_timestamp.is_set
	|| local_label.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_update_age.operation)
	|| is_set(forwarding_update_count.operation)
	|| is_set(forwarding_update_timestamp.operation)
	|| is_set(local_label.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_update_age.is_set || is_set(forwarding_update_age.operation)) leaf_name_data.push_back(forwarding_update_age.get_name_leafdata());
    if (forwarding_update_count.is_set || is_set(forwarding_update_count.operation)) leaf_name_data.push_back(forwarding_update_count.get_name_leafdata());
    if (forwarding_update_timestamp.is_set || is_set(forwarding_update_timestamp.operation)) leaf_name_data.push_back(forwarding_update_timestamp.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age = value;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count = value;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Paths()
    :
    mpls(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls>())
	,routing(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing>())
{
    mpls->parent = this;
    children["mpls"] = mpls;

    routing->parent = this;
    children["routing"] = routing;

    yang_name = "paths"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::~Paths()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "routing")
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
        else
        {
            routing = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing>();
            routing->parent = this;
            children["routing"] = routing;
        }
        return children.at("routing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::get_children()
{
    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("routing") == children.end())
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::Routing()
    :
    bkup_path_id{YType::uint8, "bkup-path-id"},
    flags{YType::uint32, "flags"},
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    load_metric{YType::uint32, "load-metric"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    nexthop_id{YType::uint32, "nexthop-id"},
    nh_is_overriden{YType::boolean, "nh-is-overriden"},
    path_flags{YType::enumeration, "path-flags"},
    path_id{YType::uint8, "path-id"}
    	,
    next_hop(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop>())
	,remote_lfa(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa>())
{
    next_hop->parent = this;
    children["next-hop"] = next_hop;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    yang_name = "routing"; yang_parent_name = "paths";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::~Routing()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_data() const
{
    return bkup_path_id.is_set
	|| flags.is_set
	|| interface.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| next_hop_table_id.is_set
	|| nexthop_id.is_set
	|| nh_is_overriden.is_set
	|| path_flags.is_set
	|| path_id.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_operation() const
{
    return is_set(operation)
	|| is_set(bkup_path_id.operation)
	|| is_set(flags.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation)
	|| is_set(load_metric.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(nexthop_id.operation)
	|| is_set(nh_is_overriden.operation)
	|| is_set(path_flags.operation)
	|| is_set(path_id.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bkup_path_id.is_set || is_set(bkup_path_id.operation)) leaf_name_data.push_back(bkup_path_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (nexthop_id.is_set || is_set(nexthop_id.operation)) leaf_name_data.push_back(nexthop_id.get_name_leafdata());
    if (nh_is_overriden.is_set || is_set(nh_is_overriden.operation)) leaf_name_data.push_back(nh_is_overriden.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.operation)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_children()
{
    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bkup-path-id")
    {
        bkup_path_id = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id = value;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden = value;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "next-hop"; yang_parent_name = "routing";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::~NextHop()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteLfa()
    :
    has_q_node{YType::boolean, "has-q-node"},
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"},
    needs_tldp{YType::boolean, "needs-tldp"}
    	,
    remote_p_node_id(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId>())
	,remote_q_node_id(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId>())
{
    remote_p_node_id->parent = this;
    children["remote-p-node-id"] = remote_p_node_id;

    remote_q_node_id->parent = this;
    children["remote-q-node-id"] = remote_q_node_id;

    yang_name = "remote-lfa"; yang_parent_name = "routing";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_data() const
{
    return has_q_node.is_set
	|| has_remote_lfa_bkup.is_set
	|| needs_tldp.is_set
	|| (remote_p_node_id !=  nullptr && remote_p_node_id->has_data())
	|| (remote_q_node_id !=  nullptr && remote_q_node_id->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(has_q_node.operation)
	|| is_set(has_remote_lfa_bkup.operation)
	|| is_set(needs_tldp.operation)
	|| (remote_p_node_id !=  nullptr && remote_p_node_id->has_operation())
	|| (remote_q_node_id !=  nullptr && remote_q_node_id->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_q_node.is_set || is_set(has_q_node.operation)) leaf_name_data.push_back(has_q_node.get_name_leafdata());
    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.operation)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());
    if (needs_tldp.is_set || is_set(needs_tldp.operation)) leaf_name_data.push_back(needs_tldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-p-node-id")
    {
        if(remote_p_node_id != nullptr)
        {
            children["remote-p-node-id"] = remote_p_node_id;
        }
        else
        {
            remote_p_node_id = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId>();
            remote_p_node_id->parent = this;
            children["remote-p-node-id"] = remote_p_node_id;
        }
        return children.at("remote-p-node-id");
    }

    if(child_yang_name == "remote-q-node-id")
    {
        if(remote_q_node_id != nullptr)
        {
            children["remote-q-node-id"] = remote_q_node_id;
        }
        else
        {
            remote_q_node_id = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId>();
            remote_q_node_id->parent = this;
            children["remote-q-node-id"] = remote_q_node_id;
        }
        return children.at("remote-q-node-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_children()
{
    if(children.find("remote-p-node-id") == children.end())
    {
        if(remote_p_node_id != nullptr)
        {
            children["remote-p-node-id"] = remote_p_node_id;
        }
    }

    if(children.find("remote-q-node-id") == children.end())
    {
        if(remote_q_node_id != nullptr)
        {
            children["remote-q-node-id"] = remote_q_node_id;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-q-node")
    {
        has_q_node = value;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
    }
    if(value_path == "needs-tldp")
    {
        needs_tldp = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::RemotePNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "remote-p-node-id"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::~RemotePNodeId()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-p-node-id";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePNodeId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::RemoteQNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "remote-q-node-id"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::~RemoteQNodeId()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-q-node-id";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteQNodeId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::Mpls()
    :
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>())
	,remote_lfa(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>())
{
    mpls_outgoing_info->parent = this;
    children["mpls-outgoing-info"] = mpls_outgoing_info;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    yang_name = "mpls"; yang_parent_name = "paths";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_data() const
{
    return (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_operation() const
{
    return is_set(operation)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        else
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>();
            mpls_outgoing_info->parent = this;
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        return children.at("mpls-outgoing-info");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_children()
{
    if(children.find("mpls-outgoing-info") == children.end())
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;
    children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "mpls";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_from_graceful_restartable_neighbor.operation)
	|| is_set(is_stale.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_owner.operation)
	|| is_set(out_label_rsn.operation)
	|| is_set(out_label_type.operation)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.operation)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.operation)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.operation)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.operation)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        else
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>();
            nexthop_peer_ldp_ident->parent = this;
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        return children.at("nexthop-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_children()
{
    if(children.find("nexthop-peer-ldp-ident") == children.end())
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::RemoteLfa()
    :
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"}
    	,
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>())
{
    mpls_outgoing_info->parent = this;
    children["mpls-outgoing-info"] = mpls_outgoing_info;

    yang_name = "remote-lfa"; yang_parent_name = "mpls";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_data() const
{
    return has_remote_lfa_bkup.is_set
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(has_remote_lfa_bkup.operation)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.operation)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        else
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>();
            mpls_outgoing_info->parent = this;
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        return children.at("mpls-outgoing-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_children()
{
    if(children.find("mpls-outgoing-info") == children.end())
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::MplsOutgoingInfo()
{
    yang_name = "mpls-outgoing-info"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_data() const
{
    for (std::size_t index=0; index<stack.size(); index++)
    {
        if(stack[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_operation() const
{
    for (std::size_t index=0; index<stack.size(); index++)
    {
        if(stack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stack")
    {
        for(auto const & c : stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack>();
        c->parent = this;
        stack.push_back(std::move(c));
        children[segment_path] = stack.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_children()
{
    for (auto const & c : stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::Stack()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;
    children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;

    yang_name = "stack"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::~Stack()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_operation() const
{
    return is_set(operation)
	|| is_set(is_from_graceful_restartable_neighbor.operation)
	|| is_set(is_stale.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_owner.operation)
	|| is_set(out_label_rsn.operation)
	|| is_set(out_label_type.operation)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.operation)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.operation)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.operation)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.operation)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        else
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>();
            nexthop_peer_ldp_ident->parent = this;
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        return children.at("nexthop-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_children()
{
    if(children.find("nexthop-peer-ldp-ident") == children.end())
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "stack";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::BindingsAdvertiseSpec()
    :
    allocation_acl(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>())
{
    allocation_acl->parent = this;
    children["allocation-acl"] = allocation_acl;

    yang_name = "bindings-advertise-spec"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::~BindingsAdvertiseSpec()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::has_data() const
{
    for (std::size_t index=0; index<advt_acl.size(); index++)
    {
        if(advt_acl[index]->has_data())
            return true;
    }
    return (allocation_acl !=  nullptr && allocation_acl->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::has_operation() const
{
    for (std::size_t index=0; index<advt_acl.size(); index++)
    {
        if(advt_acl[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (allocation_acl !=  nullptr && allocation_acl->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-advertise-spec";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsAdvertiseSpec' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advt-acl")
    {
        for(auto const & c : advt_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl>();
        c->parent = this;
        advt_acl.push_back(std::move(c));
        children[segment_path] = advt_acl.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "allocation-acl")
    {
        if(allocation_acl != nullptr)
        {
            children["allocation-acl"] = allocation_acl;
        }
        else
        {
            allocation_acl = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>();
            allocation_acl->parent = this;
            children["allocation-acl"] = allocation_acl;
        }
        return children.at("allocation-acl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::get_children()
{
    for (auto const & c : advt_acl)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("allocation-acl") == children.end())
    {
        if(allocation_acl != nullptr)
        {
            children["allocation-acl"] = allocation_acl;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::AllocationAcl()
    :
    has_acl{YType::boolean, "has-acl"},
    is_host_route_only{YType::boolean, "is-host-route-only"},
    prefix_acl{YType::str, "prefix-acl"}
{
    yang_name = "allocation-acl"; yang_parent_name = "bindings-advertise-spec";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::~AllocationAcl()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_data() const
{
    return has_acl.is_set
	|| is_host_route_only.is_set
	|| prefix_acl.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(has_acl.operation)
	|| is_set(is_host_route_only.operation)
	|| is_set(prefix_acl.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-acl";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocationAcl' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_acl.is_set || is_set(has_acl.operation)) leaf_name_data.push_back(has_acl.get_name_leafdata());
    if (is_host_route_only.is_set || is_set(is_host_route_only.operation)) leaf_name_data.push_back(is_host_route_only.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.operation)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-acl")
    {
        has_acl = value;
    }
    if(value_path == "is-host-route-only")
    {
        is_host_route_only = value;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::AdvtAcl()
    :
    peer_acl{YType::str, "peer-acl"},
    prefix_acl{YType::str, "prefix-acl"}
{
    yang_name = "advt-acl"; yang_parent_name = "bindings-advertise-spec";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::~AdvtAcl()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_data() const
{
    return peer_acl.is_set
	|| prefix_acl.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_acl.operation)
	|| is_set(prefix_acl.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advt-acl";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvtAcl' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl.is_set || is_set(peer_acl.operation)) leaf_name_data.push_back(peer_acl.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.operation)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-acl")
    {
        peer_acl = value;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::ForwardingSummary()
    :
    fsht{YType::uint16, "fsht"},
    intfs{YType::uint16, "intfs"},
    is_lsd_bound{YType::boolean, "is-lsd-bound"},
    lbls{YType::uint16, "lbls"}
    	,
    rws(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf>())
{
    rws->parent = this;
    children["rws"] = rws;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "forwarding-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::has_data() const
{
    return fsht.is_set
	|| intfs.is_set
	|| is_lsd_bound.is_set
	|| lbls.is_set
	|| (rws !=  nullptr && rws->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(fsht.operation)
	|| is_set(intfs.operation)
	|| is_set(is_lsd_bound.operation)
	|| is_set(lbls.operation)
	|| (rws !=  nullptr && rws->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsht.is_set || is_set(fsht.operation)) leaf_name_data.push_back(fsht.get_name_leafdata());
    if (intfs.is_set || is_set(intfs.operation)) leaf_name_data.push_back(intfs.get_name_leafdata());
    if (is_lsd_bound.is_set || is_set(is_lsd_bound.operation)) leaf_name_data.push_back(is_lsd_bound.get_name_leafdata());
    if (lbls.is_set || is_set(lbls.operation)) leaf_name_data.push_back(lbls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rws")
    {
        if(rws != nullptr)
        {
            children["rws"] = rws;
        }
        else
        {
            rws = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws>();
            rws->parent = this;
            children["rws"] = rws;
        }
        return children.at("rws");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::get_children()
{
    if(children.find("rws") == children.end())
    {
        if(rws != nullptr)
        {
            children["rws"] = rws;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsht")
    {
        fsht = value;
    }
    if(value_path == "intfs")
    {
        intfs = value;
    }
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound = value;
    }
    if(value_path == "lbls")
    {
        lbls = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Rws()
    :
    nhs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs>())
	,pfxs(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs>())
{
    nhs->parent = this;
    children["nhs"] = nhs;

    pfxs->parent = this;
    children["pfxs"] = pfxs;

    yang_name = "rws"; yang_parent_name = "forwarding-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::~Rws()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::has_data() const
{
    return (nhs !=  nullptr && nhs->has_data())
	|| (pfxs !=  nullptr && pfxs->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::has_operation() const
{
    return is_set(operation)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (pfxs !=  nullptr && pfxs->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rws";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rws' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nhs")
    {
        if(nhs != nullptr)
        {
            children["nhs"] = nhs;
        }
        else
        {
            nhs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs>();
            nhs->parent = this;
            children["nhs"] = nhs;
        }
        return children.at("nhs");
    }

    if(child_yang_name == "pfxs")
    {
        if(pfxs != nullptr)
        {
            children["pfxs"] = pfxs;
        }
        else
        {
            pfxs = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs>();
            pfxs->parent = this;
            children["pfxs"] = pfxs;
        }
        return children.at("pfxs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::get_children()
{
    if(children.find("nhs") == children.end())
    {
        if(nhs != nullptr)
        {
            children["nhs"] = nhs;
        }
    }

    if(children.find("pfxs") == children.end())
    {
        if(pfxs != nullptr)
        {
            children["pfxs"] = pfxs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::Pfxs()
    :
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"},
    total_pfxs{YType::uint16, "total-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>())
{
    labeled_pfxs_aggr->parent = this;
    children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;

    labeled_pfxs_backup->parent = this;
    children["labeled-pfxs-backup"] = labeled_pfxs_backup;

    labeled_pfxs_primary->parent = this;
    children["labeled-pfxs-primary"] = labeled_pfxs_primary;

    yang_name = "pfxs"; yang_parent_name = "rws";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::~Pfxs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_data() const
{
    return ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| total_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_operation() const
{
    return is_set(operation)
	|| is_set(ecmp_pfxs.operation)
	|| is_set(protected_pfxs.operation)
	|| is_set(total_pfxs.operation)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfxs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.operation)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.operation)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());
    if (total_pfxs.is_set || is_set(total_pfxs.operation)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr != nullptr)
        {
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
        else
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>();
            labeled_pfxs_aggr->parent = this;
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
        return children.at("labeled-pfxs-aggr");
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup != nullptr)
        {
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
        else
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>();
            labeled_pfxs_backup->parent = this;
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
        return children.at("labeled-pfxs-backup");
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary != nullptr)
        {
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
        else
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>();
            labeled_pfxs_primary->parent = this;
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
        return children.at("labeled-pfxs-primary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_children()
{
    if(children.find("labeled-pfxs-aggr") == children.end())
    {
        if(labeled_pfxs_aggr != nullptr)
        {
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
    }

    if(children.find("labeled-pfxs-backup") == children.end())
    {
        if(labeled_pfxs_backup != nullptr)
        {
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
    }

    if(children.find("labeled-pfxs-primary") == children.end())
    {
        if(labeled_pfxs_primary != nullptr)
        {
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsAggr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsPrimary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsBackup' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::Nhs()
    :
    backup_paths{YType::uint32, "backup-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    total_paths{YType::uint32, "total-paths"}
{
    yang_name = "nhs"; yang_parent_name = "rws";
}

MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::~Nhs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_data() const
{
    return backup_paths.is_set
	|| labeled_backup_paths.is_set
	|| labeled_paths.is_set
	|| protected_paths.is_set
	|| remote_backup_paths.is_set
	|| total_paths.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_paths.operation)
	|| is_set(labeled_backup_paths.operation)
	|| is_set(labeled_paths.operation)
	|| is_set(protected_paths.operation)
	|| is_set(remote_backup_paths.operation)
	|| is_set(total_paths.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_paths.is_set || is_set(backup_paths.operation)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.operation)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.operation)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.operation)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.operation)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Afs::Af::ForwardingSummary::Rws::Nhs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-paths")
    {
        backup_paths = value;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBriefs()
{
    yang_name = "neighbor-briefs"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::~NeighborBriefs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<neighbor_brief.size(); index++)
    {
        if(neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_brief.size(); index++)
    {
        if(neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-briefs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-brief")
    {
        for(auto const & c : neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief>();
        c->parent = this;
        neighbor_brief.push_back(std::move(c));
        children[segment_path] = neighbor_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::get_children()
{
    for (auto const & c : neighbor_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NeighborBrief()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    nsr_state{YType::enumeration, "nsr-state"},
    up_time_seconds{YType::uint32, "up-time-seconds"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "neighbor-brief"; yang_parent_name = "neighbor-briefs";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::~NeighborBrief()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::has_data() const
{
    for (std::size_t index=0; index<nbr_br_af_info.size(); index++)
    {
        if(nbr_br_af_info[index]->has_data())
            return true;
    }
    return is_graceful_restartable.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| nsr_state.is_set
	|| up_time_seconds.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<nbr_br_af_info.size(); index++)
    {
        if(nbr_br_af_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_graceful_restartable.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(nsr_state.operation)
	|| is_set(up_time_seconds.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-brief";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbor-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.operation)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (up_time_seconds.is_set || is_set(up_time_seconds.operation)) leaf_name_data.push_back(up_time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nbr-br-af-info")
    {
        for(auto const & c : nbr_br_af_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo>();
        c->parent = this;
        nbr_br_af_info.push_back(std::move(c));
        children[segment_path] = nbr_br_af_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::get_children()
{
    for (auto const & c : nbr_br_af_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "neighbor-brief";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbor-briefs/neighbor-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::NbrBrAfInfo()
    :
    address_family{YType::enumeration, "address-family"},
    num_of_nbr_addresses{YType::uint32, "num-of-nbr-addresses"},
    num_of_nbr_discovery{YType::uint32, "num-of-nbr-discovery"},
    num_of_nbr_lbl{YType::uint32, "num-of-nbr-lbl"}
{
    yang_name = "nbr-br-af-info"; yang_parent_name = "neighbor-brief";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::~NbrBrAfInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_data() const
{
    return address_family.is_set
	|| num_of_nbr_addresses.is_set
	|| num_of_nbr_discovery.is_set
	|| num_of_nbr_lbl.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(num_of_nbr_addresses.operation)
	|| is_set(num_of_nbr_discovery.operation)
	|| is_set(num_of_nbr_lbl.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-br-af-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbor-briefs/neighbor-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (num_of_nbr_addresses.is_set || is_set(num_of_nbr_addresses.operation)) leaf_name_data.push_back(num_of_nbr_addresses.get_name_leafdata());
    if (num_of_nbr_discovery.is_set || is_set(num_of_nbr_discovery.operation)) leaf_name_data.push_back(num_of_nbr_discovery.get_name_leafdata());
    if (num_of_nbr_lbl.is_set || is_set(num_of_nbr_lbl.operation)) leaf_name_data.push_back(num_of_nbr_lbl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "num-of-nbr-addresses")
    {
        num_of_nbr_addresses = value;
    }
    if(value_path == "num-of-nbr-discovery")
    {
        num_of_nbr_discovery = value;
    }
    if(value_path == "num-of-nbr-lbl")
    {
        num_of_nbr_lbl = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::BackoffParameters()
    :
    initial_seconds{YType::uint32, "initial-seconds"},
    maximum_seconds{YType::uint32, "maximum-seconds"}
{
    yang_name = "backoff-parameters"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::~BackoffParameters()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::has_data() const
{
    return initial_seconds.is_set
	|| maximum_seconds.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_seconds.operation)
	|| is_set(maximum_seconds.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-parameters";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_seconds.is_set || is_set(initial_seconds.operation)) leaf_name_data.push_back(initial_seconds.get_name_leafdata());
    if (maximum_seconds.is_set || is_set(maximum_seconds.operation)) leaf_name_data.push_back(maximum_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::BackoffParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds = value;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoffs()
{
    yang_name = "backoffs"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Backoffs::~Backoffs()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Backoffs::has_data() const
{
    for (std::size_t index=0; index<backoff.size(); index++)
    {
        if(backoff[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Backoffs::has_operation() const
{
    for (std::size_t index=0; index<backoff.size(); index++)
    {
        if(backoff[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Backoffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoffs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Backoffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Backoffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backoff")
    {
        for(auto const & c : backoff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff>();
        c->parent = this;
        backoff.push_back(std::move(c));
        children[segment_path] = backoff.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Backoffs::get_children()
{
    for (auto const & c : backoff)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Backoffs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::Backoff()
    :
    backoff_seconds{YType::uint32, "backoff-seconds"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{
    yang_name = "backoff"; yang_parent_name = "backoffs";
}

MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::~Backoff()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::has_data() const
{
    return backoff_seconds.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff_seconds.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(waiting_seconds.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/backoffs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_seconds.is_set || is_set(backoff_seconds.operation)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.operation)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Backoffs::Backoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::Nsr()
    :
    ha_statistics(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics>())
	,ha_summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary>())
	,nsr_pending(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending>())
{
    ha_statistics->parent = this;
    children["ha-statistics"] = ha_statistics;

    ha_summary->parent = this;
    children["ha-summary"] = ha_summary;

    nsr_pending->parent = this;
    children["nsr-pending"] = nsr_pending;

    yang_name = "nsr"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::has_data() const
{
    return (ha_statistics !=  nullptr && ha_statistics->has_data())
	|| (ha_summary !=  nullptr && ha_summary->has_data())
	|| (nsr_pending !=  nullptr && nsr_pending->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::has_operation() const
{
    return is_set(operation)
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation())
	|| (ha_summary !=  nullptr && ha_summary->has_operation())
	|| (nsr_pending !=  nullptr && nsr_pending->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
        else
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics>();
            ha_statistics->parent = this;
            children["ha-statistics"] = ha_statistics;
        }
        return children.at("ha-statistics");
    }

    if(child_yang_name == "ha-summary")
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
        else
        {
            ha_summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary>();
            ha_summary->parent = this;
            children["ha-summary"] = ha_summary;
        }
        return children.at("ha-summary");
    }

    if(child_yang_name == "nsr-pending")
    {
        if(nsr_pending != nullptr)
        {
            children["nsr-pending"] = nsr_pending;
        }
        else
        {
            nsr_pending = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending>();
            nsr_pending->parent = this;
            children["nsr-pending"] = nsr_pending;
        }
        return children.at("nsr-pending");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::get_children()
{
    if(children.find("ha-statistics") == children.end())
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
    }

    if(children.find("ha-summary") == children.end())
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
    }

    if(children.find("nsr-pending") == children.end())
    {
        if(nsr_pending != nullptr)
        {
            children["nsr-pending"] = nsr_pending;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::NsrPending()
    :
    ha_neighbors(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors>())
{
    ha_neighbors->parent = this;
    children["ha-neighbors"] = ha_neighbors;

    yang_name = "nsr-pending"; yang_parent_name = "nsr";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::~NsrPending()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::has_data() const
{
    return (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::has_operation() const
{
    return is_set(operation)
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pending";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
        else
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors>();
            ha_neighbors->parent = this;
            children["ha-neighbors"] = ha_neighbors;
        }
        return children.at("ha-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::get_children()
{
    if(children.find("ha-neighbors") == children.end())
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "nsr-pending";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/nsr-pending/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(std::move(c));
        children[segment_path] = ha_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::get_children()
{
    for (auto const & c : ha_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    children["init-sync-info"] = init_sync_info;

    steady_state_sync_info->parent = this;
    children["steady-state-sync-info"] = steady_state_sync_info;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lbl_spc_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(lsr_id_xr.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(num_msg.operation)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/nsr-pending/ha-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.operation)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.operation)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.operation)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
        else
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>();
            init_sync_info->parent = this;
            children["init-sync-info"] = init_sync_info;
        }
        return children.at("init-sync-info");
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        else
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
            steady_state_sync_info->parent = this;
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        return children.at("steady-state-sync-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_children()
{
    if(children.find("init-sync-info") == children.end())
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
    }

    if(children.find("steady-state-sync-info") == children.end())
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(num_addr.operation)
	|| is_set(num_app_bytes.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_duplicate_addr.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_rx_bytes.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/nsr-pending/ha-neighbors/ha-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.operation)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.operation)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.operation)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.operation)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_stdby_adj_join.operation)
	|| is_set(num_stdby_adj_leave.operation)
	|| is_set(rem_lbl_rq.operation)
	|| is_set(rem_lbl_wd.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/nsr-pending/ha-neighbors/ha-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.operation)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.operation)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.operation)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.operation)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::HaSummary()
    :
    sessions(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "ha-summary"; yang_parent_name = "nsr";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_eligible.operation)
	|| is_set(nsr_state_app_wait.operation)
	|| is_set(nsr_state_none.operation)
	|| is_set(nsr_state_operational.operation)
	|| is_set(nsr_state_prepare.operation)
	|| is_set(nsr_state_ready.operation)
	|| is_set(nsr_state_tcp_phase1.operation)
	|| is_set(nsr_state_tcp_phase2.operation)
	|| is_set(nsr_state_wait.operation)
	|| is_set(total.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.operation)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.operation)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.operation)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.operation)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.operation)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.operation)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.operation)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.operation)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.operation)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaSummary::Sessions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal>())
	,ha_neighbors(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;
    children["ha-global"] = ha_global;

    ha_neighbors->parent = this;
    children["ha-neighbors"] = ha_neighbors;

    yang_name = "ha-statistics"; yang_parent_name = "nsr";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::has_data() const
{
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::has_operation() const
{
    return is_set(operation)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-global")
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
        else
        {
            ha_global = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal>();
            ha_global->parent = this;
            children["ha-global"] = ha_global;
        }
        return children.at("ha-global");
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
        else
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors>();
            ha_neighbors->parent = this;
            children["ha-neighbors"] = ha_neighbors;
        }
        return children.at("ha-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::get_children()
{
    if(children.find("ha-global") == children.end())
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
    }

    if(children.find("ha-neighbors") == children.end())
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;
    children["init-sync"] = init_sync;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::has_data() const
{
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(operation)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync")
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
        else
        {
            init_sync = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync>();
            init_sync->parent = this;
            children["init-sync"] = init_sync;
        }
        return children.at("init-sync");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::get_children()
{
    if(children.find("init-sync") == children.end())
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_peers{YType::uint32, "num-peers"},
    num_pfx{YType::uint32, "num-pfx"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"}
{
    yang_name = "init-sync"; yang_parent_name = "ha-global";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_tx_fail_cnt.is_set
	|| nsr_cfged.is_set
	|| nsr_synced.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_lbl.is_set
	|| num_lbl_adv.is_set
	|| num_lcl_addr_wd.is_set
	|| num_peers.is_set
	|| num_pfx.is_set
	|| total_ipc_tx_fail_cnt.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(ipc_default_mtu.operation)
	|| is_set(ipc_exceeded_mtu_msg_cnt.operation)
	|| is_set(ipc_max_rx_batch_bytes.operation)
	|| is_set(ipc_max_tx_batch_bytes.operation)
	|| is_set(ipc_msg_rx_bytes.operation)
	|| is_set(ipc_msg_rx_cnt.operation)
	|| is_set(ipc_msg_tx_bytes.operation)
	|| is_set(ipc_msg_tx_cnt.operation)
	|| is_set(ipc_restart_cnt.operation)
	|| is_set(ipc_tx_fail_cnt.operation)
	|| is_set(nsr_cfged.operation)
	|| is_set(nsr_synced.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_lbl_adv.operation)
	|| is_set(num_lcl_addr_wd.operation)
	|| is_set(num_peers.operation)
	|| is_set(num_pfx.operation)
	|| is_set(total_ipc_tx_fail_cnt.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-statistics/ha-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.operation)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.operation)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.operation)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.operation)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.operation)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.operation)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.operation)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (nsr_cfged.is_set || is_set(nsr_cfged.operation)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.operation)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.operation)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.operation)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.operation)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.operation)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
    }
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(std::move(c));
        children[segment_path] = ha_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::get_children()
{
    for (auto const & c : ha_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    children["init-sync-info"] = init_sync_info;

    steady_state_sync_info->parent = this;
    children["steady-state-sync-info"] = steady_state_sync_info;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lbl_spc_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(lsr_id_xr.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(num_msg.operation)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-statistics/ha-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.operation)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.operation)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.operation)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
        else
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>();
            init_sync_info->parent = this;
            children["init-sync-info"] = init_sync_info;
        }
        return children.at("init-sync-info");
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        else
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
            steady_state_sync_info->parent = this;
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        return children.at("steady-state-sync-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_children()
{
    if(children.find("init-sync-info") == children.end())
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
    }

    if(children.find("steady-state-sync-info") == children.end())
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(num_addr.operation)
	|| is_set(num_app_bytes.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_duplicate_addr.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_rx_bytes.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-statistics/ha-neighbors/ha-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.operation)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.operation)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.operation)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.operation)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_stdby_adj_join.operation)
	|| is_set(num_stdby_adj_leave.operation)
	|| is_set(rem_lbl_rq.operation)
	|| is_set(rem_lbl_wd.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/nsr/ha-statistics/ha-neighbors/ha-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.operation)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.operation)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.operation)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.operation)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::Parameters()
    :
    af_binding_withdraw_delay{YType::uint32, "af-binding-withdraw-delay"},
    discovery_quick_start_disabled_on_interfaces{YType::boolean, "discovery-quick-start-disabled-on-interfaces"},
    global_discovery_quick_start_disabled{YType::boolean, "global-discovery-quick-start-disabled"},
    global_md5_password_enabled{YType::boolean, "global-md5-password-enabled"},
    hello_hold_time{YType::uint32, "hello-hold-time"},
    hello_interval{YType::uint32, "hello-interval"},
    housekeeping_timer_interval{YType::uint32, "housekeeping-timer-interval"},
    igp_sync_delay_time_for_interface{YType::uint32, "igp-sync-delay-time-for-interface"},
    igp_sync_delay_time_on_restart{YType::uint32, "igp-sync-delay-time-on-restart"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    ldp_out_of_mem_state{YType::uint32, "ldp-out-of-mem-state"},
    ldp_recovery_timeout{YType::uint32, "ldp-recovery-timeout"},
    le_no_route_timeout{YType::uint32, "le-no-route-timeout"},
    max_intf_attached{YType::uint32, "max-intf-attached"},
    max_intf_te{YType::uint32, "max-intf-te"},
    max_peer{YType::uint32, "max-peer"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_synced{YType::boolean, "nsr-synced"},
    protocol_version{YType::uint32, "protocol-version"},
    role_is_active{YType::boolean, "role-is-active"},
    router_id{YType::str, "router-id"},
    session_hold_time{YType::uint32, "session-hold-time"},
    targeted_hello_hold_time{YType::uint32, "targeted-hello-hold-time"},
    targeted_hello_interval{YType::uint32, "targeted-hello-interval"}
    	,
    graceful_restart_information(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation>())
{
    graceful_restart_information->parent = this;
    children["graceful-restart-information"] = graceful_restart_information;

    yang_name = "parameters"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::~Parameters()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::has_data() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_data())
            return true;
    }
    return af_binding_withdraw_delay.is_set
	|| discovery_quick_start_disabled_on_interfaces.is_set
	|| global_discovery_quick_start_disabled.is_set
	|| global_md5_password_enabled.is_set
	|| hello_hold_time.is_set
	|| hello_interval.is_set
	|| housekeeping_timer_interval.is_set
	|| igp_sync_delay_time_for_interface.is_set
	|| igp_sync_delay_time_on_restart.is_set
	|| keepalive_interval.is_set
	|| ldp_out_of_mem_state.is_set
	|| ldp_recovery_timeout.is_set
	|| le_no_route_timeout.is_set
	|| max_intf_attached.is_set
	|| max_intf_te.is_set
	|| max_peer.is_set
	|| nsr_enabled.is_set
	|| nsr_synced.is_set
	|| protocol_version.is_set
	|| role_is_active.is_set
	|| router_id.is_set
	|| session_hold_time.is_set
	|| targeted_hello_hold_time.is_set
	|| targeted_hello_interval.is_set
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::has_operation() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_binding_withdraw_delay.operation)
	|| is_set(discovery_quick_start_disabled_on_interfaces.operation)
	|| is_set(global_discovery_quick_start_disabled.operation)
	|| is_set(global_md5_password_enabled.operation)
	|| is_set(hello_hold_time.operation)
	|| is_set(hello_interval.operation)
	|| is_set(housekeeping_timer_interval.operation)
	|| is_set(igp_sync_delay_time_for_interface.operation)
	|| is_set(igp_sync_delay_time_on_restart.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(ldp_out_of_mem_state.operation)
	|| is_set(ldp_recovery_timeout.operation)
	|| is_set(le_no_route_timeout.operation)
	|| is_set(max_intf_attached.operation)
	|| is_set(max_intf_te.operation)
	|| is_set(max_peer.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_synced.operation)
	|| is_set(protocol_version.operation)
	|| is_set(role_is_active.operation)
	|| is_set(router_id.operation)
	|| is_set(session_hold_time.operation)
	|| is_set(targeted_hello_hold_time.operation)
	|| is_set(targeted_hello_interval.operation)
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_binding_withdraw_delay.is_set || is_set(af_binding_withdraw_delay.operation)) leaf_name_data.push_back(af_binding_withdraw_delay.get_name_leafdata());
    if (discovery_quick_start_disabled_on_interfaces.is_set || is_set(discovery_quick_start_disabled_on_interfaces.operation)) leaf_name_data.push_back(discovery_quick_start_disabled_on_interfaces.get_name_leafdata());
    if (global_discovery_quick_start_disabled.is_set || is_set(global_discovery_quick_start_disabled.operation)) leaf_name_data.push_back(global_discovery_quick_start_disabled.get_name_leafdata());
    if (global_md5_password_enabled.is_set || is_set(global_md5_password_enabled.operation)) leaf_name_data.push_back(global_md5_password_enabled.get_name_leafdata());
    if (hello_hold_time.is_set || is_set(hello_hold_time.operation)) leaf_name_data.push_back(hello_hold_time.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (housekeeping_timer_interval.is_set || is_set(housekeeping_timer_interval.operation)) leaf_name_data.push_back(housekeeping_timer_interval.get_name_leafdata());
    if (igp_sync_delay_time_for_interface.is_set || is_set(igp_sync_delay_time_for_interface.operation)) leaf_name_data.push_back(igp_sync_delay_time_for_interface.get_name_leafdata());
    if (igp_sync_delay_time_on_restart.is_set || is_set(igp_sync_delay_time_on_restart.operation)) leaf_name_data.push_back(igp_sync_delay_time_on_restart.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (ldp_out_of_mem_state.is_set || is_set(ldp_out_of_mem_state.operation)) leaf_name_data.push_back(ldp_out_of_mem_state.get_name_leafdata());
    if (ldp_recovery_timeout.is_set || is_set(ldp_recovery_timeout.operation)) leaf_name_data.push_back(ldp_recovery_timeout.get_name_leafdata());
    if (le_no_route_timeout.is_set || is_set(le_no_route_timeout.operation)) leaf_name_data.push_back(le_no_route_timeout.get_name_leafdata());
    if (max_intf_attached.is_set || is_set(max_intf_attached.operation)) leaf_name_data.push_back(max_intf_attached.get_name_leafdata());
    if (max_intf_te.is_set || is_set(max_intf_te.operation)) leaf_name_data.push_back(max_intf_te.get_name_leafdata());
    if (max_peer.is_set || is_set(max_peer.operation)) leaf_name_data.push_back(max_peer.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.operation)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.operation)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (role_is_active.is_set || is_set(role_is_active.operation)) leaf_name_data.push_back(role_is_active.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (session_hold_time.is_set || is_set(session_hold_time.operation)) leaf_name_data.push_back(session_hold_time.get_name_leafdata());
    if (targeted_hello_hold_time.is_set || is_set(targeted_hello_hold_time.operation)) leaf_name_data.push_back(targeted_hello_hold_time.get_name_leafdata());
    if (targeted_hello_interval.is_set || is_set(targeted_hello_interval.operation)) leaf_name_data.push_back(targeted_hello_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-parameter")
    {
        for(auto const & c : address_family_parameter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter>();
        c->parent = this;
        address_family_parameter.push_back(std::move(c));
        children[segment_path] = address_family_parameter.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restart-information")
    {
        if(graceful_restart_information != nullptr)
        {
            children["graceful-restart-information"] = graceful_restart_information;
        }
        else
        {
            graceful_restart_information = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation>();
            graceful_restart_information->parent = this;
            children["graceful-restart-information"] = graceful_restart_information;
        }
        return children.at("graceful-restart-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Parameters::get_children()
{
    for (auto const & c : address_family_parameter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("graceful-restart-information") == children.end())
    {
        if(graceful_restart_information != nullptr)
        {
            children["graceful-restart-information"] = graceful_restart_information;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay = value;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces = value;
    }
    if(value_path == "global-discovery-quick-start-disabled")
    {
        global_discovery_quick_start_disabled = value;
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled = value;
    }
    if(value_path == "hello-hold-time")
    {
        hello_hold_time = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "housekeeping-timer-interval")
    {
        housekeeping_timer_interval = value;
    }
    if(value_path == "igp-sync-delay-time-for-interface")
    {
        igp_sync_delay_time_for_interface = value;
    }
    if(value_path == "igp-sync-delay-time-on-restart")
    {
        igp_sync_delay_time_on_restart = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "ldp-out-of-mem-state")
    {
        ldp_out_of_mem_state = value;
    }
    if(value_path == "ldp-recovery-timeout")
    {
        ldp_recovery_timeout = value;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout = value;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached = value;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te = value;
    }
    if(value_path == "max-peer")
    {
        max_peer = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
    }
    if(value_path == "role-is-active")
    {
        role_is_active = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time = value;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time = value;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::GracefulRestartInformation()
    :
    graceful_restart_forwarding_state_hold_time{YType::uint32, "graceful-restart-forwarding-state-hold-time"},
    graceful_restart_reconnect_timeout{YType::uint32, "graceful-restart-reconnect-timeout"},
    is_graceful_restart_configured{YType::boolean, "is-graceful-restart-configured"}
{
    yang_name = "graceful-restart-information"; yang_parent_name = "parameters";
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::~GracefulRestartInformation()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::has_data() const
{
    return graceful_restart_forwarding_state_hold_time.is_set
	|| graceful_restart_reconnect_timeout.is_set
	|| is_graceful_restart_configured.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(graceful_restart_forwarding_state_hold_time.operation)
	|| is_set(graceful_restart_reconnect_timeout.operation)
	|| is_set(is_graceful_restart_configured.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (graceful_restart_forwarding_state_hold_time.is_set || is_set(graceful_restart_forwarding_state_hold_time.operation)) leaf_name_data.push_back(graceful_restart_forwarding_state_hold_time.get_name_leafdata());
    if (graceful_restart_reconnect_timeout.is_set || is_set(graceful_restart_reconnect_timeout.operation)) leaf_name_data.push_back(graceful_restart_reconnect_timeout.get_name_leafdata());
    if (is_graceful_restart_configured.is_set || is_set(is_graceful_restart_configured.operation)) leaf_name_data.push_back(is_graceful_restart_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Parameters::GracefulRestartInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time = value;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout = value;
    }
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::AddressFamilyParameter()
    :
    address_family{YType::enumeration, "address-family"},
    is_accepting_targeted_hellos{YType::boolean, "is-accepting-targeted-hellos"},
    label_imp_null_override_acl{YType::str, "label-imp-null-override-acl"},
    null_label{YType::str, "null-label"},
    targeted_hello_acl{YType::str, "targeted-hello-acl"}
    	,
    discovery_transport_address(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>())
{
    discovery_transport_address->parent = this;
    children["discovery-transport-address"] = discovery_transport_address;

    yang_name = "address-family-parameter"; yang_parent_name = "parameters";
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::~AddressFamilyParameter()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::has_data() const
{
    return address_family.is_set
	|| is_accepting_targeted_hellos.is_set
	|| label_imp_null_override_acl.is_set
	|| null_label.is_set
	|| targeted_hello_acl.is_set
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(is_accepting_targeted_hellos.operation)
	|| is_set(label_imp_null_override_acl.operation)
	|| is_set(null_label.operation)
	|| is_set(targeted_hello_acl.operation)
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-parameter";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/parameters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (is_accepting_targeted_hellos.is_set || is_set(is_accepting_targeted_hellos.operation)) leaf_name_data.push_back(is_accepting_targeted_hellos.get_name_leafdata());
    if (label_imp_null_override_acl.is_set || is_set(label_imp_null_override_acl.operation)) leaf_name_data.push_back(label_imp_null_override_acl.get_name_leafdata());
    if (null_label.is_set || is_set(null_label.operation)) leaf_name_data.push_back(null_label.get_name_leafdata());
    if (targeted_hello_acl.is_set || is_set(targeted_hello_acl.operation)) leaf_name_data.push_back(targeted_hello_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-transport-address")
    {
        if(discovery_transport_address != nullptr)
        {
            children["discovery-transport-address"] = discovery_transport_address;
        }
        else
        {
            discovery_transport_address = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>();
            discovery_transport_address->parent = this;
            children["discovery-transport-address"] = discovery_transport_address;
        }
        return children.at("discovery-transport-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::get_children()
{
    if(children.find("discovery-transport-address") == children.end())
    {
        if(discovery_transport_address != nullptr)
        {
            children["discovery-transport-address"] = discovery_transport_address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos = value;
    }
    if(value_path == "label-imp-null-override-acl")
    {
        label_imp_null_override_acl = value;
    }
    if(value_path == "null-label")
    {
        null_label = value;
    }
    if(value_path == "targeted-hello-acl")
    {
        targeted_hello_acl = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::DiscoveryTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "discovery-transport-address"; yang_parent_name = "address-family-parameter";
}

MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::~DiscoveryTransportAddress()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/parameters/address-family-parameter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Issu::Issu()
    :
    ha_statistics(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics>())
	,ha_summary(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary>())
{
    ha_statistics->parent = this;
    children["ha-statistics"] = ha_statistics;

    ha_summary->parent = this;
    children["ha-summary"] = ha_summary;

    yang_name = "issu"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::~Issu()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::has_data() const
{
    return (ha_statistics !=  nullptr && ha_statistics->has_data())
	|| (ha_summary !=  nullptr && ha_summary->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::has_operation() const
{
    return is_set(operation)
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation())
	|| (ha_summary !=  nullptr && ha_summary->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
        else
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics>();
            ha_statistics->parent = this;
            children["ha-statistics"] = ha_statistics;
        }
        return children.at("ha-statistics");
    }

    if(child_yang_name == "ha-summary")
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
        else
        {
            ha_summary = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary>();
            ha_summary->parent = this;
            children["ha-summary"] = ha_summary;
        }
        return children.at("ha-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::get_children()
{
    if(children.find("ha-statistics") == children.end())
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
    }

    if(children.find("ha-summary") == children.end())
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::HaSummary()
    :
    sessions(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "ha-summary"; yang_parent_name = "issu";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_eligible.operation)
	|| is_set(nsr_state_app_wait.operation)
	|| is_set(nsr_state_none.operation)
	|| is_set(nsr_state_operational.operation)
	|| is_set(nsr_state_prepare.operation)
	|| is_set(nsr_state_ready.operation)
	|| is_set(nsr_state_tcp_phase1.operation)
	|| is_set(nsr_state_tcp_phase2.operation)
	|| is_set(nsr_state_wait.operation)
	|| is_set(total.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.operation)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.operation)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.operation)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.operation)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.operation)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.operation)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.operation)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.operation)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.operation)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaSummary::Sessions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal>())
	,ha_neighbors(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;
    children["ha-global"] = ha_global;

    ha_neighbors->parent = this;
    children["ha-neighbors"] = ha_neighbors;

    yang_name = "ha-statistics"; yang_parent_name = "issu";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::has_data() const
{
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::has_operation() const
{
    return is_set(operation)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-global")
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
        else
        {
            ha_global = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal>();
            ha_global->parent = this;
            children["ha-global"] = ha_global;
        }
        return children.at("ha-global");
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
        else
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors>();
            ha_neighbors->parent = this;
            children["ha-neighbors"] = ha_neighbors;
        }
        return children.at("ha-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::get_children()
{
    if(children.find("ha-global") == children.end())
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
    }

    if(children.find("ha-neighbors") == children.end())
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;
    children["init-sync"] = init_sync;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::has_data() const
{
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(operation)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync")
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
        else
        {
            init_sync = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync>();
            init_sync->parent = this;
            children["init-sync"] = init_sync;
        }
        return children.at("init-sync");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::get_children()
{
    if(children.find("init-sync") == children.end())
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_peers{YType::uint32, "num-peers"},
    num_pfx{YType::uint32, "num-pfx"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"}
{
    yang_name = "init-sync"; yang_parent_name = "ha-global";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_tx_fail_cnt.is_set
	|| nsr_cfged.is_set
	|| nsr_synced.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_lbl.is_set
	|| num_lbl_adv.is_set
	|| num_lcl_addr_wd.is_set
	|| num_peers.is_set
	|| num_pfx.is_set
	|| total_ipc_tx_fail_cnt.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(ipc_default_mtu.operation)
	|| is_set(ipc_exceeded_mtu_msg_cnt.operation)
	|| is_set(ipc_max_rx_batch_bytes.operation)
	|| is_set(ipc_max_tx_batch_bytes.operation)
	|| is_set(ipc_msg_rx_bytes.operation)
	|| is_set(ipc_msg_rx_cnt.operation)
	|| is_set(ipc_msg_tx_bytes.operation)
	|| is_set(ipc_msg_tx_cnt.operation)
	|| is_set(ipc_restart_cnt.operation)
	|| is_set(ipc_tx_fail_cnt.operation)
	|| is_set(nsr_cfged.operation)
	|| is_set(nsr_synced.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_lbl_adv.operation)
	|| is_set(num_lcl_addr_wd.operation)
	|| is_set(num_peers.operation)
	|| is_set(num_pfx.operation)
	|| is_set(total_ipc_tx_fail_cnt.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-statistics/ha-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.operation)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.operation)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.operation)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.operation)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.operation)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.operation)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.operation)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (nsr_cfged.is_set || is_set(nsr_cfged.operation)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.operation)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.operation)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.operation)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.operation)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.operation)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
    }
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(std::move(c));
        children[segment_path] = ha_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::get_children()
{
    for (auto const & c : ha_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    children["init-sync-info"] = init_sync_info;

    steady_state_sync_info->parent = this;
    children["steady-state-sync-info"] = steady_state_sync_info;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lbl_spc_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(lsr_id_xr.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(num_msg.operation)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-statistics/ha-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.operation)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.operation)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.operation)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
        else
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>();
            init_sync_info->parent = this;
            children["init-sync-info"] = init_sync_info;
        }
        return children.at("init-sync-info");
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        else
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
            steady_state_sync_info->parent = this;
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        return children.at("steady-state-sync-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_children()
{
    if(children.find("init-sync-info") == children.end())
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
    }

    if(children.find("steady-state-sync-info") == children.end())
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(num_addr.operation)
	|| is_set(num_app_bytes.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_duplicate_addr.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_rx_bytes.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-statistics/ha-neighbors/ha-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.operation)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.operation)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.operation)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.operation)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_stdby_adj_join.operation)
	|| is_set(num_stdby_adj_leave.operation)
	|| is_set(rem_lbl_rq.operation)
	|| is_set(rem_lbl_wd.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/issu/ha-statistics/ha-neighbors/ha-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.operation)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.operation)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.operation)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.operation)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapabilities()
{
    yang_name = "neighbor-capabilities"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::~NeighborCapabilities()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::has_data() const
{
    for (std::size_t index=0; index<neighbor_capability.size(); index++)
    {
        if(neighbor_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::has_operation() const
{
    for (std::size_t index=0; index<neighbor_capability.size(); index++)
    {
        if(neighbor_capability[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-capability")
    {
        for(auto const & c : neighbor_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability>();
        c->parent = this;
        neighbor_capability.push_back(std::move(c));
        children[segment_path] = neighbor_capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::get_children()
{
    for (auto const & c : neighbor_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::NeighborCapability()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "neighbor-capability"; yang_parent_name = "neighbor-capabilities";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::~NeighborCapability()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::has_data() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::has_operation() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-capability";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbor-capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received")
    {
        for(auto const & c : received)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received>();
        c->parent = this;
        received.push_back(std::move(c));
        children[segment_path] = received.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sent")
    {
        for(auto const & c : sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent>();
        c->parent = this;
        sent.push_back(std::move(c));
        children[segment_path] = sent.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::get_children()
{
    for (auto const & c : received)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::Sent()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "sent"; yang_parent_name = "neighbor-capability";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::~Sent()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbor-capabilities/neighbor-capability/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::Received()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "received"; yang_parent_name = "neighbor-capability";
}

MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::~Received()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/neighbor-capabilities/neighbor-capability/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DefaultVrf::NeighborCapabilities::NeighborCapability::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Standby::DefaultVrf::Neighbors::~Neighbors()
{
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::DefaultVrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::DefaultVrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DefaultVrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DefaultVrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::Global::Standby::DefaultVrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DefaultVrf::Neighbors::get_children()
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

void MplsLdp::Global::Standby::DefaultVrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf MgmtLdpNbrBgpAdvtStateEnum::not_applicable {0, "not-applicable"};
const Enum::YLeaf MgmtLdpNbrBgpAdvtStateEnum::permit {1, "permit"};
const Enum::YLeaf MgmtLdpNbrBgpAdvtStateEnum::deny {2, "deny"};

const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_none {0, "mgmt-ldp-nsr-peer-sync-st-none"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_wait {1, "mgmt-ldp-nsr-peer-sync-st-wait"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_ready {2, "mgmt-ldp-nsr-peer-sync-st-ready"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_prep {3, "mgmt-ldp-nsr-peer-sync-st-prep"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_app_wait {4, "mgmt-ldp-nsr-peer-sync-st-app-wait"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_oper {5, "mgmt-ldp-nsr-peer-sync-st-oper"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_tcp_phase1 {6, "mgmt-ldp-nsr-peer-sync-st-tcp-phase1"};
const Enum::YLeaf MgmtLdpNsrPeerSyncStateEnum::mgmt_ldp_nsr_peer_sync_st_tcp_phase2 {7, "mgmt-ldp-nsr-peer-sync-st-tcp-phase2"};

const Enum::YLeaf LdpRoutePathFlagsEnum::ip_path_no_flag {0, "ip-path-no-flag"};
const Enum::YLeaf LdpRoutePathFlagsEnum::ip_path_protected {1, "ip-path-protected"};
const Enum::YLeaf LdpRoutePathFlagsEnum::ip_path_backup {2, "ip-path-backup"};
const Enum::YLeaf LdpRoutePathFlagsEnum::ip_path_backup_remote {3, "ip-path-backup-remote"};
const Enum::YLeaf LdpRoutePathFlagsEnum::ip_path_bgp_backup {4, "ip-path-bgp-backup"};

const Enum::YLeaf LdpAfIdEnum::ldp_af_id_none {0, "ldp-af-id-none"};
const Enum::YLeaf LdpAfIdEnum::ldp_af_id_ipv4 {2, "ldp-af-id-ipv4"};
const Enum::YLeaf LdpAfIdEnum::ldp_af_id_ipv6 {10, "ldp-af-id-ipv6"};

const Enum::YLeaf LdpIgpSyncStateEnum::isync_ready {0, "isync-ready"};
const Enum::YLeaf LdpIgpSyncStateEnum::isync_not_ready {1, "isync-not-ready"};
const Enum::YLeaf LdpIgpSyncStateEnum::isync_deferred {2, "isync-deferred"};

const Enum::YLeaf LdpIgpSyncDownReasonEnum::igp_sync_down_reason_not_applicable {0, "igp-sync-down-reason-not-applicable"};
const Enum::YLeaf LdpIgpSyncDownReasonEnum::no_hello_adjacency {1, "no-hello-adjacency"};
const Enum::YLeaf LdpIgpSyncDownReasonEnum::no_peer_session {2, "no-peer-session"};
const Enum::YLeaf LdpIgpSyncDownReasonEnum::initial_update_to_peer_not_done {3, "initial-update-to-peer-not-done"};
const Enum::YLeaf LdpIgpSyncDownReasonEnum::initial_update_from_peer_not_received {4, "initial-update-from-peer-not-received"};
const Enum::YLeaf LdpIgpSyncDownReasonEnum::internal_reason {5, "internal-reason"};

const Enum::YLeaf LocalLabelStateEnum::local_label_state_none {1, "local-label-state-none"};
const Enum::YLeaf LocalLabelStateEnum::local_label_state_assigned {2, "local-label-state-assigned"};
const Enum::YLeaf LocalLabelStateEnum::local_label_state_withdrawn {3, "local-label-state-withdrawn"};

const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_none {0, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-none"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_tbl_id_mismatch {1, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-tbl-id-mismatch"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_pp_exists {2, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-pp-exists"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_missing_elem {3, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-missing-elem"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_no_p_end_sock {4, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-no-p-end-sock"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_p_end_sock_not_synced {5, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-p-end-sock-not-synced"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_adj_add {6, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-adj-add"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_dhcb_add {7, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-dhcb-add"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_enomem {8, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-enomem"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_tp_create {9, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-tp-create"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_pp_create {10, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-pp-create"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_addr_bind {11, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-addr-bind"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_rx_bad_pie {12, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-rx-bad-pie"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_rx_notif {13, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-rx-notif"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_rx_unexp_open {14, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-rx-unexp-open"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_unexp_peer_down {15, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-unexp-peer-down"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_app_not_found {16, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-app-not-found"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_app_invalid {17, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-app-invalid"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_adj_grp_not_found {18, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-adj-grp-not-found"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_invalid_elem {19, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-invalid-elem"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_app_data_invalid {20, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-app-data-invalid"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_invalid_per_idx {21, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-invalid-per-idx"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_pfx_not_found {22, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-pfx-not-found"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_bm_size_invalid {23, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-bm-size-invalid"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_adv_bm_clear {24, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-adv-bm-clear"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_err_tcp_struct_create {25, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-err-tcp-struct-create"};
const Enum::YLeaf MgmtLdpNsrPeerLdpSyncNackRsnEnum::mgmt_ldp_nsr_peer_ldp_sync_nack_rsn_no_ctx {26, "mgmt-ldp-nsr-peer-ldp-sync-nack-rsn-no-ctx"};

const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_none {0, "mgmt-ldp-nsr-peer-sync-err-none"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_ldp_sync_nack {1, "mgmt-ldp-nsr-peer-sync-err-ldp-sync-nack"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_sync_prep {2, "mgmt-ldp-nsr-peer-sync-err-sync-prep"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_tcp_peer {3, "mgmt-ldp-nsr-peer-sync-err-tcp-peer"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_tcp_gbl {4, "mgmt-ldp-nsr-peer-sync-err-tcp-gbl"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_ldp_peer {5, "mgmt-ldp-nsr-peer-sync-err-ldp-peer"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_ldp_gbl {6, "mgmt-ldp-nsr-peer-sync-err-ldp-gbl"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_app_fail {7, "mgmt-ldp-nsr-peer-sync-err-app-fail"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_sync_tcp_phase1 {8, "mgmt-ldp-nsr-peer-sync-err-sync-tcp-phase1"};
const Enum::YLeaf MgmtLdpNsrPeerSyncErrEnum::mgmt_ldp_nsr_peer_sync_err_sync_tcp_phase2 {9, "mgmt-ldp-nsr-peer-sync-err-sync-tcp-phase2"};

const Enum::YLeaf L2VpnLdpPwAgiEnum::rd {0, "rd"};

const Enum::YLeaf LabelValueEnum::mpls_label {0, "mpls-label"};
const Enum::YLeaf LabelValueEnum::un_labelled {1, "un-labelled"};
const Enum::YLeaf LabelValueEnum::unknown {2, "unknown"};

const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_labelled {0, "ldp-fwd-labelled"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_vrf_down {1, "ldp-fwd-un-labelled-vrf-down"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_no_nh {2, "ldp-fwd-un-labelled-no-nh"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_recursive_path {3, "ldp-fwd-un-labelled-recursive-path"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_intf_not_ldp {4, "ldp-fwd-un-labelled-intf-not-ldp"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_no_rmt {5, "ldp-fwd-un-labelled-no-rmt"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_no_ldp_adj {6, "ldp-fwd-un-labelled-no-ldp-adj"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_no_session {7, "ldp-fwd-un-labelled-no-session"};
const Enum::YLeaf LdpFwdUnlblRsnEnum::ldp_fwd_un_labelled_unknown {8, "ldp-fwd-un-labelled-unknown"};

const Enum::YLeaf LdpAdjUnionDiscrimEnum::link_hello {0, "link-hello"};
const Enum::YLeaf LdpAdjUnionDiscrimEnum::targeted_hello {1, "targeted-hello"};

const Enum::YLeaf LdpRoutePathLblOwnerEnum::ip_path_lbl_owner_none {0, "ip-path-lbl-owner-none"};
const Enum::YLeaf LdpRoutePathLblOwnerEnum::ip_path_lbl_owner_ldp {1, "ip-path-lbl-owner-ldp"};
const Enum::YLeaf LdpRoutePathLblOwnerEnum::ip_path_lbl_owner_bgp {2, "ip-path-lbl-owner-bgp"};

const Enum::YLeaf L2VpnLdpPwFecEnum::fec128 {0, "fec128"};
const Enum::YLeaf L2VpnLdpPwFecEnum::fec129 {1, "fec129"};
const Enum::YLeaf L2VpnLdpPwFecEnum::fec130 {2, "fec130"};
const Enum::YLeaf L2VpnLdpPwFecEnum::invalid {3, "invalid"};

const Enum::YLeaf MplsLdpOperAfNameEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf MplsLdpOperAfNameEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf LdpAfEnum::ldp_show_af_none {0, "ldp-show-af-none"};
const Enum::YLeaf LdpAfEnum::ldp_show_af_ipv4 {1, "ldp-show-af-ipv4"};
const Enum::YLeaf LdpAfEnum::ldp_show_af_ipv6 {2, "ldp-show-af-ipv6"};
const Enum::YLeaf LdpAfEnum::ldp_show_af_ipv4_ipv6 {3, "ldp-show-af-ipv4-ipv6"};

const Enum::YLeaf L2VpnLdpPwAiiEnum::local_id {0, "local-id"};
const Enum::YLeaf L2VpnLdpPwAiiEnum::type2 {1, "type2"};

const Enum::YLeaf DhcbStateEnum::none {0, "none"};
const Enum::YLeaf DhcbStateEnum::dhcb_active {1, "dhcb-active"};
const Enum::YLeaf DhcbStateEnum::dhcb_passive {2, "dhcb-passive"};
const Enum::YLeaf DhcbStateEnum::dhcb_active_passive {3, "dhcb-active-passive"};

const Enum::YLeaf ShowNsrStateEnum::nsr_ready {0, "nsr-ready"};
const Enum::YLeaf ShowNsrStateEnum::nsr_not_ready {1, "nsr-not-ready"};
const Enum::YLeaf ShowNsrStateEnum::nsr_na {2, "nsr-na"};


}
}
