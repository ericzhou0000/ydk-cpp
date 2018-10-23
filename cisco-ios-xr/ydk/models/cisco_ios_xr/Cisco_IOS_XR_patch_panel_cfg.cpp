
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_patch_panel_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_patch_panel_cfg {

PatchPanel::PatchPanel()
    :
    enable{YType::empty, "enable"},
    user_name{YType::str, "user-name"},
    password{YType::str, "password"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "patch-panel"; yang_parent_name = "Cisco-IOS-XR-patch-panel-cfg"; is_top_level_class = true; has_list_ancestor = false; is_presence_container = true;
}

PatchPanel::~PatchPanel()
{
}

bool PatchPanel::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| user_name.is_set
	|| password.is_set
	|| ipv4.is_set;
}

bool PatchPanel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(user_name.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string PatchPanel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-patch-panel-cfg:patch-panel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PatchPanel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (user_name.is_set || is_set(user_name.yfilter)) leaf_name_data.push_back(user_name.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PatchPanel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PatchPanel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PatchPanel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-name")
    {
        user_name = value;
        user_name.value_namespace = name_space;
        user_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void PatchPanel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "user-name")
    {
        user_name.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> PatchPanel::clone_ptr() const
{
    return std::make_shared<PatchPanel>();
}

std::string PatchPanel::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PatchPanel::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PatchPanel::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PatchPanel::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PatchPanel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "user-name" || name == "password" || name == "ipv4")
        return true;
    return false;
}


}
}

