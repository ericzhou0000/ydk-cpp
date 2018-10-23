
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mdrv_lib_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mdrv_lib_cfg {

FastShutdown::FastShutdown()
    :
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "fast-shutdown"; yang_parent_name = "Cisco-IOS-XR-mdrv-lib-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

FastShutdown::~FastShutdown()
{
}

bool FastShutdown::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set;
}

bool FastShutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string FastShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mdrv-lib-cfg:fast-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FastShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> FastShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> FastShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void FastShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void FastShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> FastShutdown::clone_ptr() const
{
    return std::make_shared<FastShutdown>();
}

std::string FastShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FastShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FastShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FastShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FastShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet")
        return true;
    return false;
}


}
}

