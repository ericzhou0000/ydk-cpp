
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_sam_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_sam_cfg {

Crypto::Crypto()
    :
    sam(std::make_shared<Crypto::Sam>())
	,ssh(std::make_shared<Crypto::Ssh>())
{
    sam->parent = this;

    ssh->parent = this;

    yang_name = "crypto"; yang_parent_name = "Cisco-IOS-XR-crypto-sam-cfg";
}

Crypto::~Crypto()
{
}

bool Crypto::has_data() const
{
    return (sam !=  nullptr && sam->has_data())
	|| (ssh !=  nullptr && ssh->has_data());
}

bool Crypto::has_operation() const
{
    return is_set(operation)
	|| (sam !=  nullptr && sam->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation());
}

std::string Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto";

    return path_buffer.str();

}

const EntityPath Crypto::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sam")
    {
        if(sam == nullptr)
        {
            sam = std::make_shared<Crypto::Sam>();
        }
        return sam;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Crypto::Ssh>();
        }
        return ssh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sam != nullptr)
    {
        children["sam"] = sam;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    return children;
}

void Crypto::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Crypto::clone_ptr() const
{
    return std::make_shared<Crypto>();
}

std::string Crypto::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Crypto::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Crypto::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Crypto::Sam::Sam()
    :
    prompt_interval(nullptr) // presence node
{
    yang_name = "sam"; yang_parent_name = "crypto";
}

Crypto::Sam::~Sam()
{
}

bool Crypto::Sam::has_data() const
{
    return (prompt_interval !=  nullptr && prompt_interval->has_data());
}

bool Crypto::Sam::has_operation() const
{
    return is_set(operation)
	|| (prompt_interval !=  nullptr && prompt_interval->has_operation());
}

std::string Crypto::Sam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sam";

    return path_buffer.str();

}

const EntityPath Crypto::Sam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Sam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt-interval")
    {
        if(prompt_interval == nullptr)
        {
            prompt_interval = std::make_shared<Crypto::Sam::PromptInterval>();
        }
        return prompt_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Sam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt_interval != nullptr)
    {
        children["prompt-interval"] = prompt_interval;
    }

    return children;
}

void Crypto::Sam::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Sam::PromptInterval::PromptInterval()
    :
    action{YType::enumeration, "action"},
    prompt_time{YType::uint32, "prompt-time"}
{
    yang_name = "prompt-interval"; yang_parent_name = "sam";
}

Crypto::Sam::PromptInterval::~PromptInterval()
{
}

bool Crypto::Sam::PromptInterval::has_data() const
{
    return action.is_set
	|| prompt_time.is_set;
}

bool Crypto::Sam::PromptInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(prompt_time.operation);
}

std::string Crypto::Sam::PromptInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt-interval";

    return path_buffer.str();

}

const EntityPath Crypto::Sam::PromptInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/sam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (prompt_time.is_set || is_set(prompt_time.operation)) leaf_name_data.push_back(prompt_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Sam::PromptInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Sam::PromptInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Sam::PromptInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "prompt-time")
    {
        prompt_time = value;
    }
}

Crypto::Ssh::Ssh()
    :
    client(std::make_shared<Crypto::Ssh::Client>())
	,server(std::make_shared<Crypto::Ssh::Server>())
{
    client->parent = this;

    server->parent = this;

    yang_name = "ssh"; yang_parent_name = "crypto";
}

Crypto::Ssh::~Ssh()
{
}

bool Crypto::Ssh::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Crypto::Ssh::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Crypto::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Crypto::Ssh::Client>();
        }
        return client;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Crypto::Ssh::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Crypto::Ssh::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Client::Client()
    :
    client_vrf{YType::str, "client-vrf"},
    dscp{YType::uint32, "dscp"},
    host_public_key{YType::str, "host-public-key"},
    source_interface{YType::str, "source-interface"}
{
    yang_name = "client"; yang_parent_name = "ssh";
}

Crypto::Ssh::Client::~Client()
{
}

bool Crypto::Ssh::Client::has_data() const
{
    return client_vrf.is_set
	|| dscp.is_set
	|| host_public_key.is_set
	|| source_interface.is_set;
}

bool Crypto::Ssh::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(client_vrf.operation)
	|| is_set(dscp.operation)
	|| is_set(host_public_key.operation)
	|| is_set(source_interface.operation);
}

std::string Crypto::Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_vrf.is_set || is_set(client_vrf.operation)) leaf_name_data.push_back(client_vrf.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (host_public_key.is_set || is_set(host_public_key.operation)) leaf_name_data.push_back(host_public_key.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-vrf")
    {
        client_vrf = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "host-public-key")
    {
        host_public_key = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Crypto::Ssh::Server::Server()
    :
    dscp{YType::uint32, "dscp"},
    logging{YType::empty, "logging"},
    netconf{YType::uint32, "netconf"},
    rate_limit{YType::uint32, "rate-limit"},
    rekey_time{YType::uint32, "rekey-time"},
    rekey_volume{YType::uint32, "rekey-volume"},
    session_limit{YType::uint32, "session-limit"},
    timeout{YType::uint32, "timeout"},
    v2{YType::empty, "v2"}
    	,
    disable(std::make_shared<Crypto::Ssh::Server::Disable>())
	,netconf_vrf_table(std::make_shared<Crypto::Ssh::Server::NetconfVrfTable>())
	,vrf_table(std::make_shared<Crypto::Ssh::Server::VrfTable>())
{
    disable->parent = this;

    netconf_vrf_table->parent = this;

    vrf_table->parent = this;

    yang_name = "server"; yang_parent_name = "ssh";
}

Crypto::Ssh::Server::~Server()
{
}

bool Crypto::Ssh::Server::has_data() const
{
    return dscp.is_set
	|| logging.is_set
	|| netconf.is_set
	|| rate_limit.is_set
	|| rekey_time.is_set
	|| rekey_volume.is_set
	|| session_limit.is_set
	|| timeout.is_set
	|| v2.is_set
	|| (disable !=  nullptr && disable->has_data())
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Crypto::Ssh::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation)
	|| is_set(logging.operation)
	|| is_set(netconf.operation)
	|| is_set(rate_limit.operation)
	|| is_set(rekey_time.operation)
	|| is_set(rekey_volume.operation)
	|| is_set(session_limit.operation)
	|| is_set(timeout.operation)
	|| is_set(v2.operation)
	|| (disable !=  nullptr && disable->has_operation())
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Crypto::Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (netconf.is_set || is_set(netconf.operation)) leaf_name_data.push_back(netconf.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.operation)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (rekey_time.is_set || is_set(rekey_time.operation)) leaf_name_data.push_back(rekey_time.get_name_leafdata());
    if (rekey_volume.is_set || is_set(rekey_volume.operation)) leaf_name_data.push_back(rekey_volume.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (v2.is_set || is_set(v2.operation)) leaf_name_data.push_back(v2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Crypto::Ssh::Server::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "netconf-vrf-table")
    {
        if(netconf_vrf_table == nullptr)
        {
            netconf_vrf_table = std::make_shared<Crypto::Ssh::Server::NetconfVrfTable>();
        }
        return netconf_vrf_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Crypto::Ssh::Server::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(netconf_vrf_table != nullptr)
    {
        children["netconf-vrf-table"] = netconf_vrf_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Crypto::Ssh::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
    if(value_path == "netconf")
    {
        netconf = value;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
    }
    if(value_path == "rekey-time")
    {
        rekey_time = value;
    }
    if(value_path == "rekey-volume")
    {
        rekey_volume = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "v2")
    {
        v2 = value;
    }
}

Crypto::Ssh::Server::Disable::Disable()
    :
    hmac(std::make_shared<Crypto::Ssh::Server::Disable::Hmac>())
{
    hmac->parent = this;

    yang_name = "disable"; yang_parent_name = "server";
}

Crypto::Ssh::Server::Disable::~Disable()
{
}

bool Crypto::Ssh::Server::Disable::has_data() const
{
    return (hmac !=  nullptr && hmac->has_data());
}

bool Crypto::Ssh::Server::Disable::has_operation() const
{
    return is_set(operation)
	|| (hmac !=  nullptr && hmac->has_operation());
}

std::string Crypto::Ssh::Server::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::Disable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac")
    {
        if(hmac == nullptr)
        {
            hmac = std::make_shared<Crypto::Ssh::Server::Disable::Hmac>();
        }
        return hmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hmac != nullptr)
    {
        children["hmac"] = hmac;
    }

    return children;
}

void Crypto::Ssh::Server::Disable::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Server::Disable::Hmac::Hmac()
    :
    hmac_sha512{YType::boolean, "hmac-sha512"}
{
    yang_name = "hmac"; yang_parent_name = "disable";
}

Crypto::Ssh::Server::Disable::Hmac::~Hmac()
{
}

bool Crypto::Ssh::Server::Disable::Hmac::has_data() const
{
    return hmac_sha512.is_set;
}

bool Crypto::Ssh::Server::Disable::Hmac::has_operation() const
{
    return is_set(operation)
	|| is_set(hmac_sha512.operation);
}

std::string Crypto::Ssh::Server::Disable::Hmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::Disable::Hmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/disable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha512.is_set || is_set(hmac_sha512.operation)) leaf_name_data.push_back(hmac_sha512.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Disable::Hmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Disable::Hmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::Disable::Hmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hmac-sha512")
    {
        hmac_sha512 = value;
    }
}

Crypto::Ssh::Server::VrfTable::VrfTable()
{
    yang_name = "vrf-table"; yang_parent_name = "server";
}

Crypto::Ssh::Server::VrfTable::~VrfTable()
{
}

bool Crypto::Ssh::Server::VrfTable::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Crypto::Ssh::Server::VrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Crypto::Ssh::Server::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::VrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Crypto::Ssh::Server::VrfTable::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Crypto::Ssh::Server::VrfTable::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Server::VrfTable::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    ipv6_access_list{YType::str, "ipv6-access-list"}
{
    yang_name = "vrf"; yang_parent_name = "vrf-table";
}

Crypto::Ssh::Server::VrfTable::Vrf::~Vrf()
{
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_access_list.operation)
	|| is_set(ipv6_access_list.operation);
}

std::string Crypto::Ssh::Server::VrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::VrfTable::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/vrf-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.operation)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.operation)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::VrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::VrfTable::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::VrfTable::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
    }
}

Crypto::Ssh::Server::NetconfVrfTable::NetconfVrfTable()
{
    yang_name = "netconf-vrf-table"; yang_parent_name = "server";
}

Crypto::Ssh::Server::NetconfVrfTable::~NetconfVrfTable()
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Crypto::Ssh::Server::NetconfVrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-vrf-table";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::NetconfVrfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::NetconfVrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Crypto::Ssh::Server::NetconfVrfTable::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::NetconfVrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Crypto::Ssh::Server::NetconfVrfTable::set_value(const std::string & value_path, std::string value)
{
}

Crypto::Ssh::Server::NetconfVrfTable::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    ipv6_access_list{YType::str, "ipv6-access-list"}
{
    yang_name = "vrf"; yang_parent_name = "netconf-vrf-table";
}

Crypto::Ssh::Server::NetconfVrfTable::Vrf::~Vrf()
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_access_list.operation)
	|| is_set(ipv6_access_list.operation);
}

std::string Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/netconf-vrf-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.operation)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.operation)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::NetconfVrfTable::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
    }
}

const Enum::YLeaf CryptoSamActionEnum::proceed {1, "proceed"};
const Enum::YLeaf CryptoSamActionEnum::terminate {2, "terminate"};


}
}

