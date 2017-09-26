
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_reboot_history_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_reboot_history_oper {

RebootHistory::RebootHistory()
{

    yang_name = "reboot-history"; yang_parent_name = "Cisco-IOS-XR-reboot-history-oper"; is_top_level_class = true; has_list_ancestor = false;
}

RebootHistory::~RebootHistory()
{
}

bool RebootHistory::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool RebootHistory::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RebootHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-reboot-history-oper:reboot-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RebootHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RebootHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<RebootHistory::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RebootHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RebootHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RebootHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RebootHistory::clone_ptr() const
{
    return std::make_shared<RebootHistory>();
}

std::string RebootHistory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string RebootHistory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function RebootHistory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RebootHistory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool RebootHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

RebootHistory::Node::Node()
    :
    node_name{YType::str, "node-name"}
{

    yang_name = "node"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = false;
}

RebootHistory::Node::~Node()
{
}

bool RebootHistory::Node::has_data() const
{
    for (std::size_t index=0; index<reboot_history.size(); index++)
    {
        if(reboot_history[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool RebootHistory::Node::has_operation() const
{
    for (std::size_t index=0; index<reboot_history.size(); index++)
    {
        if(reboot_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string RebootHistory::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-reboot-history-oper:reboot-history/" << get_segment_path();
    return path_buffer.str();
}

std::string RebootHistory::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RebootHistory::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RebootHistory::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reboot-history")
    {
        for(auto const & c : reboot_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RebootHistory::Node::RebootHistory_>();
        c->parent = this;
        reboot_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RebootHistory::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reboot_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RebootHistory::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void RebootHistory::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool RebootHistory::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reboot-history" || name == "node-name")
        return true;
    return false;
}

RebootHistory::Node::RebootHistory_::RebootHistory_()
    :
    cause_code{YType::uint32, "cause-code"},
    no{YType::uint32, "no"},
    reason{YType::str, "reason"},
    time{YType::str, "time"}
{

    yang_name = "reboot-history"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

RebootHistory::Node::RebootHistory_::~RebootHistory_()
{
}

bool RebootHistory::Node::RebootHistory_::has_data() const
{
    return cause_code.is_set
	|| no.is_set
	|| reason.is_set
	|| time.is_set;
}

bool RebootHistory::Node::RebootHistory_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cause_code.yfilter)
	|| ydk::is_set(no.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string RebootHistory::Node::RebootHistory_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RebootHistory::Node::RebootHistory_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cause_code.is_set || is_set(cause_code.yfilter)) leaf_name_data.push_back(cause_code.get_name_leafdata());
    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RebootHistory::Node::RebootHistory_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RebootHistory::Node::RebootHistory_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RebootHistory::Node::RebootHistory_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cause-code")
    {
        cause_code = value;
        cause_code.value_namespace = name_space;
        cause_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void RebootHistory::Node::RebootHistory_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cause-code")
    {
        cause_code.yfilter = yfilter;
    }
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool RebootHistory::Node::RebootHistory_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause-code" || name == "no" || name == "reason" || name == "time")
        return true;
    return false;
}


}
}
