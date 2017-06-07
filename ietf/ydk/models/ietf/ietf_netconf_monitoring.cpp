
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf_monitoring.hpp"

namespace ydk {
namespace ietf_netconf_monitoring {

SchemaFormatIdentity::SchemaFormatIdentity()
     : Identity("ietf-netconf-monitoring:schema-format")
{
}

SchemaFormatIdentity::~SchemaFormatIdentity()
{
}

TransportIdentity::TransportIdentity()
     : Identity("ietf-netconf-monitoring:transport")
{
}

TransportIdentity::~TransportIdentity()
{
}

NetconfState::NetconfState()
    :
    capabilities(std::make_shared<NetconfState::Capabilities>())
	,datastores(std::make_shared<NetconfState::Datastores>())
	,schemas(std::make_shared<NetconfState::Schemas>())
	,sessions(std::make_shared<NetconfState::Sessions>())
	,statistics(std::make_shared<NetconfState::Statistics>())
{
    capabilities->parent = this;

    datastores->parent = this;

    schemas->parent = this;

    sessions->parent = this;

    statistics->parent = this;

    yang_name = "netconf-state"; yang_parent_name = "ietf-netconf-monitoring";
}

NetconfState::~NetconfState()
{
}

bool NetconfState::has_data() const
{
    return (capabilities !=  nullptr && capabilities->has_data())
	|| (datastores !=  nullptr && datastores->has_data())
	|| (schemas !=  nullptr && schemas->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool NetconfState::has_operation() const
{
    return is_set(operation)
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (datastores !=  nullptr && datastores->has_operation())
	|| (schemas !=  nullptr && schemas->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string NetconfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:netconf-state";

    return path_buffer.str();

}

const EntityPath NetconfState::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> NetconfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "capabilities")
    {
        if(capabilities == nullptr)
        {
            capabilities = std::make_shared<NetconfState::Capabilities>();
        }
        return capabilities;
    }

    if(child_yang_name == "datastores")
    {
        if(datastores == nullptr)
        {
            datastores = std::make_shared<NetconfState::Datastores>();
        }
        return datastores;
    }

    if(child_yang_name == "schemas")
    {
        if(schemas == nullptr)
        {
            schemas = std::make_shared<NetconfState::Schemas>();
        }
        return schemas;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<NetconfState::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<NetconfState::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(capabilities != nullptr)
    {
        children["capabilities"] = capabilities;
    }

    if(datastores != nullptr)
    {
        children["datastores"] = datastores;
    }

    if(schemas != nullptr)
    {
        children["schemas"] = schemas;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void NetconfState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> NetconfState::clone_ptr() const
{
    return std::make_shared<NetconfState>();
}

std::string NetconfState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string NetconfState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function NetconfState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

NetconfState::Capabilities::Capabilities()
    :
    capability{YType::str, "capability"}
{
    yang_name = "capabilities"; yang_parent_name = "netconf-state";
}

NetconfState::Capabilities::~Capabilities()
{
}

bool NetconfState::Capabilities::has_data() const
{
    for (auto const & leaf : capability.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetconfState::Capabilities::has_operation() const
{
    for (auto const & leaf : capability.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(capability.operation);
}

std::string NetconfState::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

const EntityPath NetconfState::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto capability_name_datas = capability.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), capability_name_datas.begin(), capability_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Capabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Capabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability")
    {
        capability.append(value);
    }
}

NetconfState::Datastores::Datastores()
{
    yang_name = "datastores"; yang_parent_name = "netconf-state";
}

NetconfState::Datastores::~Datastores()
{
}

bool NetconfState::Datastores::has_data() const
{
    for (std::size_t index=0; index<datastore.size(); index++)
    {
        if(datastore[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Datastores::has_operation() const
{
    for (std::size_t index=0; index<datastore.size(); index++)
    {
        if(datastore[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetconfState::Datastores::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastores";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datastore")
    {
        for(auto const & c : datastore)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Datastores::Datastore>();
        c->parent = this;
        datastore.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : datastore)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Datastores::set_value(const std::string & value_path, std::string value)
{
}

NetconfState::Datastores::Datastore::Datastore()
    :
    name{YType::enumeration, "name"}
    	,
    locks(nullptr) // presence node
{
    yang_name = "datastore"; yang_parent_name = "datastores";
}

NetconfState::Datastores::Datastore::~Datastore()
{
}

bool NetconfState::Datastores::Datastore::has_data() const
{
    return name.is_set
	|| (locks !=  nullptr && locks->has_data());
}

bool NetconfState::Datastores::Datastore::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (locks !=  nullptr && locks->has_operation());
}

std::string NetconfState::Datastores::Datastore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datastore" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/datastores/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locks")
    {
        if(locks == nullptr)
        {
            locks = std::make_shared<NetconfState::Datastores::Datastore::Locks>();
        }
        return locks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(locks != nullptr)
    {
        children["locks"] = locks;
    }

    return children;
}

void NetconfState::Datastores::Datastore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

NetconfState::Datastores::Datastore::Locks::Locks()
    :
    global_lock(std::make_shared<NetconfState::Datastores::Datastore::Locks::GlobalLock>())
{
    global_lock->parent = this;

    yang_name = "locks"; yang_parent_name = "datastore";
}

NetconfState::Datastores::Datastore::Locks::~Locks()
{
}

bool NetconfState::Datastores::Datastore::Locks::has_data() const
{
    for (std::size_t index=0; index<partial_lock.size(); index++)
    {
        if(partial_lock[index]->has_data())
            return true;
    }
    return (global_lock !=  nullptr && global_lock->has_data());
}

bool NetconfState::Datastores::Datastore::Locks::has_operation() const
{
    for (std::size_t index=0; index<partial_lock.size(); index++)
    {
        if(partial_lock[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (global_lock !=  nullptr && global_lock->has_operation());
}

std::string NetconfState::Datastores::Datastore::Locks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locks";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::Locks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Locks' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-lock")
    {
        if(global_lock == nullptr)
        {
            global_lock = std::make_shared<NetconfState::Datastores::Datastore::Locks::GlobalLock>();
        }
        return global_lock;
    }

    if(child_yang_name == "partial-lock")
    {
        for(auto const & c : partial_lock)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Datastores::Datastore::Locks::PartialLock>();
        c->parent = this;
        partial_lock.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global_lock != nullptr)
    {
        children["global-lock"] = global_lock;
    }

    for (auto const & c : partial_lock)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Datastores::Datastore::Locks::set_value(const std::string & value_path, std::string value)
{
}

NetconfState::Datastores::Datastore::Locks::GlobalLock::GlobalLock()
    :
    locked_by_session{YType::uint32, "locked-by-session"},
    locked_time{YType::str, "locked-time"}
{
    yang_name = "global-lock"; yang_parent_name = "locks";
}

NetconfState::Datastores::Datastore::Locks::GlobalLock::~GlobalLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::GlobalLock::has_data() const
{
    return locked_by_session.is_set
	|| locked_time.is_set;
}

bool NetconfState::Datastores::Datastore::Locks::GlobalLock::has_operation() const
{
    return is_set(operation)
	|| is_set(locked_by_session.operation)
	|| is_set(locked_time.operation);
}

std::string NetconfState::Datastores::Datastore::Locks::GlobalLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-lock";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::Locks::GlobalLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalLock' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locked_by_session.is_set || is_set(locked_by_session.operation)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.operation)) leaf_name_data.push_back(locked_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::GlobalLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::GlobalLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Datastores::Datastore::Locks::GlobalLock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
    }
    if(value_path == "locked-time")
    {
        locked_time = value;
    }
}

NetconfState::Datastores::Datastore::Locks::PartialLock::PartialLock()
    :
    lock_id{YType::uint32, "lock-id"},
    locked_by_session{YType::uint32, "locked-by-session"},
    locked_node{YType::str, "locked-node"},
    locked_time{YType::str, "locked-time"},
    select{YType::str, "select"}
{
    yang_name = "partial-lock"; yang_parent_name = "locks";
}

NetconfState::Datastores::Datastore::Locks::PartialLock::~PartialLock()
{
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_data() const
{
    for (auto const & leaf : locked_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : select.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lock_id.is_set
	|| locked_by_session.is_set
	|| locked_time.is_set;
}

bool NetconfState::Datastores::Datastore::Locks::PartialLock::has_operation() const
{
    for (auto const & leaf : locked_node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : select.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(lock_id.operation)
	|| is_set(locked_by_session.operation)
	|| is_set(locked_node.operation)
	|| is_set(locked_time.operation)
	|| is_set(select.operation);
}

std::string NetconfState::Datastores::Datastore::Locks::PartialLock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partial-lock" <<"[lock-id='" <<lock_id <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Datastores::Datastore::Locks::PartialLock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PartialLock' in ietf_netconf_monitoring cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lock_id.is_set || is_set(lock_id.operation)) leaf_name_data.push_back(lock_id.get_name_leafdata());
    if (locked_by_session.is_set || is_set(locked_by_session.operation)) leaf_name_data.push_back(locked_by_session.get_name_leafdata());
    if (locked_time.is_set || is_set(locked_time.operation)) leaf_name_data.push_back(locked_time.get_name_leafdata());

    auto locked_node_name_datas = locked_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), locked_node_name_datas.begin(), locked_node_name_datas.end());
    auto select_name_datas = select.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), select_name_datas.begin(), select_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Datastores::Datastore::Locks::PartialLock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Datastores::Datastore::Locks::PartialLock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Datastores::Datastore::Locks::PartialLock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lock-id")
    {
        lock_id = value;
    }
    if(value_path == "locked-by-session")
    {
        locked_by_session = value;
    }
    if(value_path == "locked-node")
    {
        locked_node.append(value);
    }
    if(value_path == "locked-time")
    {
        locked_time = value;
    }
    if(value_path == "select")
    {
        select.append(value);
    }
}

NetconfState::Schemas::Schemas()
{
    yang_name = "schemas"; yang_parent_name = "netconf-state";
}

NetconfState::Schemas::~Schemas()
{
}

bool NetconfState::Schemas::has_data() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Schemas::has_operation() const
{
    for (std::size_t index=0; index<schema.size(); index++)
    {
        if(schema[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetconfState::Schemas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schemas";

    return path_buffer.str();

}

const EntityPath NetconfState::Schemas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Schemas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schema")
    {
        for(auto const & c : schema)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<NetconfState::Schemas::Schema>();
        c->parent = this;
        schema.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Schemas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : schema)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Schemas::set_value(const std::string & value_path, std::string value)
{
}

NetconfState::Schemas::Schema::Schema()
    :
    identifier{YType::str, "identifier"},
    version{YType::str, "version"},
    format{YType::identityref, "format"},
    location{YType::str, "location"},
    namespace_{YType::str, "namespace"}
{
    yang_name = "schema"; yang_parent_name = "schemas";
}

NetconfState::Schemas::Schema::~Schema()
{
}

bool NetconfState::Schemas::Schema::has_data() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return identifier.is_set
	|| version.is_set
	|| format.is_set
	|| namespace_.is_set;
}

bool NetconfState::Schemas::Schema::has_operation() const
{
    for (auto const & leaf : location.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(identifier.operation)
	|| is_set(version.operation)
	|| is_set(format.operation)
	|| is_set(location.operation)
	|| is_set(namespace_.operation);
}

std::string NetconfState::Schemas::Schema::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schema" <<"[identifier='" <<identifier <<"']" <<"[version='" <<version <<"']" <<"[format='" <<format <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Schemas::Schema::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/schemas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.operation)) leaf_name_data.push_back(namespace_.get_name_leafdata());

    auto location_name_datas = location.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), location_name_datas.begin(), location_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Schemas::Schema::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Schemas::Schema::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Schemas::Schema::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "location")
    {
        location.append(value);
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
    }
}

NetconfState::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "netconf-state";
}

NetconfState::Sessions::~Sessions()
{
}

bool NetconfState::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool NetconfState::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NetconfState::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath NetconfState::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<NetconfState::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NetconfState::Sessions::set_value(const std::string & value_path, std::string value)
{
}

NetconfState::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    in_bad_rpcs{YType::uint32, "in-bad-rpcs"},
    in_rpcs{YType::uint32, "in-rpcs"},
    login_time{YType::str, "login-time"},
    out_notifications{YType::uint32, "out-notifications"},
    out_rpc_errors{YType::uint32, "out-rpc-errors"},
    source_host{YType::str, "source-host"},
    transport{YType::identityref, "transport"},
    username{YType::str, "username"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

NetconfState::Sessions::Session::~Session()
{
}

bool NetconfState::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| in_bad_rpcs.is_set
	|| in_rpcs.is_set
	|| login_time.is_set
	|| out_notifications.is_set
	|| out_rpc_errors.is_set
	|| source_host.is_set
	|| transport.is_set
	|| username.is_set;
}

bool NetconfState::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(in_bad_rpcs.operation)
	|| is_set(in_rpcs.operation)
	|| is_set(login_time.operation)
	|| is_set(out_notifications.operation)
	|| is_set(out_rpc_errors.operation)
	|| is_set(source_host.operation)
	|| is_set(transport.operation)
	|| is_set(username.operation);
}

std::string NetconfState::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

const EntityPath NetconfState::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.operation)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.operation)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (login_time.is_set || is_set(login_time.operation)) leaf_name_data.push_back(login_time.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.operation)) leaf_name_data.push_back(out_notifications.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.operation)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());
    if (source_host.is_set || is_set(source_host.operation)) leaf_name_data.push_back(source_host.get_name_leafdata());
    if (transport.is_set || is_set(transport.operation)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
    }
    if(value_path == "login-time")
    {
        login_time = value;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
    }
    if(value_path == "source-host")
    {
        source_host = value;
    }
    if(value_path == "transport")
    {
        transport = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

NetconfState::Statistics::Statistics()
    :
    dropped_sessions{YType::uint32, "dropped-sessions"},
    in_bad_hellos{YType::uint32, "in-bad-hellos"},
    in_bad_rpcs{YType::uint32, "in-bad-rpcs"},
    in_rpcs{YType::uint32, "in-rpcs"},
    in_sessions{YType::uint32, "in-sessions"},
    netconf_start_time{YType::str, "netconf-start-time"},
    out_notifications{YType::uint32, "out-notifications"},
    out_rpc_errors{YType::uint32, "out-rpc-errors"}
{
    yang_name = "statistics"; yang_parent_name = "netconf-state";
}

NetconfState::Statistics::~Statistics()
{
}

bool NetconfState::Statistics::has_data() const
{
    return dropped_sessions.is_set
	|| in_bad_hellos.is_set
	|| in_bad_rpcs.is_set
	|| in_rpcs.is_set
	|| in_sessions.is_set
	|| netconf_start_time.is_set
	|| out_notifications.is_set
	|| out_rpc_errors.is_set;
}

bool NetconfState::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_sessions.operation)
	|| is_set(in_bad_hellos.operation)
	|| is_set(in_bad_rpcs.operation)
	|| is_set(in_rpcs.operation)
	|| is_set(in_sessions.operation)
	|| is_set(netconf_start_time.operation)
	|| is_set(out_notifications.operation)
	|| is_set(out_rpc_errors.operation);
}

std::string NetconfState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath NetconfState::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:netconf-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_sessions.is_set || is_set(dropped_sessions.operation)) leaf_name_data.push_back(dropped_sessions.get_name_leafdata());
    if (in_bad_hellos.is_set || is_set(in_bad_hellos.operation)) leaf_name_data.push_back(in_bad_hellos.get_name_leafdata());
    if (in_bad_rpcs.is_set || is_set(in_bad_rpcs.operation)) leaf_name_data.push_back(in_bad_rpcs.get_name_leafdata());
    if (in_rpcs.is_set || is_set(in_rpcs.operation)) leaf_name_data.push_back(in_rpcs.get_name_leafdata());
    if (in_sessions.is_set || is_set(in_sessions.operation)) leaf_name_data.push_back(in_sessions.get_name_leafdata());
    if (netconf_start_time.is_set || is_set(netconf_start_time.operation)) leaf_name_data.push_back(netconf_start_time.get_name_leafdata());
    if (out_notifications.is_set || is_set(out_notifications.operation)) leaf_name_data.push_back(out_notifications.get_name_leafdata());
    if (out_rpc_errors.is_set || is_set(out_rpc_errors.operation)) leaf_name_data.push_back(out_rpc_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> NetconfState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NetconfState::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NetconfState::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-sessions")
    {
        dropped_sessions = value;
    }
    if(value_path == "in-bad-hellos")
    {
        in_bad_hellos = value;
    }
    if(value_path == "in-bad-rpcs")
    {
        in_bad_rpcs = value;
    }
    if(value_path == "in-rpcs")
    {
        in_rpcs = value;
    }
    if(value_path == "in-sessions")
    {
        in_sessions = value;
    }
    if(value_path == "netconf-start-time")
    {
        netconf_start_time = value;
    }
    if(value_path == "out-notifications")
    {
        out_notifications = value;
    }
    if(value_path == "out-rpc-errors")
    {
        out_rpc_errors = value;
    }
}

GetSchemaRpc::GetSchemaRpc()
    :
    input(std::make_shared<GetSchemaRpc::Input>())
	,output(std::make_shared<GetSchemaRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "get-schema"; yang_parent_name = "ietf-netconf-monitoring";
}

GetSchemaRpc::~GetSchemaRpc()
{
}

bool GetSchemaRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool GetSchemaRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string GetSchemaRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-netconf-monitoring:get-schema";

    return path_buffer.str();

}

const EntityPath GetSchemaRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> GetSchemaRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<GetSchemaRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<GetSchemaRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchemaRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void GetSchemaRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> GetSchemaRpc::clone_ptr() const
{
    return std::make_shared<GetSchemaRpc>();
}

std::string GetSchemaRpc::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string GetSchemaRpc::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function GetSchemaRpc::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

GetSchemaRpc::Input::Input()
    :
    format{YType::identityref, "format"},
    identifier{YType::str, "identifier"},
    version{YType::str, "version"}
{
    yang_name = "input"; yang_parent_name = "get-schema";
}

GetSchemaRpc::Input::~Input()
{
}

bool GetSchemaRpc::Input::has_data() const
{
    return format.is_set
	|| identifier.is_set
	|| version.is_set;
}

bool GetSchemaRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(identifier.operation)
	|| is_set(version.operation);
}

std::string GetSchemaRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath GetSchemaRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetSchemaRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchemaRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetSchemaRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

GetSchemaRpc::Output::Output()
    :
    data{YType::str, "data"}
{
    yang_name = "output"; yang_parent_name = "get-schema";
}

GetSchemaRpc::Output::~Output()
{
}

bool GetSchemaRpc::Output::has_data() const
{
    return data.is_set;
}

bool GetSchemaRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation);
}

std::string GetSchemaRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath GetSchemaRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-netconf-monitoring:get-schema/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GetSchemaRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GetSchemaRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void GetSchemaRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
}

NetconfBeepIdentity::NetconfBeepIdentity()
     : Identity("ietf-netconf-monitoring:netconf-beep")
{
}

NetconfBeepIdentity::~NetconfBeepIdentity()
{
}

NetconfSshIdentity::NetconfSshIdentity()
     : Identity("ietf-netconf-monitoring:netconf-ssh")
{
}

NetconfSshIdentity::~NetconfSshIdentity()
{
}

RncIdentity::RncIdentity()
     : Identity("ietf-netconf-monitoring:rnc")
{
}

RncIdentity::~RncIdentity()
{
}

YinIdentity::YinIdentity()
     : Identity("ietf-netconf-monitoring:yin")
{
}

YinIdentity::~YinIdentity()
{
}

RngIdentity::RngIdentity()
     : Identity("ietf-netconf-monitoring:rng")
{
}

RngIdentity::~RngIdentity()
{
}

XsdIdentity::XsdIdentity()
     : Identity("ietf-netconf-monitoring:xsd")
{
}

XsdIdentity::~XsdIdentity()
{
}

NetconfSoapOverBeepIdentity::NetconfSoapOverBeepIdentity()
     : Identity("ietf-netconf-monitoring:netconf-soap-over-beep")
{
}

NetconfSoapOverBeepIdentity::~NetconfSoapOverBeepIdentity()
{
}

NetconfTlsIdentity::NetconfTlsIdentity()
     : Identity("ietf-netconf-monitoring:netconf-tls")
{
}

NetconfTlsIdentity::~NetconfTlsIdentity()
{
}

YangIdentity::YangIdentity()
     : Identity("ietf-netconf-monitoring:yang")
{
}

YangIdentity::~YangIdentity()
{
}

NetconfSoapOverHttpsIdentity::NetconfSoapOverHttpsIdentity()
     : Identity("ietf-netconf-monitoring:netconf-soap-over-https")
{
}

NetconfSoapOverHttpsIdentity::~NetconfSoapOverHttpsIdentity()
{
}

const Enum::YLeaf NetconfDatastoreTypeEnum::running {0, "running"};
const Enum::YLeaf NetconfDatastoreTypeEnum::candidate {1, "candidate"};
const Enum::YLeaf NetconfDatastoreTypeEnum::startup {2, "startup"};

const Enum::YLeaf NetconfState::Schemas::Schema::LocationEnum::NETCONF {0, "NETCONF"};


}
}

