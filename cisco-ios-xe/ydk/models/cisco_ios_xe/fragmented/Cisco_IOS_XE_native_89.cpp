
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_89.hpp"
#include "Cisco_IOS_XE_native_90.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
    	,
    match(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match>())
{
    match->parent = this;

    yang_name = "vrf"; yang_parent_name = "ospf";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set
	|| metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::Match()
{
    yang_name = "match"; yang_parent_name = "vrf";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::~Match()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::has_data() const
{
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::has_operation() const
{
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::Vrf::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::NonVrf()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
    	,
    match(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match>())
{
    match->parent = this;

    yang_name = "non-vrf"; yang_parent_name = "ospf";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::~NonVrf()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::has_data() const
{
    return metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::Match()
    :
    external{YType::enumeration, "external"},
    external2{YType::enumeration, "external2"},
    internal{YType::empty, "internal"},
    metric{YType::uint32, "metric"},
    nssa_external{YType::enumeration, "nssa-external"},
    route_map{YType::str, "route-map"}
{
    yang_name = "match"; yang_parent_name = "non-vrf";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::~Match()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::has_data() const
{
    return external.is_set
	|| external2.is_set
	|| internal.is_set
	|| metric.is_set
	|| nssa_external.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(external2.operation)
	|| is_set(internal.operation)
	|| is_set(metric.operation)
	|| is_set(nssa_external.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external2.is_set || is_set(external2.operation)) leaf_name_data.push_back(external2.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.operation)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Ospf::NonVrf::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "external2")
    {
        external2 = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::Rip()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Static_()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::has_data() const
{
    return metric.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::Clns()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::~Clns()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::Ip()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::~Ip()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Redistribute::Static_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::TableMap()
    :
    filter{YType::empty, "filter"},
    name{YType::str, "name"}
{
    yang_name = "table-map"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::~TableMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::has_data() const
{
    return filter.is_set
	|| name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::has_operation() const
{
    return is_set(operation)
	|| is_set(filter.operation)
	|| is_set(name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.operation)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::TableMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter")
    {
        filter = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::has_data() const
{
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::has_operation() const
{
    return is_set(operation)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(context != nullptr)
    {
        children["context"] = context;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context()
{
    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::has_data() const
{
    for (std::size_t index=0; index<context_word.size(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.size(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        for(auto const & c : context_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word>();
        c->parent = this;
        context_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::Context_Word()
    :
    context_word{YType::str, "context_word"}
{
    yang_name = "context_word"; yang_parent_name = "context";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::~Context_Word()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::has_data() const
{
    return context_word.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::has_operation() const
{
    return is_set(operation)
	|| is_set(context_word.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word" <<"[context_word='" <<context_word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context_Word' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.operation)) leaf_name_data.push_back(context_word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv4::Snmp::Context::Context_Word::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context_word")
    {
        context_word = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Ipv6()
    :
    af_name{YType::enumeration, "af-name"},
    auto_summary{YType::boolean, "auto-summary"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
    	,
    aggregate_address(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress>())
	,bgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_>())
	,default_information(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance>())
	,maximum_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths>())
	,redistribute(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Redistribute>())
	,snmp(nullptr) // presence node
	,table_map(nullptr) // presence node
{
    aggregate_address->parent = this;

    bgp->parent = this;

    default_information->parent = this;

    distance->parent = this;

    maximum_paths->parent = this;

    redistribute->parent = this;

    yang_name = "ipv6"; yang_parent_name = "no-vrf";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::~Ipv6()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| auto_summary.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| (aggregate_address !=  nullptr && aggregate_address->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(auto_summary.operation)
	|| is_set(default_metric.operation)
	|| is_set(synchronization.operation)
	|| (aggregate_address !=  nullptr && aggregate_address->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.operation)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.operation)) leaf_name_data.push_back(synchronization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-address")
    {
        if(aggregate_address == nullptr)
        {
            aggregate_address = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress>();
        }
        return aggregate_address;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths>();
        }
        return maximum_paths;
    }

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
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::TableMap>();
        }
        return table_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate_address != nullptr)
    {
        children["aggregate-address"] = aggregate_address;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::AggregateAddress()
    :
    advertise_map{YType::str, "advertise-map"},
    as_override{YType::empty, "as-override"},
    as_set{YType::empty, "as-set"},
    attribute_map{YType::str, "attribute-map"},
    ipv6_address{YType::str, "ipv6-address"},
    route_map{YType::str, "route-map"},
    summary_only{YType::empty, "summary-only"},
    suppress_map{YType::str, "suppress-map"}
{
    yang_name = "aggregate-address"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::~AggregateAddress()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::has_data() const
{
    return advertise_map.is_set
	|| as_override.is_set
	|| as_set.is_set
	|| attribute_map.is_set
	|| ipv6_address.is_set
	|| route_map.is_set
	|| summary_only.is_set
	|| suppress_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(advertise_map.operation)
	|| is_set(as_override.operation)
	|| is_set(as_set.operation)
	|| is_set(attribute_map.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(route_map.operation)
	|| is_set(summary_only.operation)
	|| is_set(suppress_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_map.is_set || is_set(advertise_map.operation)) leaf_name_data.push_back(advertise_map.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (as_set.is_set || is_set(as_set.operation)) leaf_name_data.push_back(as_set.get_name_leafdata());
    if (attribute_map.is_set || is_set(attribute_map.operation)) leaf_name_data.push_back(attribute_map.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.operation)) leaf_name_data.push_back(summary_only.get_name_leafdata());
    if (suppress_map.is_set || is_set(suppress_map.operation)) leaf_name_data.push_back(suppress_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::AggregateAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-map")
    {
        advertise_map = value;
    }
    if(value_path == "as-override")
    {
        as_override = value;
    }
    if(value_path == "as-set")
    {
        as_set = value;
    }
    if(value_path == "attribute-map")
    {
        attribute_map = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
    }
    if(value_path == "suppress-map")
    {
        suppress_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bgp_()
    :
    advertise_best_external{YType::empty, "advertise-best-external"},
    aggregate_timer{YType::uint8, "aggregate-timer"},
    always_compare_med{YType::empty, "always-compare-med"},
    cluster_id{YType::str, "cluster-id"},
    deterministic_med{YType::empty, "deterministic-med"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    enforce_first_as{YType::empty, "enforce-first-as"},
    enhanced_error{YType::empty, "enhanced-error"},
    fast_external_fallover{YType::boolean, "fast-external-fallover"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    maxas_limit{YType::uint16, "maxas-limit"},
    maxcommunity_limit{YType::uint16, "maxcommunity-limit"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    router_id{YType::str, "router-id"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"},
    suppress_inactive{YType::empty, "suppress-inactive"},
    update_delay{YType::uint16, "update-delay"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths>())
	,asnotation(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation>())
	,bestpath(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath>())
	,client_to_client(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient>())
	,confederation(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation>())
	,consistency_checker(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker>())
	,dampening(nullptr) // presence node
	,default_(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_>())
	,graceful_restart(nullptr) // presence node
	,ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode>())
	,nexthop(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop>())
	,nopeerup_delay(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay>())
	,recursion(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion>())
	,regexp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp>())
	,route_map(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap>())
	,slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer>())
	,transport(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport>())
	,update_group(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup>())
{
    additional_paths->parent = this;

    asnotation->parent = this;

    bestpath->parent = this;

    client_to_client->parent = this;

    confederation->parent = this;

    consistency_checker->parent = this;

    default_->parent = this;

    ha_mode->parent = this;

    nexthop->parent = this;

    nopeerup_delay->parent = this;

    recursion->parent = this;

    regexp->parent = this;

    route_map->parent = this;

    slow_peer->parent = this;

    transport->parent = this;

    update_group->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::has_data() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_data())
            return true;
    }
    return advertise_best_external.is_set
	|| aggregate_timer.is_set
	|| always_compare_med.is_set
	|| cluster_id.is_set
	|| deterministic_med.is_set
	|| dmzlink_bw.is_set
	|| enforce_first_as.is_set
	|| enhanced_error.is_set
	|| fast_external_fallover.is_set
	|| log_neighbor_changes.is_set
	|| maxas_limit.is_set
	|| maxcommunity_limit.is_set
	|| redistribute_internal.is_set
	|| router_id.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| suppress_inactive.is_set
	|| update_delay.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (asnotation !=  nullptr && asnotation->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (client_to_client !=  nullptr && client_to_client->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (consistency_checker !=  nullptr && consistency_checker->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (update_group !=  nullptr && update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::has_operation() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(advertise_best_external.operation)
	|| is_set(aggregate_timer.operation)
	|| is_set(always_compare_med.operation)
	|| is_set(cluster_id.operation)
	|| is_set(deterministic_med.operation)
	|| is_set(dmzlink_bw.operation)
	|| is_set(enforce_first_as.operation)
	|| is_set(enhanced_error.operation)
	|| is_set(fast_external_fallover.operation)
	|| is_set(log_neighbor_changes.operation)
	|| is_set(maxas_limit.operation)
	|| is_set(maxcommunity_limit.operation)
	|| is_set(redistribute_internal.operation)
	|| is_set(router_id.operation)
	|| is_set(scan_time.operation)
	|| is_set(soft_reconfig_backup.operation)
	|| is_set(suppress_inactive.operation)
	|| is_set(update_delay.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (asnotation !=  nullptr && asnotation->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (client_to_client !=  nullptr && client_to_client->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (consistency_checker !=  nullptr && consistency_checker->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (update_group !=  nullptr && update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_best_external.is_set || is_set(advertise_best_external.operation)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (aggregate_timer.is_set || is_set(aggregate_timer.operation)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.operation)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (deterministic_med.is_set || is_set(deterministic_med.operation)) leaf_name_data.push_back(deterministic_med.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.operation)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.operation)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (enhanced_error.is_set || is_set(enhanced_error.operation)) leaf_name_data.push_back(enhanced_error.get_name_leafdata());
    if (fast_external_fallover.is_set || is_set(fast_external_fallover.operation)) leaf_name_data.push_back(fast_external_fallover.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.operation)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (maxas_limit.is_set || is_set(maxas_limit.operation)) leaf_name_data.push_back(maxas_limit.get_name_leafdata());
    if (maxcommunity_limit.is_set || is_set(maxcommunity_limit.operation)) leaf_name_data.push_back(maxcommunity_limit.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.operation)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.operation)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.operation)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.operation)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.operation)) leaf_name_data.push_back(update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "asnotation")
    {
        if(asnotation == nullptr)
        {
            asnotation = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation>();
        }
        return asnotation;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "client-to-client")
    {
        if(client_to_client == nullptr)
        {
            client_to_client = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient>();
        }
        return client_to_client;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "consistency-checker")
    {
        if(consistency_checker == nullptr)
        {
            consistency_checker = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker>();
        }
        return consistency_checker;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inject-map")
    {
        for(auto const & c : inject_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap>();
        c->parent = this;
        inject_map.push_back(c);
        return c;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "nopeerup-delay")
    {
        if(nopeerup_delay == nullptr)
        {
            nopeerup_delay = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay>();
        }
        return nopeerup_delay;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "update-group")
    {
        if(update_group == nullptr)
        {
            update_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup>();
        }
        return update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(asnotation != nullptr)
    {
        children["asnotation"] = asnotation;
    }

    if(bestpath != nullptr)
    {
        children["bestpath"] = bestpath;
    }

    if(client_to_client != nullptr)
    {
        children["client-to-client"] = client_to_client;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(consistency_checker != nullptr)
    {
        children["consistency-checker"] = consistency_checker;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    for (auto const & c : inject_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(nopeerup_delay != nullptr)
    {
        children["nopeerup-delay"] = nopeerup_delay;
    }

    if(recursion != nullptr)
    {
        children["recursion"] = recursion;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(update_group != nullptr)
    {
        children["update-group"] = update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med = value;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error = value;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover = value;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit = value;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit = value;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::Asnotation()
    :
    dot{YType::empty, "dot"}
{
    yang_name = "asnotation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::~Asnotation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::has_data() const
{
    return dot.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::has_operation() const
{
    return is_set(operation)
	|| is_set(dot.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asnotation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Asnotation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.operation)) leaf_name_data.push_back(dot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Asnotation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot")
    {
        dot = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::NopeerupDelay()
    :
    cold_boot{YType::uint16, "cold-boot"},
    nsf_switchover{YType::uint16, "nsf-switchover"},
    post_boot{YType::uint16, "post-boot"},
    user_initiated{YType::uint16, "user-initiated"}
{
    yang_name = "nopeerup-delay"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::~NopeerupDelay()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::has_data() const
{
    return cold_boot.is_set
	|| nsf_switchover.is_set
	|| post_boot.is_set
	|| user_initiated.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(cold_boot.operation)
	|| is_set(nsf_switchover.operation)
	|| is_set(post_boot.operation)
	|| is_set(user_initiated.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nopeerup-delay";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NopeerupDelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cold_boot.is_set || is_set(cold_boot.operation)) leaf_name_data.push_back(cold_boot.get_name_leafdata());
    if (nsf_switchover.is_set || is_set(nsf_switchover.operation)) leaf_name_data.push_back(nsf_switchover.get_name_leafdata());
    if (post_boot.is_set || is_set(post_boot.operation)) leaf_name_data.push_back(post_boot.get_name_leafdata());
    if (user_initiated.is_set || is_set(user_initiated.operation)) leaf_name_data.push_back(user_initiated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::NopeerupDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cold-boot")
    {
        cold_boot = value;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover = value;
    }
    if(value_path == "post-boot")
    {
        post_boot = value;
    }
    if(value_path == "user-initiated")
    {
        user_initiated = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::Recursion()
    :
    host{YType::empty, "host"}
{
    yang_name = "recursion"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::~Recursion()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::has_data() const
{
    return host.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursion";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recursion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Recursion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
    	,
    select(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select>())
	,send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::has_data() const
{
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| is_set(install.operation)
	|| is_set(receive.operation)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.operation)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "install")
    {
        install = value;
    }
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
	,backup(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best>())
	,best_external(nullptr) // presence node
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Select' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(operation)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(group_best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.operation)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "group-best")
    {
        group_best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{
    yang_name = "backup"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    return best_external.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(best_external.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-external")
    {
        best_external = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Best()
{
    yang_name = "best"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(all.operation)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "range";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{
    yang_name = "best-external"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    return backup.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(backup.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.operation)) leaf_name_data.push_back(backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup")
    {
        backup = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "select";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Bestpath()
    :
    compare_routerid{YType::empty, "compare-routerid"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity>())
	,igp_metric(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric>())
	,med(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;

    igp_metric->parent = this;

    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::has_data() const
{
    return compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::has_operation() const
{
    return is_set(operation)
	|| is_set(compare_routerid.operation)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compare_routerid.is_set || is_set(compare_routerid.operation)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        children["med"] = med;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "cost-community"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "igp-metric"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Med()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
    	,
    confed(nullptr) // presence node
{
    yang_name = "med"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::has_data() const
{
    return missing_at_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(operation)
	|| is_set(missing_at_worst.operation)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Med' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.operation)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confed != nullptr)
    {
        children["confed"] = confed;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
{
    yang_name = "confed"; yang_parent_name = "med";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::has_data() const
{
    return missing_at_worst.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(operation)
	|| is_set(missing_at_worst.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.operation)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::empty, "reflection"}
{
    yang_name = "client-to-client"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::has_data() const
{
    return reflection.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::has_operation() const
{
    return is_set(operation)
	|| is_set(reflection.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToClient' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.operation)) leaf_name_data.push_back(reflection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ClientToClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reflection")
    {
        reflection = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
    	,
    peers(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::has_data() const
{
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::has_operation() const
{
    return is_set(operation)
	|| is_set(identifier.operation)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confederation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{
    yang_name = "peers"; yang_parent_name = "confederation";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::has_data() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(peers_as.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Confederation::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
	,error_message(nullptr) // presence node
{
    yang_name = "consistency-checker"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::has_data() const
{
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(operation)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConsistencyChecker' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        children["error-message"] = error_message;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "auto-repair"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoRepair' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "error-message"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorMessage' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
    	,
    dampen(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::has_data() const
{
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"}
{
    yang_name = "dampen"; yang_parent_name = "dampening";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::has_data() const
{
    return half_life_time.is_set
	|| max_suppress_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(operation)
	|| is_set(half_life_time.operation)
	|| is_set(max_suppress_time.operation)
	|| is_set(reuse_time.operation)
	|| is_set(suppress_time.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampen' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.operation)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.operation)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.operation)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.operation)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::Default_()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::empty, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{
    yang_name = "default"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::~Default_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::has_data() const
{
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_unicast.operation)
	|| is_set(ipv6_nexthop.operation)
	|| is_set(local_preference.operation)
	|| is_set(route_target.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.operation)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.operation)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::has_data() const
{
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(extended.operation)
	|| is_set(restart_time.operation)
	|| is_set(stalepath_time.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.operation)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.operation)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended")
    {
        extended = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::has_operation() const
{
    return is_set(operation)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(operation)
	|| is_set(prefer.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::HaMode::Sso::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefer")
    {
        prefer = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    copy_attributes{YType::empty, "copy-attributes"},
    exist_map{YType::str, "exist-map"}
{
    yang_name = "inject-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::has_data() const
{
    return name.is_set
	|| copy_attributes.is_set
	|| exist_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(copy_attributes.operation)
	|| is_set(exist_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InjectMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.operation)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.operation)) leaf_name_data.push_back(exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::InjectMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{
    yang_name = "route-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::has_data() const
{
    return priority.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::has_operation() const
{
    return is_set(operation)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::has_data() const
{
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(permanent.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permanent")
    {
        permanent = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::has_data() const
{
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split != nullptr)
    {
        children["split"] = split;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{
    yang_name = "split"; yang_parent_name = "update-group";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::has_data() const
{
    return as_override.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(operation)
	|| is_set(as_override.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Split' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.operation)) leaf_name_data.push_back(as_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-override")
    {
        as_override = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
    	,
    trigger(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::has_data() const
{
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{
    yang_name = "trigger"; yang_parent_name = "nexthop";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::has_data() const
{
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| is_set(enable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::empty, "deterministic"}
{
    yang_name = "regexp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::has_data() const
{
    return deterministic.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::has_operation() const
{
    return is_set(operation)
	|| is_set(deterministic.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Regexp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.operation)) leaf_name_data.push_back(deterministic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Regexp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{
    yang_name = "transport"; yang_parent_name = "bgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::has_data() const
{
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(path_mtu_discovery.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{
    yang_name = "default-information"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(originate.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.operation)) leaf_name_data.push_back(originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "originate")
    {
        originate = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_>())
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::~Distance()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::has_data() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adm-distance")
    {
        for(auto const & c : adm_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance>();
        c->parent = this;
        adm_distance.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adm_distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{
    yang_name = "bgp"; yang_parent_name = "distance";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::has_data() const
{
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::has_operation() const
{
    return is_set(operation)
	|| is_set(extern_as.operation)
	|| is_set(internal_as.operation)
	|| is_set(local.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.operation)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.operation)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::Bgp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{
    yang_name = "adm-distance"; yang_parent_name = "distance";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::has_data() const
{
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(distance.operation)
	|| is_set(srcip.operation)
	|| is_set(wildbits.operation)
	|| is_set(acl.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance" <<"[distance='" <<distance <<"']" <<"[srcip='" <<srcip <<"']" <<"[wildbits='" <<wildbits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdmDistance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.operation)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.operation)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.operation)) leaf_name_data.push_back(acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Distance::AdmDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "srcip")
    {
        srcip = value;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
    }
    if(value_path == "acl")
    {
        acl = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::DistributeList()
    :
    id{YType::str, "id"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "distribute-list"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::has_data() const
{
    return id.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::In()
    :
    interface{YType::str, "interface"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::~In()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::Out()
    :
    interface{YType::str, "interface"}
{
    yang_name = "out"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::~Out()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::DistributeList::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaximumPaths()
    :
    eibgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp>())
	,external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter>())
	,ibgp(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath>())
{
    eibgp->parent = this;

    external_rtfilter->parent = this;

    ibgp->parent = this;

    max_path->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::has_data() const
{
    return (eibgp !=  nullptr && eibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::has_operation() const
{
    return is_set(operation)
	|| (eibgp !=  nullptr && eibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eibgp")
    {
        if(eibgp == nullptr)
        {
            eibgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp>();
        }
        return eibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eibgp != nullptr)
    {
        children["eibgp"] = eibgp;
    }

    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::Eibgp()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    yang_name = "eibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::~Eibgp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "eibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "eibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Eibgp::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::Ibgp()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath>())
	,unequal_cost(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    unequal_cost->parent = this;

    yang_name = "ibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data())
	|| (unequal_cost !=  nullptr && unequal_cost->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation())
	|| (unequal_cost !=  nullptr && unequal_cost->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath>();
        }
        return max_path;
    }

    if(child_yang_name == "unequal-cost")
    {
        if(unequal_cost == nullptr)
        {
            unequal_cost = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost>();
        }
        return unequal_cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    if(unequal_cost != nullptr)
    {
        children["unequal-cost"] = unequal_cost;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::UnequalCost()
    :
    external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter>())
	,max_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath>())
{
    external_rtfilter->parent = this;

    max_path->parent = this;

    yang_name = "unequal-cost"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::~UnequalCost()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::has_data() const
{
    return (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::has_operation() const
{
    return is_set(operation)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unequal-cost";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnequalCost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "unequal-cost";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "unequal-cost";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::UnequalCost::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::MaxPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "ibgp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::has_operation() const
{
    return is_set(operation)
	|| is_set(max.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.operation)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::MaximumPaths::Ibgp::ExternalRtfilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max")
    {
        max = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_self{YType::empty, "next-hop-self"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    remote_as{YType::uint16, "remote-as"},
    remove_private_as{YType::empty, "remove-private-as"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    route_reflector_cluster_id{YType::str, "route-reflector-cluster-id"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths>())
	,advertise(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise>())
	,advertise_map(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap>())
	,aigp(nullptr) // presence node
	,allowas_in(nullptr) // presence node
	,announce(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce>())
	,as_override(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability>())
	,default_originate(nullptr) // presence node
	,ebgp_multihop(nullptr) // presence node
	,fall_over(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver>())
	,ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode>())
	,inherit(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit>())
	,local_as(nullptr) // presence node
	,log_neighbor_changes(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix>())
	,password(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password>())
	,path_attribute(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute>())
	,peer_group(nullptr) // presence node
	,send_community(nullptr) // presence node
	,send_label(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel>())
	,slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer>())
	,timers(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers>())
	,translate_update(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate>())
	,transport(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport>())
	,ttl_security(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity>())
	,update_source(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource>())
{
    additional_paths->parent = this;

    advertise->parent = this;

    advertise_map->parent = this;

    announce->parent = this;

    capability->parent = this;

    fall_over->parent = this;

    ha_mode->parent = this;

    inherit->parent = this;

    maximum_prefix->parent = this;

    password->parent = this;

    path_attribute->parent = this;

    send_label->parent = this;

    slow_peer->parent = this;

    timers->parent = this;

    translate_update->parent = this;

    transport->parent = this;

    ttl_security->parent = this;

    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| dmzlink_bw.is_set
	|| next_hop_self.is_set
	|| next_hop_unchanged.is_set
	|| remote_as.is_set
	|| remove_private_as.is_set
	|| route_reflector_client.is_set
	|| route_reflector_cluster_id.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (advertise_map !=  nullptr && advertise_map->has_data())
	|| (aigp !=  nullptr && aigp->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (announce !=  nullptr && announce->has_data())
	|| (as_override !=  nullptr && as_override->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (send_label !=  nullptr && send_label->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (translate_update !=  nullptr && translate_update->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(activate.operation)
	|| is_set(advertisement_interval.operation)
	|| is_set(allow_policy.operation)
	|| is_set(cluster_id.operation)
	|| is_set(description.operation)
	|| is_set(disable_connected_check.operation)
	|| is_set(dmzlink_bw.operation)
	|| is_set(next_hop_self.operation)
	|| is_set(next_hop_unchanged.operation)
	|| is_set(remote_as.operation)
	|| is_set(remove_private_as.operation)
	|| is_set(route_reflector_client.operation)
	|| is_set(route_reflector_cluster_id.operation)
	|| is_set(shutdown.operation)
	|| is_set(soft_reconfiguration.operation)
	|| is_set(unsuppress_map.operation)
	|| is_set(version.operation)
	|| is_set(weight.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (advertise_map !=  nullptr && advertise_map->has_operation())
	|| (aigp !=  nullptr && aigp->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (announce !=  nullptr && announce->has_operation())
	|| (as_override !=  nullptr && as_override->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (send_label !=  nullptr && send_label->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (translate_update !=  nullptr && translate_update->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.operation)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.operation)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.operation)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.operation)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.operation)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_self.is_set || is_set(next_hop_self.operation)) leaf_name_data.push_back(next_hop_self.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.operation)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.operation)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.operation)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (route_reflector_cluster_id.is_set || is_set(route_reflector_cluster_id.operation)) leaf_name_data.push_back(route_reflector_cluster_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.operation)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.operation)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "advertise-map")
    {
        if(advertise_map == nullptr)
        {
            advertise_map = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap>();
        }
        return advertise_map;
    }

    if(child_yang_name == "aigp")
    {
        if(aigp == nullptr)
        {
            aigp = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp>();
        }
        return aigp;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "announce")
    {
        if(announce == nullptr)
        {
            announce = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce>();
        }
        return announce;
    }

    if(child_yang_name == "as-override")
    {
        if(as_override == nullptr)
        {
            as_override = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride>();
        }
        return as_override;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "send-label")
    {
        if(send_label == nullptr)
        {
            send_label = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel>();
        }
        return send_label;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "translate-update")
    {
        if(translate_update == nullptr)
        {
            translate_update = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate>();
        }
        return translate_update;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(advertise_map != nullptr)
    {
        children["advertise-map"] = advertise_map;
    }

    if(aigp != nullptr)
    {
        children["aigp"] = aigp;
    }

    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(announce != nullptr)
    {
        children["announce"] = announce;
    }

    if(as_override != nullptr)
    {
        children["as-override"] = as_override;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        children["default-originate"] = default_originate;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(send_label != nullptr)
    {
        children["send-label"] = send_label;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(translate_update != nullptr)
    {
        children["translate-update"] = translate_update;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "activate")
    {
        activate = value;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
    }
    if(value_path == "next-hop-self")
    {
        next_hop_self = value;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
    }
    if(value_path == "route-reflector-cluster-id")
    {
        route_reflector_cluster_id = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{
    yang_name = "peer-group"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::has_data() const
{
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_group_name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.operation)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PeerGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    dual_as{YType::empty, "dual-as"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"}
{
    yang_name = "local-as"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::has_data() const
{
    return as_no.is_set
	|| dual_as.is_set
	|| no_prepend.is_set
	|| replace_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as_no.operation)
	|| is_set(dual_as.operation)
	|| is_set(no_prepend.operation)
	|| is_set(replace_as.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.operation)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.operation)) leaf_name_data.push_back(dual_as.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.operation)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.operation)) leaf_name_data.push_back(replace_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LocalAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-no")
    {
        as_no = value;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::AdditionalPaths()
    :
    disable{YType::empty, "disable"},
    receive{YType::empty, "receive"}
    	,
    send(nullptr) // presence node
{
    yang_name = "additional-paths"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::has_data() const
{
    return disable.is_set
	|| receive.is_set
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(receive.operation)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdditionalPaths::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::Advertise()
    :
    best_external{YType::empty, "best-external"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths>())
	,diverse_path(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath>())
{
    additional_paths->parent = this;

    diverse_path->parent = this;

    yang_name = "advertise"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::has_data() const
{
    return best_external.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (diverse_path !=  nullptr && diverse_path->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(best_external.operation)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (diverse_path !=  nullptr && diverse_path->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.operation)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "diverse-path")
    {
        if(diverse_path == nullptr)
        {
            diverse_path = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath>();
        }
        return diverse_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(diverse_path != nullptr)
    {
        children["diverse-path"] = diverse_path;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best-external")
    {
        best_external = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::AdditionalPaths()
    :
    all(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "advertise";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::has_operation() const
{
    return is_set(operation)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(group_best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.operation)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "group-best")
    {
        group_best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::Best()
{
    yang_name = "best"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::has_data() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.size(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        for(auto const & c : best_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange>();
        c->parent = this;
        best_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : best_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "best-range"; yang_parent_name = "best";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(all.operation)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "best-range";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(best.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.operation)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::AdditionalPaths::GroupBest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "best")
    {
        best = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::DiversePath()
    :
    mpath{YType::empty, "mpath"}
    	,
    backup(nullptr) // presence node
{
    yang_name = "diverse-path"; yang_parent_name = "advertise";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::~DiversePath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::has_data() const
{
    return mpath.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(mpath.operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.operation)) leaf_name_data.push_back(mpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpath")
    {
        mpath = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::Backup()
    :
    mpath{YType::empty, "mpath"}
{
    yang_name = "backup"; yang_parent_name = "diverse-path";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::~Backup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::has_data() const
{
    return mpath.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(mpath.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.operation)) leaf_name_data.push_back(mpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Advertise::DiversePath::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpath")
    {
        mpath = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::AdvertiseMap()
{
    yang_name = "advertise-map"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::~AdvertiseMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertiseMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::Name()
    :
    word{YType::str, "word"},
    exist_map{YType::str, "exist-map"},
    non_exist_map{YType::str, "non-exist-map"}
{
    yang_name = "name"; yang_parent_name = "advertise-map";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::~Name()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::has_data() const
{
    return word.is_set
	|| exist_map.is_set
	|| non_exist_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(exist_map.operation)
	|| is_set(non_exist_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.operation)) leaf_name_data.push_back(exist_map.get_name_leafdata());
    if (non_exist_map.is_set || is_set(non_exist_map.operation)) leaf_name_data.push_back(non_exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AdvertiseMap::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
    }
    if(value_path == "non-exist-map")
    {
        non_exist_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Aigp()
    :
    send(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send>())
{
    send->parent = this;

    yang_name = "aigp"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::~Aigp()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::has_operation() const
{
    return is_set(operation)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aigp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aigp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::Send()
    :
    med{YType::empty, "med"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity>())
{
    cost_community->parent = this;

    yang_name = "send"; yang_parent_name = "aigp";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::~Send()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::has_data() const
{
    return med.is_set
	|| (cost_community !=  nullptr && cost_community->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::has_operation() const
{
    return is_set(operation)
	|| is_set(med.operation)
	|| (cost_community !=  nullptr && cost_community->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (med.is_set || is_set(med.operation)) leaf_name_data.push_back(med.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity>();
        }
        return cost_community;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "med")
    {
        med = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CostCommunity()
{
    yang_name = "cost-community"; yang_parent_name = "send";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::has_data() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::has_operation() const
{
    for (std::size_t index=0; index<cc_range.size(); index++)
    {
        if(cc_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cc-range")
    {
        for(auto const & c : cc_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange>();
        c->parent = this;
        cc_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cc_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::CcRange()
    :
    range{YType::uint8, "range"}
    	,
    poi(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>())
{
    poi->parent = this;

    yang_name = "cc-range"; yang_parent_name = "cost-community";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::~CcRange()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::has_data() const
{
    return range.is_set
	|| (poi !=  nullptr && poi->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| (poi !=  nullptr && poi->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cc-range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CcRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poi")
    {
        if(poi == nullptr)
        {
            poi = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi>();
        }
        return poi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(poi != nullptr)
    {
        children["poi"] = poi;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::Poi()
    :
    igp_cost(nullptr) // presence node
	,pre_bestpath(nullptr) // presence node
{
    yang_name = "poi"; yang_parent_name = "cc-range";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::~Poi()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_data() const
{
    return (igp_cost !=  nullptr && igp_cost->has_data())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::has_operation() const
{
    return is_set(operation)
	|| (igp_cost !=  nullptr && igp_cost->has_operation())
	|| (pre_bestpath !=  nullptr && pre_bestpath->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poi";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Poi' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-cost")
    {
        if(igp_cost == nullptr)
        {
            igp_cost = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost>();
        }
        return igp_cost;
    }

    if(child_yang_name == "pre-bestpath")
    {
        if(pre_bestpath == nullptr)
        {
            pre_bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath>();
        }
        return pre_bestpath;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igp_cost != nullptr)
    {
        children["igp-cost"] = igp_cost;
    }

    if(pre_bestpath != nullptr)
    {
        children["pre-bestpath"] = pre_bestpath;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::IgpCost()
    :
    transitive{YType::empty, "transitive"}
{
    yang_name = "igp-cost"; yang_parent_name = "poi";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::~IgpCost()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::has_operation() const
{
    return is_set(operation)
	|| is_set(transitive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-cost";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpCost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::PreBestpath()
    :
    transitive{YType::empty, "transitive"}
{
    yang_name = "pre-bestpath"; yang_parent_name = "poi";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::~PreBestpath()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_data() const
{
    return transitive.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::has_operation() const
{
    return is_set(operation)
	|| is_set(transitive.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreBestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitive.is_set || is_set(transitive.operation)) leaf_name_data.push_back(transitive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transitive")
    {
        transitive = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Announce()
    :
    rpki(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki>())
{
    rpki->parent = this;

    yang_name = "announce"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::~Announce()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::has_data() const
{
    return (rpki !=  nullptr && rpki->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::has_operation() const
{
    return is_set(operation)
	|| (rpki !=  nullptr && rpki->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Announce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki")
    {
        if(rpki == nullptr)
        {
            rpki = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki>();
        }
        return rpki;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpki != nullptr)
    {
        children["rpki"] = rpki;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::Rpki()
    :
    state{YType::empty, "state"}
{
    yang_name = "rpki"; yang_parent_name = "announce";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::~Rpki()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::has_data() const
{
    return state.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpki' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Announce::Rpki::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{
    yang_name = "allowas-in"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::has_data() const
{
    return as_number.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllowasIn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AllowasIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::AsOverride()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "as-override"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::~AsOverride()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-override";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsOverride' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::AsOverride::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::has_data() const
{
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::has_operation() const
{
    return is_set(operation)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(orf != nullptr)
    {
        children["orf"] = orf;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{
    yang_name = "orf"; yang_parent_name = "capability";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::has_data() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Orf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "default-originate"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultOriginate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DefaultOriginate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::DistributeList()
    :
    inout{YType::enumeration, "inout"},
    accesslist{YType::str, "accesslist"}
{
    yang_name = "distribute-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::has_data() const
{
    return inout.is_set
	|| accesslist.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(accesslist.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.operation)) leaf_name_data.push_back(accesslist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{
    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::has_data() const
{
    return max_hop.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(operation)
	|| is_set(max_hop.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EbgpMultihop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.operation)) leaf_name_data.push_back(max_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::EbgpMultihop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::FallOver()
    :
    bfd(nullptr) // presence node
{
    yang_name = "fall-over"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::has_data() const
{
    return (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::has_operation() const
{
    return is_set(operation)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FallOver' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::Bfd()
{
    yang_name = "bfd"; yang_parent_name = "fall-over";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::has_data() const
{
    return false;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{
    yang_name = "filter-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::has_data() const
{
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(as_path_list.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.operation)) leaf_name_data.push_back(as_path_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{
    yang_name = "inherit"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::has_data() const
{
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_policy.operation)
	|| is_set(peer_session.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inherit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.operation)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.operation)) leaf_name_data.push_back(peer_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Inherit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogNeighborChanges' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    restart{YType::uint16, "restart"},
    threshold{YType::uint8, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::has_data() const
{
    return max_prefix_no.is_set
	|| restart.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(max_prefix_no.operation)
	|| is_set(restart.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.operation)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
    }
    if(value_path == "restart")
    {
        restart = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{
    yang_name = "password"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(enctype.operation)
	|| is_set(text.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.operation)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enctype")
    {
        enctype = value;
    }
    if(value_path == "text")
    {
        text = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{
    yang_name = "prefix-list"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::has_data() const
{
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(prefix_list_name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.operation)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard>())
	,treat_as_withdraw(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;

    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::has_data() const
{
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::has_operation() const
{
    return is_set(operation)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathAttribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discard != nullptr)
    {
        children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type>())
	,range(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;

    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(operation)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::Attibute_Type()
    :
    in{YType::empty, "in"},
    type{YType::uint8, "type"}
{
    yang_name = "attibute_type"; yang_parent_name = "discard";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::~Attibute_Type()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::has_data() const
{
    return in.is_set
	|| type.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(type.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attibute_Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Attibute_Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::Range()
    :
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"},
    start_value{YType::uint8, "start_value"}
{
    yang_name = "range"; yang_parent_name = "discard";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    return end_value.is_set
	|| in.is_set
	|| start_value.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(end_value.operation)
	|| is_set(in.operation)
	|| is_set(start_value.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_value.is_set || is_set(end_value.operation)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (start_value.is_set || is_set(start_value.operation)) leaf_name_data.push_back(start_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end_value")
    {
        end_value = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "start_value")
    {
        start_value = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type>())
	,range(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;

    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(operation)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TreatAsWithdraw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::Attibute_Type()
    :
    in{YType::empty, "in"},
    type{YType::uint8, "type"}
{
    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::~Attibute_Type()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_data() const
{
    return in.is_set
	|| type.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(type.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attibute_Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Attibute_Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"},
    start_value{YType::uint8, "start_value"}
{
    yang_name = "range"; yang_parent_name = "treat-as-withdraw";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    return end_value.is_set
	|| in.is_set
	|| start_value.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(end_value.operation)
	|| is_set(in.operation)
	|| is_set(start_value.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_value.is_set || is_set(end_value.operation)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (start_value.is_set || is_set(start_value.operation)) leaf_name_data.push_back(start_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end_value")
    {
        end_value = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "start_value")
    {
        start_value = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{
    yang_name = "route-map"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::has_data() const
{
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(inout.operation)
	|| is_set(route_map_name.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[inout='" <<inout <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.operation)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.operation)) leaf_name_data.push_back(route_map_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inout")
    {
        inout = value;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{
    yang_name = "send-community"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::has_data() const
{
    return send_community_where.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(send_community_where.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.operation)) leaf_name_data.push_back(send_community_where.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::SendLabel()
    :
    send_label_explicit{YType::enumeration, "send-label-explicit"}
{
    yang_name = "send-label"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::~SendLabel()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::has_data() const
{
    return send_label_explicit.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(send_label_explicit.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-label";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendLabel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_label_explicit.is_set || is_set(send_label_explicit.operation)) leaf_name_data.push_back(send_label_explicit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-label-explicit")
    {
        send_label_explicit = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::has_operation() const
{
    return is_set(operation)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::has_data() const
{
    return threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(permanent.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permanent")
    {
        permanent = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::Timers()
    :
    holdtime{YType::uint16, "holdtime"},
    keepalive_interval{YType::uint16, "keepalive-interval"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{
    yang_name = "timers"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::has_data() const
{
    return holdtime.is_set
	|| keepalive_interval.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(holdtime.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(minimum_neighbor_hold.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.operation)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::TranslateUpdate()
    :
    ipv4(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "translate-update"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::~TranslateUpdate()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate-update";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TranslateUpdate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Ipv4()
    :
    multicast(nullptr) // presence node
{
    yang_name = "ipv4"; yang_parent_name = "translate-update";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::~Ipv4()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::has_data() const
{
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::Multicast()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "multicast"; yang_parent_name = "ipv4";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::~Multicast()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::has_data() const
{
    return unicast.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TranslateUpdate::Ipv4::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
    	,
    path_mtu_discovery(nullptr) // presence node
{
    yang_name = "transport"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::has_data() const
{
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_mode.operation)
	|| is_set(multi_session.operation)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.operation)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.operation)) leaf_name_data.push_back(multi_session.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "path-mtu-discovery"; yang_parent_name = "transport";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathMtuDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(hops.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hops")
    {
        hops = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::UpdateSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateSource' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "update-source";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::UpdateSource::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
	,sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "neighbor";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::has_data() const
{
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::has_operation() const
{
    return is_set(operation)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "graceful-restart"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Bgp_::Default_::RouteTargetEnum::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SoftReconfigurationEnum::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::PrefixListEnum::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::PrefixListEnum::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Capability::Orf::PrefixListEnum::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::DistributeList::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::FilterList::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::PrefixList::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::InoutEnum::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::RouteMap::InoutEnum::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::SendCommunityWhereEnum::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::SendCommunityWhereEnum::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendCommunity::SendCommunityWhereEnum::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::SendLabel::SendLabelExplicitEnum::explicit_null {0, "explicit-null"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::ConnectionModeEnum::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::NoVrf::Ipv6::Neighbor::Transport::ConnectionModeEnum::passive {1, "passive"};


}
}

