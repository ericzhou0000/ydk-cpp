
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_telnet_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_telnet_cfg {

Ipv6Telnet::Ipv6Telnet()
    :
    client(std::make_shared<Ipv6Telnet::Client>())
{
    client->parent = this;
    children["client"] = client;

    yang_name = "ipv6-telnet"; yang_parent_name = "Cisco-IOS-XR-ipv4-telnet-cfg";
}

Ipv6Telnet::~Ipv6Telnet()
{
}

bool Ipv6Telnet::has_data() const
{
    return (client !=  nullptr && client->has_data());
}

bool Ipv6Telnet::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation());
}

std::string Ipv6Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv6-telnet";

    return path_buffer.str();

}

EntityPath Ipv6Telnet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        if(client != nullptr)
        {
            children["client"] = client;
        }
        else
        {
            client = std::make_shared<Ipv6Telnet::Client>();
            client->parent = this;
            children["client"] = client;
        }
        return children.at("client");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Telnet::get_children()
{
    if(children.find("client") == children.end())
    {
        if(client != nullptr)
        {
            children["client"] = client;
        }
    }

    return children;
}

void Ipv6Telnet::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ipv6Telnet::clone_ptr() const
{
    return std::make_shared<Ipv6Telnet>();
}

std::string Ipv6Telnet::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Telnet::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Telnet::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv6Telnet::Client::Client()
    :
    source_interface{YType::str, "source-interface"}
{
    yang_name = "client"; yang_parent_name = "ipv6-telnet";
}

Ipv6Telnet::Client::~Client()
{
}

bool Ipv6Telnet::Client::has_data() const
{
    return source_interface.is_set;
}

bool Ipv6Telnet::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation);
}

std::string Ipv6Telnet::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

EntityPath Ipv6Telnet::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv6-telnet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Telnet::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Telnet::Client::get_children()
{
    return children;
}

void Ipv6Telnet::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Ipv4Telnet::Ipv4Telnet()
    :
    client(std::make_shared<Ipv4Telnet::Client>())
{
    client->parent = this;
    children["client"] = client;

    yang_name = "ipv4-telnet"; yang_parent_name = "Cisco-IOS-XR-ipv4-telnet-cfg";
}

Ipv4Telnet::~Ipv4Telnet()
{
}

bool Ipv4Telnet::has_data() const
{
    return (client !=  nullptr && client->has_data());
}

bool Ipv4Telnet::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation());
}

std::string Ipv4Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv4-telnet";

    return path_buffer.str();

}

EntityPath Ipv4Telnet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv4Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        if(client != nullptr)
        {
            children["client"] = client;
        }
        else
        {
            client = std::make_shared<Ipv4Telnet::Client>();
            client->parent = this;
            children["client"] = client;
        }
        return children.at("client");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Telnet::get_children()
{
    if(children.find("client") == children.end())
    {
        if(client != nullptr)
        {
            children["client"] = client;
        }
    }

    return children;
}

void Ipv4Telnet::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ipv4Telnet::clone_ptr() const
{
    return std::make_shared<Ipv4Telnet>();
}

std::string Ipv4Telnet::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Telnet::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Telnet::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv4Telnet::Client::Client()
    :
    source_interface{YType::str, "source-interface"}
{
    yang_name = "client"; yang_parent_name = "ipv4-telnet";
}

Ipv4Telnet::Client::~Client()
{
}

bool Ipv4Telnet::Client::has_data() const
{
    return source_interface.is_set;
}

bool Ipv4Telnet::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation);
}

std::string Ipv4Telnet::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

EntityPath Ipv4Telnet::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-telnet-cfg:ipv4-telnet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Telnet::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Telnet::Client::get_children()
{
    return children;
}

void Ipv4Telnet::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}


}
}
