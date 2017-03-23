
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "load-balance-data"; yang_parent_name = "sub-interface";
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_link_threshold.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalanceData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.operation)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::get_children()
{
    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundles()
{
    yang_name = "bundles"; yang_parent_name = "node";
}

BundlesAdjacency::Nodes::Node::Bundles::~Bundles()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::Node::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bundles' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(std::move(c));
        children[segment_path] = bundle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::get_children()
{
    for (auto const & c : bundle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::set_value(const std::string & value_path, std::string value)
{
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::Bundle()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    bundle_info(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo>())
{
    bundle_info->parent = this;
    children["bundle-info"] = bundle_info;

    yang_name = "bundle"; yang_parent_name = "bundles";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::~Bundle()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_data() const
{
    return bundle_name.is_set
	|| (bundle_info !=  nullptr && bundle_info->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| (bundle_info !=  nullptr && bundle_info->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-name='" <<bundle_name <<"']";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bundle' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-info")
    {
        if(bundle_info != nullptr)
        {
            children["bundle-info"] = bundle_info;
        }
        else
        {
            bundle_info = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo>();
            bundle_info->parent = this;
            children["bundle-info"] = bundle_info;
        }
        return children.at("bundle-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::get_children()
{
    if(children.find("bundle-info") == children.end())
    {
        if(bundle_info != nullptr)
        {
            children["bundle-info"] = bundle_info;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::BundleInfo()
    :
    avoid_rebalance{YType::boolean, "avoid-rebalance"},
    max_member_count{YType::uint32, "max-member-count"},
    media{YType::enumeration, "media"}
    	,
    brief(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief>())
	,load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData>())
{
    brief->parent = this;
    children["brief"] = brief;

    load_balance_data->parent = this;
    children["load-balance-data"] = load_balance_data;

    yang_name = "bundle-info"; yang_parent_name = "bundle";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::~BundleInfo()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return avoid_rebalance.is_set
	|| max_member_count.is_set
	|| media.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(avoid_rebalance.operation)
	|| is_set(max_member_count.operation)
	|| is_set(media.operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-info";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avoid_rebalance.is_set || is_set(avoid_rebalance.operation)) leaf_name_data.push_back(avoid_rebalance.get_name_leafdata());
    if (max_member_count.is_set || is_set(max_member_count.operation)) leaf_name_data.push_back(max_member_count.get_name_leafdata());
    if (media.is_set || is_set(media.operation)) leaf_name_data.push_back(media.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            brief = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
        else
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData>();
            load_balance_data->parent = this;
            children["load-balance-data"] = load_balance_data;
        }
        return children.at("load-balance-data");
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface>();
        c->parent = this;
        sub_interface.push_back(std::move(c));
        children[segment_path] = sub_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("load-balance-data") == children.end())
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
    }

    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sub_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "avoid-rebalance")
    {
        avoid_rebalance = value;
    }
    if(value_path == "max-member-count")
    {
        max_member_count = value;
    }
    if(value_path == "media")
    {
        media = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::Brief()
    :
    interface_name{YType::str, "interface-name"},
    member_count{YType::uint32, "member-count"},
    sub_interface_count{YType::uint32, "sub-interface-count"},
    total_weight{YType::uint32, "total-weight"}
{
    yang_name = "brief"; yang_parent_name = "bundle-info";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::~Brief()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| member_count.is_set
	|| sub_interface_count.is_set
	|| total_weight.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(member_count.operation)
	|| is_set(sub_interface_count.operation)
	|| is_set(total_weight.operation);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (member_count.is_set || is_set(member_count.operation)) leaf_name_data.push_back(member_count.get_name_leafdata());
    if (sub_interface_count.is_set || is_set(sub_interface_count.operation)) leaf_name_data.push_back(sub_interface_count.get_name_leafdata());
    if (total_weight.is_set || is_set(total_weight.operation)) leaf_name_data.push_back(total_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface>();
        c->parent = this;
        sub_interface.push_back(std::move(c));
        children[segment_path] = sub_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::get_children()
{
    for (auto const & c : sub_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "member-count")
    {
        member_count = value;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count = value;
    }
    if(value_path == "total-weight")
    {
        total_weight = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;
    children["load-balance-data"] = load_balance_data;

    yang_name = "sub-interface"; yang_parent_name = "brief";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubInterface' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
        else
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData>();
            load_balance_data->parent = this;
            children["load-balance-data"] = load_balance_data;
        }
        return children.at("load-balance-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::get_children()
{
    if(children.find("load-balance-data") == children.end())
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "load-balance-data"; yang_parent_name = "sub-interface";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_link_threshold.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalanceData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.operation)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::get_children()
{
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "load-balance-data"; yang_parent_name = "bundle-info";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_link_threshold.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalanceData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.operation)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::get_children()
{
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::Member()
    :
    bandwidth{YType::uint8, "bandwidth"},
    interface_name{YType::str, "interface-name"},
    link_id{YType::uint8, "link-id"},
    link_order_number{YType::uint8, "link-order-number"}
{
    yang_name = "member"; yang_parent_name = "bundle-info";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::~Member()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_data() const
{
    return bandwidth.is_set
	|| interface_name.is_set
	|| link_id.is_set
	|| link_order_number.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_id.operation)
	|| is_set(link_order_number.operation);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::get_children()
{
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;
    children["load-balance-data"] = load_balance_data;

    yang_name = "sub-interface"; yang_parent_name = "bundle-info";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubInterface' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
        else
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData>();
            load_balance_data->parent = this;
            children["load-balance-data"] = load_balance_data;
        }
        return children.at("load-balance-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::get_children()
{
    if(children.find("load-balance-data") == children.end())
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::LoadBalanceData()
    :
    local_link_threshold{YType::uint32, "local-link-threshold"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "load-balance-data"; yang_parent_name = "sub-interface";
}

BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::~LoadBalanceData()
{
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_data() const
{
    return local_link_threshold.is_set
	|| type.is_set
	|| value_.is_set;
}

bool BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::has_operation() const
{
    return is_set(operation)
	|| is_set(local_link_threshold.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-data";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalanceData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_link_threshold.is_set || is_set(local_link_threshold.operation)) leaf_name_data.push_back(local_link_threshold.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::get_children()
{
    return children;
}

void BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-link-threshold")
    {
        local_link_threshold = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}


}
}
